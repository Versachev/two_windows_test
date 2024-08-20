#include "editorwindow.h"
#include "readerwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EditorWindow ew;
    ReaderWindow rw;
    ew.show();
    rw.show();
    return a.exec();
}
