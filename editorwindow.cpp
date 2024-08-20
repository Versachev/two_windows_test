#include "editorwindow.h"
#include "ui_editorwindow.h"
#include <QFile>
#include <QTextDocument>
#include <QtWidgets>

EditorWindow::EditorWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditorWindow)
{
    ui->setupUi(this);
}

EditorWindow::~EditorWindow()
{
    delete ui;
}

bool EditorWindow::checkFormat(QString str) {
    // Разделение строки по разделителю ";"
    QStringList parts = str.split(';');

    // Проверка, что получилось ровно два элемента
    if (parts.size() != 2) {
        return 0;
    }

    // Проверка, что первый элемент - это текст
    bool isText = true;
    for (int i = 0; i < parts[0].length(); ++i) {
        QChar ch = parts[0].at(i);
        if (!ch.isLetterOrNumber() && !ch.isSpace()) {
            isText = 0;
            break;
        }
    }

    if (!isText) {
        return 0;
    }

    // Проверка, что второй элемент - это число
    bool isNumber = 0;
    bool ok;
    parts[1].toInt(&ok);
    if (ok) {
        isNumber = 1;
    }

    return isText && isNumber;
}



void EditorWindow::OutputToFile(QString str) {
    QString filePath = QDir::currentPath() + "/Output.txt"; // Абсолютный путь к файлу
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        qDebug() << "Ошибка открытия файла:" << file.errorString();
        return;
    }
    else {
        qDebug() << "file otkrit" ;
    }
    QTextStream out(&file);
    out << str << "\n";
    out.flush();
    file.close();

    qDebug() << "Строка успешно записана в файл: " << str;
}


void EditorWindow::on_save_pushButton_clicked()
{
    QTextCursor cursor = ui->textBrowser->textCursor();
    cursor.movePosition(QTextCursor::Start); // перемещение курсора к началу

    do {
        QString line = cursor.block().text();
        if (checkFormat(line)) {
            OutputToFile(line);
        }
    } while (cursor.movePosition(QTextCursor::NextBlock)); // Перемещение к следующему блоку
}



