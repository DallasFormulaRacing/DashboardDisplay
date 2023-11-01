#include "dashboard.h"
#include "ui_dashboard.h"
#include <QTimer>

Dashboard::Dashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dashboard)
{
    setWindowTitle("Dashboard Demo v0.2");
    ui->setupUi(this);
    ui->message_out->stackUnder(ui->textEdit);
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
    QString purple = "QProgressBar::chunk {background: #800080;border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}";
    QString red = "QProgressBar::chunk {background: #FF0000;border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}";
    QString orange = "QProgressBar::chunk {background: #FFA500;border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}";
    QString green = "QProgressBar::chunk {background: #008000;border-bottom-right-radius: 7px;border-bottom-left-radius: 7px;border: 1px solid black;}";
    ui->tachometer->setValue(position * 120);
    if (position >= 90){
        ui->tachometer->setStyleSheet(purple);
    } else if (position >= 80){
        ui->tachometer->setStyleSheet(red);
    } else if (position >= 65){
        ui->tachometer->setStyleSheet(orange);
    } else {
        ui->tachometer->setStyleSheet(green);
    }
}


void Dashboard::on_lap_sliderMoved(int position)
{
    ui->lapTime->display(position*0.592);
}


void Dashboard::on_temp_sliderMoved(int position)
{
    QString red = "QProgressBar::chunk {background: #FF0000;border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}";
    QString orange = "QProgressBar::chunk {background: #FFA500;border-bottom-right-radius: 5px;border-bottom-left-radius: 5px;border: .px solid black;}";
    QString green = "QProgressBar::chunk {background: #008000;border-bottom-right-radius: 7px;border-bottom-left-radius: 7px;border: .px solid black;}";
    QString blue = "QProgressBar::chunk {background: #0000FF;border-bottom-right-radius: 7px;border-bottom-left-radius: 7px;border: .px solid black;}";


    ui->backLeft->display(position*1.8273);
    ui->backRight->display(position*1.9273);
    ui->frontLeft->display(position*1.8873);
    ui->frontRIght->display(position*1.7273);
    ui->backLeft_PB->setValue(position);
    ui->backRight_PB->setValue(position);
    ui->frontLeft_PB->setValue(position);
    ui->frontRight_PB->setValue(position);

    if (position >= 90){
        ui->backLeft_PB->setStyleSheet(red);
        ui->backRight_PB->setStyleSheet(red);
        ui->frontLeft_PB->setStyleSheet(red);
        ui->frontRight_PB->setStyleSheet(red);
    } else if (position >= 80){
        ui->backLeft_PB->setStyleSheet(orange);
        ui->backRight_PB->setStyleSheet(orange);
        ui->frontLeft_PB->setStyleSheet(orange);
        ui->frontRight_PB->setStyleSheet(orange);
    } else if (position >= 60){
        ui->backLeft_PB->setStyleSheet(green);
        ui->backRight_PB->setStyleSheet(green);
        ui->frontLeft_PB->setStyleSheet(green);
        ui->frontRight_PB->setStyleSheet(green);
    } else {
        ui->backLeft_PB->setStyleSheet(blue);
        ui->backRight_PB->setStyleSheet(blue);
        ui->frontLeft_PB->setStyleSheet(blue);
        ui->frontRight_PB->setStyleSheet(blue);
    }
}


void Dashboard::on_all_sliderMoved(int position)
{
    on_engine_sliderMoved(position);
    ui->engine->setSliderPosition(position);
    on_temp_sliderMoved(position);
    ui->temp->setSliderPosition(position);
    on_tachometer_3_sliderMoved(position);
    ui->tachometer_3->setSliderPosition(position);
    on_lap_sliderMoved(position);
    ui->lap->setSliderPosition(position);
}

void Dashboard::on_message_clicked()
{
    ui->message_out->stackUnder(ui->message);
    ui->message_out->setStyleSheet("background-color: grey;");
    ui->message_out->setWindowOpacity(100);
    QTimer::singleShot(5000, this, &Dashboard::move_message);
}

void Dashboard::move_message(){
    ui->message_out->stackUnder(ui->textEdit);
}

