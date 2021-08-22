#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QDateTime>

long i = 0;
int stopping = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(Timer()));
    timer->start(5000);
    timeout();
    m_timer.setInterval(100);
    connect(&m_timer,&QTimer::timeout,this,&MainWindow::timeout);

    sign = QString("<span style='color:#ff0000;'>%1</span>").arg("🔄");
    sign1 = QString("<span style='color:#ff0000;'>%1</span>").arg("✔");

    mData.setMorning_result("54");
    mData.setEvening_result("83");
    mData.setMorning_modern("53");
    mData.setMorning_internet("65");
    mData.setEvening_modern("72");
    mData.setEvening_internet("71");
    mData.setSet("2643.54");
    mData.setValue("129546.34");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::Timer()
{
        int a;
        int preset = 0;
        int prevalue = 0;
        srand(time(NULL));
        preset = rand()%9990+1000;
        prevalue = rand()%999990+100000;
        int postset = rand()%80+10;
        int postvalue = rand()%80+10;
        a = rand()%80+10;
        QString s = QString::number(a);
        QString pre_set = QString::number(preset);
        QString pre_value = QString::number(prevalue);
        QString post_set = QString::number(postset);
        QString post_value = QString::number(postvalue);

        ui->set->setText(pre_set+"."+post_set);
        ui->value->setText(pre_value+"."+post_value);
        mData.setMain_result(s);
        ui->main_result->setText(mData.getMain_result());
        ui->main_result2->setText(mData.getMain_result());
        i = i+5;
        if(i >= 9000){ timer->stop(); }
}

void MainWindow::timeout()
{
        m_timer.start();

        QString date = QDate::currentDate().toString();

        mData.setUpdate(sign1+" Updated : "+date+" "+QTime::currentTime().toString());
        if(i >= 9000){
            m_timer.stop();
        }
        else{
            ui->update->setText(sign+" Updating "+date+" "+QTime::currentTime().toString());
        }
}


void MainWindow::load()
{
    ui->main_result->setText(mData.getMain_result());
    ui->morning_result->setText(mData.getMorning_result());
    ui->evening_result->setText(mData.getEvening_result());
    ui->morning_modern->setText(mData.getMorning_modern());
    ui->morning_internet->setText(mData.getMorning_internet());
    ui->evening_modern->setText(mData.getEvening_modern());
    ui->evening_internet->setText(mData.getEvening_internet());
    ui->update->setText(mData.getUpdate());
    ui->main_result2->setText(mData.getMain_result());
    ui->set->setText(mData.getSet());
    ui->value->setText(mData.getValue());
}

void MainWindow::on_actionAdmin_triggered()
{
    Dialog* admin = new Dialog(nullptr);
    admin->setWindowTitle("Admin Panel");
    admin->setData(mData);
    admin->exec();
    mData = admin->data();
    load();
    stopping = 1;
    delete admin;
}

