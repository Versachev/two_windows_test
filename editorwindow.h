#ifndef EDITORWINDOW_H
#define EDITORWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class EditorWindow;
}
QT_END_NAMESPACE

class EditorWindow : public QMainWindow
{
    Q_OBJECT

public:
    EditorWindow(QWidget *parent = nullptr);
    ~EditorWindow();

private slots:
    void on_save_pushButton_clicked();

private:
    bool checkFormat(QString str);   // проверка формата строк в текcтовом браузере; 1 - подходящий формат, 0 - неподходящий формат
    void OutputToFile(QString str);  // Запись строк подходящего формата в файл

    Ui::EditorWindow *ui;
};
#endif // EDITORWINDOW_H
