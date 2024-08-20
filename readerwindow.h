#ifndef READERWINDOW_H
#define READERWINDOW_H

#include <QWidget>
#include <QtWidgets>

namespace Ui {
class ReaderWindow;
}

class ReaderWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ReaderWindow(QWidget *parent = nullptr);
    ~ReaderWindow();

private slots:
    void on_load_pushButton_clicked();

private:
    QString convert(QString input, bool flag);
    void readFromFile(); //
    void createNewBtn(QString str);


    Ui::ReaderWindow *ui;
};

#endif // READERWINDOW_H
