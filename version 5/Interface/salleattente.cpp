#include "salleattente.h"
#include "ui_salleattente.h"


SalleAttente::SalleAttente(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SalleAttente)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("background: transparent;"
                             "color: white;");
    ui->labelSalleAttente->setStyleSheet("background: transparent;"
                                         "color: white;");
    ui->label_2->setStyleSheet("background: transparent;"
                               "color: white;");
    ui->label_3->setStyleSheet("background: transparent;"
                               "color: white;");
    ui->label_4->setStyleSheet("background: transparent;"
                               "color: white;");
    ui->listWidgetJoueur->setStyleSheet("background: transparent;"
                                        "border: 1px solid white;"
                                        "color: white;");
    ui->listWidgetJoueurPret->setStyleSheet("background: transparent;"
                                            "border: 1px solid white;"
                                            "color: white;");
    jeuxactif = new JeuxActif;

}

SalleAttente::~SalleAttente()
{
    delete ui;
    delete jeuxactif;
}

void SalleAttente::on_pushButtonPret_clicked()
{
    jeuxactif->show();
}

