#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->btn_hesapla, &QPushButton::clicked, this, &Dialog::on_btn_hesapla_clicked);
    connect(ui->btn_temizle, &QPushButton::clicked, this, &Dialog::on_btn_temizle_clicked);

    connect(ui->btn_kapat, &QPushButton::clicked, this, [=]() {
        close();
    });
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_hesapla_clicked()
{
    if(ui->ln_ad->text()=="" ||ui->ln_dersad->text()=="" || ui->ln_vizenot->text()=="" || ui->ln_finalnot->text()=="")
    {
        ui->textBrowser->setText("Eksik veri girdiniz,tekrar kontrol ediniz.");
    }
    else
    {
        int gn;
        gn=(ui->ln_vizenot->text().toInt()+ui->ln_finalnot->text().toInt())/2;
        if(gn>=60)
        {
            ui->textBrowser->setText(ui->ln_ad->text()+" isimli öğrenci "+ui->ln_dersad->text()+" isimli dersten geçmiştir.");
        }
        else
        {
            ui->textBrowser->setText(ui->ln_ad->text()+" isimli öğrenci "+ui->ln_dersad->text()+" İsimli dersten geçememiştir");
        }
    }
}


void Dialog::on_btn_temizle_clicked()
{
    ui->textBrowser->clear();
}

