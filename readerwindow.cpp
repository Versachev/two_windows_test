#include "readerwindow.h"
#include "ui_readerwindow.h"
#include <QHBoxLayout>
#include <QtConcurrent/QtConcurrent>

ReaderWindow::ReaderWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ReaderWindow)
{
    ui->setupUi(this);
}


ReaderWindow::~ReaderWindow()
{
    delete ui;
}


QString ReaderWindow::convert(QString input, bool flag) {
    if (flag) {
        int dotIndex = input.indexOf('.'); // Находим позицию символа '.'
        QString numString;
        if (dotIndex != -1) { // Проверяем, что символ '.' найден
            numString = input.left(dotIndex); // Получаем подстроку от начала строки до символа '.'
        } else {
            qDebug() << "Символ '.' не найден в строке";
        }
        return numString;
    }
    else {
        // Разделяем строку по разделителю ";"
        QStringList parts = input.split(';');
        // Извлекаем число и текст
        QString  textPart = parts[0].trimmed(); // Удаляем лишние пробелы
        QString  numberPart = parts[1].trimmed();
        return numberPart + ". " + textPart;
    }
}


void ReaderWindow::readFromFile() {

    QString filePath = QDir::currentPath() + "/Output.txt"; // Абсолютный путь к файлу
    QFile file(filePath);
    // попытка открытия файла для чтения
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);

        while (!in.atEnd()) {
            QString line = in.readLine();
            createNewBtn(convert(line, 0));
        }
        file.close();
    } else {
        qDebug() << "Не удалось открыть файл: " << filePath;
    }
}

void ReaderWindow::createNewBtn(QString str)
{
    // Создаем новую кнопку
    QPushButton *newButton = new QPushButton(QString("%1").arg(str), ui->scrollArea_forBnts);

    bool ok;
    qint64 num = convert(str, 1).toLongLong(&ok); // Преобразуем подстроку в qint64

    if (ok) {
        // Используем переменную num
        qDebug() << "Число до точки: " << num;
    } else {
        qDebug() << "Ошибка при преобразовании строки в число";
    }

    // Устанавливаем соединение между кнопкой и слотом calculateX при нажатии на кнопку
    connect(newButton, &QPushButton::clicked, this, [this, num]() {
        // Выполняем операцию num * 2 в отдельном потоке
        QFutureWatcher<qint64> *futureWatcher = new QFutureWatcher<qint64>(this);
        connect(futureWatcher, &QFutureWatcher<qint64>::finished, this, [=]() {
            qint64 result = futureWatcher->result();
            ui->textEdit_calculation->setText(QString::number(num) + " * 2 = " + QString::number(result));
            futureWatcher->deleteLater(); // Освобождаем память после использования
        });

        QFuture<qint64> future = QtConcurrent::run([num]() {
            return num * 2;
        });

        futureWatcher->setFuture(future);
    });

    newButton->setStyleSheet("QPushButton{"
                             "border: 1px solid; "
                             "width: 300px;"
                             "height: 40px;"
                             "border-radius: 8px;"
                             "background-color: qlineargradient(spread:pad, x1:0.488, y1:1, x2:0.466, y2:0.057, stop:0 rgba(78, 78, 78, 253), stop:1 rgba(255, 255, 255, 255));"
                             "font: 18px/1.5 Arial, sans-serif;}"
                             "QPushButton:pressed {"
                             "   background-color: #ccc;}");
    // Добавляем кнопку в layout
    ui->verticalLayout->addWidget(newButton);

    // Обновляем layout
    ui->scrollArea_forBnts->widget()->setLayout(ui->verticalLayout);

}


void ReaderWindow::on_load_pushButton_clicked()
{
    readFromFile();
}
