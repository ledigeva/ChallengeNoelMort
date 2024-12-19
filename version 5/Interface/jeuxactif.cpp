#include "jeuxactif.h"
#include "ui_jeuxactif.h"


JeuxActif::JeuxActif(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::JeuxActif)
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
    ui->labelGif2->setMovie(gifAnimation);


    //demarre lanimation;
    gifAnimation->start();



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
    deduc = new deduction;

}

JeuxActif::~JeuxActif()
{
    delete ui;
    delete deduc;
    delete gifAnimation;
}

void JeuxActif::on_pushButtonvalide_clicked()
{
 deduc->show();
}



