/********************************************************************************
** Form generated from reading UI file 'editorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORWINDOW_H
#define UI_EDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorWindow
{
public:
    QWidget *centralwidget;
    QPushButton *save_pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *EditorWindow)
    {
        if (EditorWindow->objectName().isEmpty())
            EditorWindow->setObjectName("EditorWindow");
        EditorWindow->resize(478, 486);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditorWindow->sizePolicy().hasHeightForWidth());
        EditorWindow->setSizePolicy(sizePolicy);
        EditorWindow->setMinimumSize(QSize(478, 486));
        EditorWindow->setMaximumSize(QSize(478, 486));
        QFont font;
        font.setPointSize(9);
        EditorWindow->setFont(font);
        centralwidget = new QWidget(EditorWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: #d4e1f5"));
        save_pushButton = new QPushButton(centralwidget);
        save_pushButton->setObjectName("save_pushButton");
        save_pushButton->setGeometry(QRect(160, 340, 151, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Vivaldi")});
        font1.setPointSize(22);
        save_pushButton->setFont(font1);
        save_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  border-radius: 8px;\n"
"  background-color: rgb(0, 140, 255);\n"
"  border: 2px solid #75879f;\n"
"  color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(62, 181, 255);\n"
"}"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(40, 20, 391, 261));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textBrowser->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByKeyboard|Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextBrowserInteraction|Qt::TextInteractionFlag::TextEditable|Qt::TextInteractionFlag::TextSelectableByMouse);
        EditorWindow->setCentralWidget(centralwidget);

        retranslateUi(EditorWindow);

        QMetaObject::connectSlotsByName(EditorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditorWindow)
    {
        EditorWindow->setWindowTitle(QCoreApplication::translate("EditorWindow", "Editor Window", nullptr));
        save_pushButton->setText(QCoreApplication::translate("EditorWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorWindow: public Ui_EditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORWINDOW_H
