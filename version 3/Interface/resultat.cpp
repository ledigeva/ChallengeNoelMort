#include "resultat.h"
#include "ui_resultat.h"

Resultat::Resultat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Resultat)
{
    ui->setupUi(this);
}

Resultat::~Resultat()
{
    delete ui;
}
