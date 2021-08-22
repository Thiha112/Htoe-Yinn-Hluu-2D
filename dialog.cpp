#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

const database &Dialog::data() const
{
    return mData;
}

void Dialog::setData(const database &newData)
{
    mData = newData;

    ui->main_result->setText(mData.getMain_result());
    ui->morning_result->setText(mData.getMorning_result());
    ui->evening_result->setText(mData.getEvening_result());
    ui->morning_modern->setText(mData.getMorning_modern());
    ui->morning_internet->setText(mData.getMorning_internet());
    ui->evening_modern->setText(mData.getEvening_modern());
    ui->evening_internet->setText(mData.getEvening_internet());
    ui->update->setText(mData.getUpdate());
    ui->qset->setText(mData.getSet());
    ui->qvalue->setText(mData.getValue());
}


void Dialog::on_save_2_clicked()
{
    mData.setMain_result(ui->main_result->text());
    mData.setMorning_result(ui->morning_result->text());
    mData.setEvening_result(ui->evening_result->text());
    mData.setMorning_modern(ui->morning_modern->text());
    mData.setMorning_internet(ui->morning_internet->text());
    mData.setEvening_modern(ui->evening_modern->text());
    mData.setEvening_internet(ui->evening_internet->text());
    mData.setUpdate(ui->update->text());
    mData.setSet(ui->qset->text());
    mData.setValue(ui->qvalue->text());

    accept();

}

