#include "jeuxactif.h"
#include "ui_jeuxactif.h"

JeuxActif::JeuxActif(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::JeuxActif)
{
    ui->setupUi(this);
    ui->pushButtonPrendre->setStyleSheet("color: white");
    ui->pushButtonRelood->setStyleSheet("color: white");
    ui->labelListeJoueur->setStyleSheet("color: white");
    ui->textEditListeJoueur->setStyleSheet("color: white");
}

JeuxActif::~JeuxActif()
{
    delete ui;
}
