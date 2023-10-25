#include "dashboard.h"
#include "ui_dashboard.h"

Dashboard::Dashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dashboard)
{
    setWindowTitle("Dashboard Demo v0.2");
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}
void Dashboard::on_engine_sliderMoved(int position)
{
    ui->oilPressure->display(position * 0.03);
    ui->waterPressure->display(position * 0.027);
    ui->oilTemp->display(position * 2);
    ui->waterTemp->display(position * 2);
}


void Dashboard::on_tachometer_3_sliderMoved(int position)
{
    QString redline = "QProgressBar::chunk {background: #800080;border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}";
    QString veryClose = "QProgressBar::chunk {background: #FF0000;border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}";
    QString close = "QProgressBar::chunk {background: #FFA500;border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}";
    QString safe= "QProgressBar::chunk {background: #008000;border-bottom-right-radius: 7px;border-bottom-left-radius: 7px;border: 1px solid black;}";
    ui->tachometer->setValue(position * 120);
    if (position > 90){
        ui->tachometer->setStyleSheet(redline);
    } else if (position > 80){
        ui->tachometer->setStyleSheet(veryClose);
    } else if (position > 65){
        ui->tachometer->setStyleSheet(close);
    } else {
        ui->tachometer->setStyleSheet(safe);
    }
}


void Dashboard::on_lap_sliderMoved(int position)
{
    ui->lapTime->display(position*0.592);
}


void Dashboard::on_temp_sliderMoved(int position)
{
    ui->backLeft->display(position*1.8273);
    ui->backRight->display(position*1.9273);
    ui->frontLeft->display(position*1.8873);
    ui->frontRIght->display(position*1.7273);
}


void Dashboard::on_all_sliderMoved(int position)
{
    on_temp_sliderMoved(position);
    on_lap_sliderMoved(position);
    on_tachometer_3_sliderMoved(position);
    on_engine_sliderMoved(position);

}

