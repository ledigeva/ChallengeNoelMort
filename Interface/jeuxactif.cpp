#include "jeuxactif.h"
#include "ui_jeuxactif.h"

JeuxActif::JeuxActif(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::JeuxActif)
{
    ui->setupUi(this);

    ui->pushButtonPrendre->setStyleSheet("border: 1px solid white;"
                                         "color: white;");
    ui->pushButtonRelood->setStyleSheet("border: 1px solid white;"
                                        "color: white;");
    ui->labelListeJoueur->setStyleSheet("background: transparent;"
                                        "border: 1px solid white;"
                                        "color: white;");
    ui->textEditListeJoueur->setStyleSheet("background: transparent;"
                                           "border: 1px solid white;"
                                           "color: white;");
    ui->textEditChats->setStyleSheet("background: transparent;"
                                     "border: 1px solid white;"
                                     "color: white;");
    ui->labelChats->setStyleSheet("background: transparent;"
                                  "border: 1px solid white;"
                                  "color: white;");
    ui->lineEditChats->setStyleSheet("background: transparent;"
                                     "border: 1px solid white;"
                                     "color: black;");

    ui->pushButtonvalide->setStyleSheet("background: transparent;"
                                     "border: 1px solid white;"
                                     "color: white;");

    ui->labelEtat->setStyleSheet("background: transparent;"
                                     "border: 1px solid white;"
                                     "color: white;");
    ui->lineEditArdoise->setStyleSheet("background: white;"
                                       "border : white;"
                                     "color: black;");

}

JeuxActif::~JeuxActif()
{
    delete ui;
}

void JeuxActif::on_pushButtonvalide_clicked()
{

}

