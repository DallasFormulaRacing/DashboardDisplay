#include "dashboard.h"
#include "ui_dashboard.h"
#include <QThread>

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    setup();
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::setup()
{
    setWindowTitle("Dashboard v2.0");
    setAllVisible(false);
    resize(800,480);

    ui->boot->resize(800,480);
    ui->boot->move(0,0);

    ui->tachometer->resize(800,250);
    ui->tachometer->move(0,0);

    ui->gear->resize(100,230);
    ui->gear->move(350,250);
    ui->gearLabel->resize(50,20);
    ui->gearLabel->move(375,250);

    ui->oilTemp->resize(300,100);
    ui->oilTemp->move(0,300);
    ui->oilLabel->resize(50,20);
    ui->oilLabel->move(160,250);
    ui->unit_1->move(250,300);

    ui->waterTemp->resize(300,100);
    ui->waterTemp->move(450,300);
    ui->waterLabel->resize(50,20);
    ui->waterLabel->move(600,250);
    ui->unit_2->move(700,300);

    ui->lowFuel->resize(50,50);
    ui->lowFuel->move(300,330);
    ui->lowVoltage->resize(50,50);
    ui->lowVoltage->move(300,280);
    ui->overheat->resize(50,50);
    ui->overheat->move(300,380);
}

void Dashboard::setValues(int rpm, int g, int oil, int water)
{
    if (rpm > 15000 || g > 9 || oil > 999 || water > 999) return;
    else {
        ui->tachometer->setValue(rpm);
        ui->gear->display(g);
        ui->oilTemp->display(oil);
        ui->waterTemp->display(water);
    }
}

void Dashboard::setAllVisible(bool v){
    ui->tachometer->setVisible(v);
    ui->gear->setVisible(v);
    ui->gearLabel->setVisible(v);
    ui->oilTemp->setVisible(v);
    ui->oilLabel->setVisible(v);
    ui->unit_1->setVisible(v);
    ui->waterTemp->setVisible(v);
    ui->waterLabel->setVisible(v);
    ui->unit_2->setVisible(v);
    ui->lowFuel->setVisible(v);
    ui->lowVoltage->setVisible(v);
    ui->overheat->setVisible(v);

    ui->boot->setVisible(!v);
}
