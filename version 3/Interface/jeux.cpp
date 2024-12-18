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
    ui->labelPseudo->setStyleSheet("color: white;"
                                   "background: transparent;");
    ui->labelMdp->setStyleSheet("color: white;"
                                "background: transparent;");
    ui->pushButtonLancer->setStyleSheet("color: white");
    ui->labelIP->setStyleSheet("color: white;"
                               "background: transparent;");
    salle = new SalleAttente;
}

jeux::~jeux()
{
    delete ui;
    delete salle;
}

void jeux::on_pushButtonLancer_clicked()
{
    salle->show();
}

