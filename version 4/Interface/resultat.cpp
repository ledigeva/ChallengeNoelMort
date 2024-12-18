#include "resultat.h"
#include "ui_resultat.h"



Resultat::Resultat(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Resultat)
{
    ui->setupUi(this);

    QString gifPath = "../Interface/img/squelette.gif";

    //cree une instance de qMovie;
    gifAnimation = new QMovie(gifPath);

    //verifie si le GIF est chargé correctement
    if(!gifAnimation->isValid()){
        qDebug()<<"Erreur:Impossible de charger le GIF à l'emplacement:" << gifPath;
        return;
    }

    //Configure le QLabel pour afficher le GIF
    ui->labelGif1->setMovie(gifAnimation);
    ui->labelGif3->setMovie(gifAnimation);
    ui->labelGif2->setMovie(gifAnimation);


    //demarre lanimation;
    gifAnimation->start();
}

Resultat::~Resultat()
{
    delete ui;
    delete gifAnimation;
}
