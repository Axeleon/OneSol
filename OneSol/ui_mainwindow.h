/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *pictureLabel;
    QPushButton *saleButton;
    QPushButton *inventoryButton;
    QPushButton *staffButton;
    QPushButton *reportButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 1024, 70));
        QFont font;
        font.setFamily(QStringLiteral("Symbola"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 127);\n"
"\n"
"\n"
""));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        pictureLabel = new QLabel(centralwidget);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(0, 0, 1024, 600));
        pictureLabel->setAutoFillBackground(true);
        pictureLabel->setStyleSheet(QStringLiteral("border-image: url(:/image/yesBorder.png);"));
        pictureLabel->setFrameShadow(QFrame::Raised);
        pictureLabel->setPixmap(QPixmap(QString::fromUtf8(":/image/Vs2.0BamBoo.jpg")));
        pictureLabel->setScaledContents(true);
        saleButton = new QPushButton(centralwidget);
        saleButton->setObjectName(QStringLiteral("saleButton"));
        saleButton->setGeometry(QRect(560, 80, 281, 210));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(saleButton->sizePolicy().hasHeightForWidth());
        saleButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Sans Serif"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        saleButton->setFont(font1);
        saleButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        saleButton->setFlat(false);
        inventoryButton = new QPushButton(centralwidget);
        inventoryButton->setObjectName(QStringLiteral("inventoryButton"));
        inventoryButton->setGeometry(QRect(170, 80, 281, 210));
        sizePolicy.setHeightForWidth(inventoryButton->sizePolicy().hasHeightForWidth());
        inventoryButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Sans Serif"));
        font2.setPointSize(34);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        inventoryButton->setFont(font2);
        inventoryButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        inventoryButton->setFlat(false);
        staffButton = new QPushButton(centralwidget);
        staffButton->setObjectName(QStringLiteral("staffButton"));
        staffButton->setGeometry(QRect(560, 330, 281, 210));
        sizePolicy.setHeightForWidth(staffButton->sizePolicy().hasHeightForWidth());
        staffButton->setSizePolicy(sizePolicy);
        staffButton->setFont(font1);
        staffButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        staffButton->setFlat(false);
        reportButton = new QPushButton(centralwidget);
        reportButton->setObjectName(QStringLiteral("reportButton"));
        reportButton->setGeometry(QRect(170, 330, 281, 210));
        sizePolicy.setHeightForWidth(reportButton->sizePolicy().hasHeightForWidth());
        reportButton->setSizePolicy(sizePolicy);
        reportButton->setFont(font1);
        reportButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0.041, x2:0.534178, y2:0.358, stop:0.0366492 rgba(64, 103, 10, 164), stop:1 rgba(164, 179, 60, 255));\n"
"\n"
"	border-radius: 10px;\n"
"	\n"
"	color: rgb(0, 0, 127);\n"
"}"));
        reportButton->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);
        pictureLabel->raise();
        label->raise();
        saleButton->raise();
        inventoryButton->raise();
        staffButton->raise();
        reportButton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "OneSol Point of Sale System", 0));
        pictureLabel->setText(QString());
        saleButton->setText(QApplication::translate("MainWindow", "Sales", 0));
        inventoryButton->setText(QApplication::translate("MainWindow", "Inventory", 0));
        staffButton->setText(QApplication::translate("MainWindow", "Staff", 0));
        reportButton->setText(QApplication::translate("MainWindow", "Report", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
