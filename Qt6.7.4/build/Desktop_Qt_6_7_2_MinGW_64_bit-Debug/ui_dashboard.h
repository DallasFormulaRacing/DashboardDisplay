/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QProgressBar *tachometer;
    QLCDNumber *gear;
    QLCDNumber *oilTemp;
    QLCDNumber *waterTemp;
    QLabel *gearLabel;
    QLabel *waterLabel;
    QLabel *oilLabel;
    QLabel *unit_1;
    QLabel *unit_2;
    QLabel *lowVoltage;
    QLabel *overheat;
    QLabel *lowFuel;
    QLabel *boot;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(800, 600);
        Dashboard->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName("centralwidget");
        tachometer = new QProgressBar(centralwidget);
        tachometer->setObjectName("tachometer");
        tachometer->setGeometry(QRect(150, 50, 241, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ebrima")});
        font.setPointSize(72);
        font.setBold(true);
        font.setItalic(false);
        tachometer->setFont(font);
        tachometer->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"	font: 700 72pt \"Ebrima\";\n"
"	color: white;\n"
"	background-color: black;\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	background-image: url(:/images/img/tachometer.png);\n"
"	background-color: black;\n"
"}"));
        tachometer->setMaximum(15000);
        tachometer->setValue(24);
        tachometer->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gear = new QLCDNumber(centralwidget);
        gear->setObjectName("gear");
        gear->setGeometry(QRect(60, 310, 64, 91));
        gear->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"	font: 700 72pt \"Segoe UI\";\n"
"	color: white;\n"
"}"));
        gear->setFrameShape(QFrame::Shape::NoFrame);
        gear->setFrameShadow(QFrame::Shadow::Plain);
        gear->setDigitCount(1);
        gear->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        oilTemp = new QLCDNumber(centralwidget);
        oilTemp->setObjectName("oilTemp");
        oilTemp->setGeometry(QRect(160, 300, 64, 91));
        oilTemp->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"	font: 700 72pt \"Segoe UI\";\n"
"	color: white;\n"
"}"));
        oilTemp->setFrameShape(QFrame::Shape::NoFrame);
        oilTemp->setFrameShadow(QFrame::Shadow::Plain);
        oilTemp->setDigitCount(3);
        oilTemp->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        waterTemp = new QLCDNumber(centralwidget);
        waterTemp->setObjectName("waterTemp");
        waterTemp->setGeometry(QRect(270, 300, 64, 91));
        waterTemp->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"	font: 700 72pt \"Segoe UI\";\n"
"	color: white;\n"
"}"));
        waterTemp->setFrameShape(QFrame::Shape::NoFrame);
        waterTemp->setFrameShadow(QFrame::Shadow::Plain);
        waterTemp->setDigitCount(3);
        waterTemp->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        gearLabel = new QLabel(centralwidget);
        gearLabel->setObjectName("gearLabel");
        gearLabel->setGeometry(QRect(80, 250, 41, 21));
        gearLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 20pt \"8514oem\";\n"
"	color: white;\n"
"}"));
        waterLabel = new QLabel(centralwidget);
        waterLabel->setObjectName("waterLabel");
        waterLabel->setGeometry(QRect(180, 290, 51, 21));
        waterLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 20pt \"8514oem\";\n"
"	color: white;\n"
"}"));
        oilLabel = new QLabel(centralwidget);
        oilLabel->setObjectName("oilLabel");
        oilLabel->setGeometry(QRect(160, 270, 41, 21));
        oilLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 20pt \"8514oem\";\n"
"	color: white;\n"
"}"));
        unit_1 = new QLabel(centralwidget);
        unit_1->setObjectName("unit_1");
        unit_1->setGeometry(QRect(130, 340, 16, 21));
        unit_1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 20pt \"8514oem\";\n"
"	color: white;\n"
"}"));
        unit_2 = new QLabel(centralwidget);
        unit_2->setObjectName("unit_2");
        unit_2->setGeometry(QRect(170, 400, 16, 21));
        unit_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 20pt \"8514oem\";\n"
"	color: white;\n"
"}"));
        lowVoltage = new QLabel(centralwidget);
        lowVoltage->setObjectName("lowVoltage");
        lowVoltage->setGeometry(QRect(70, 440, 51, 51));
        lowVoltage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	image: url(:/images/img/low-voltage.png);\n"
"}"));
        overheat = new QLabel(centralwidget);
        overheat->setObjectName("overheat");
        overheat->setGeometry(QRect(150, 470, 51, 51));
        overheat->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	image: url(:/images/img/hot-oil.png);\n"
"}"));
        lowFuel = new QLabel(centralwidget);
        lowFuel->setObjectName("lowFuel");
        lowFuel->setEnabled(true);
        lowFuel->setGeometry(QRect(210, 450, 51, 51));
        lowFuel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	image: url(:/images/img/warning-fuel.png);\n"
"}"));
        boot = new QLabel(centralwidget);
        boot->setObjectName("boot");
        boot->setGeometry(QRect(270, 460, 51, 51));
        boot->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	image: url(:/images/img/DFR-Logo.png);\n"
"}"));
        Dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        Dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(Dashboard);
        statusbar->setObjectName("statusbar");
        Dashboard->setStatusBar(statusbar);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        tachometer->setFormat(QCoreApplication::translate("Dashboard", "%v", nullptr));
        gearLabel->setText(QCoreApplication::translate("Dashboard", "GEAR", nullptr));
        waterLabel->setText(QCoreApplication::translate("Dashboard", "WATER", nullptr));
        oilLabel->setText(QCoreApplication::translate("Dashboard", "OIL", nullptr));
        unit_1->setText(QCoreApplication::translate("Dashboard", "F", nullptr));
        unit_2->setText(QCoreApplication::translate("Dashboard", "F", nullptr));
        lowVoltage->setText(QString());
        overheat->setText(QString());
        lowFuel->setText(QString());
        boot->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
