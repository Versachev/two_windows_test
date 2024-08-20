/********************************************************************************
** Form generated from reading UI file 'readerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERWINDOW_H
#define UI_READERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReaderWindow
{
public:
    QPushButton *load_pushButton;
    QScrollArea *scrollArea_forBnts;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_calculation;

    void setupUi(QWidget *ReaderWindow)
    {
        if (ReaderWindow->objectName().isEmpty())
            ReaderWindow->setObjectName("ReaderWindow");
        ReaderWindow->resize(490, 486);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReaderWindow->sizePolicy().hasHeightForWidth());
        ReaderWindow->setSizePolicy(sizePolicy);
        ReaderWindow->setMinimumSize(QSize(490, 486));
        ReaderWindow->setMaximumSize(QSize(490, 486));
        ReaderWindow->setStyleSheet(QString::fromUtf8("background-color: #d4e1f5"));
        load_pushButton = new QPushButton(ReaderWindow);
        load_pushButton->setObjectName("load_pushButton");
        load_pushButton->setGeometry(QRect(180, 410, 151, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Vivaldi")});
        font.setPointSize(22);
        load_pushButton->setFont(font);
        load_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  border-radius: 8px;\n"
"  background-color: rgb(0, 140, 255);\n"
"  border: 2px solid #75879f;\n"
"  color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: rgb(62, 181, 255);\n"
"}"));
        scrollArea_forBnts = new QScrollArea(ReaderWindow);
        scrollArea_forBnts->setObjectName("scrollArea_forBnts");
        scrollArea_forBnts->setGeometry(QRect(100, 30, 341, 281));
        scrollArea_forBnts->setStyleSheet(QString::fromUtf8("border: 0px solid;\n"
""));
        scrollArea_forBnts->setFrameShape(QFrame::Shape::StyledPanel);
        scrollArea_forBnts->setFrameShadow(QFrame::Shadow::Sunken);
        scrollArea_forBnts->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        scrollArea_forBnts->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 341, 281));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, -20, 341, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(22);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_forBnts->setWidget(scrollAreaWidgetContents);
        textEdit_calculation = new QTextEdit(ReaderWindow);
        textEdit_calculation->setObjectName("textEdit_calculation");
        textEdit_calculation->setGeometry(QRect(120, 340, 261, 51));
        QFont font1;
        font1.setPointSize(12);
        textEdit_calculation->setFont(font1);
        textEdit_calculation->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        textEdit_calculation->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"text-align: right;"));
        textEdit_calculation->setLineWrapMode(QTextEdit::LineWrapMode::WidgetWidth);
        textEdit_calculation->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

        retranslateUi(ReaderWindow);

        QMetaObject::connectSlotsByName(ReaderWindow);
    } // setupUi

    void retranslateUi(QWidget *ReaderWindow)
    {
        ReaderWindow->setWindowTitle(QCoreApplication::translate("ReaderWindow", "Reader window", nullptr));
        load_pushButton->setText(QCoreApplication::translate("ReaderWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        textEdit_calculation->setHtml(QCoreApplication::translate("ReaderWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReaderWindow: public Ui_ReaderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERWINDOW_H
