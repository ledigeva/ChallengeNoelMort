#include "jeux.h"
#include "ui_jeux.h"
#include "ui_jeuxactif.h"
#include <QStackedWidget>

#include <QDialog>

jeux::jeux(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::jeux)
{
    ui->setupUi(this);
    ui->labelPseudo->setStyleSheet("color: white");
    ui->labelMdp->setStyleSheet("color: white");
    ui->pushButtonLancer->setStyleSheet("color: white");
    ui->labelIP->setStyleSheet("color: white");
}

jeux::~jeux()
{
    delete ui;
}

void jeux::on_pushButtonLancer_clicked()
{


    jeuxactif = new JeuxActif;
    jeuxactif->show();


}

