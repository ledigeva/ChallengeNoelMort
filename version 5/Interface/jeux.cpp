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


    nomFichier = "../Interface/musiqueDeLaMourter.mp3";
    qDebug() << "Chemin absolu du fichier audio :" << QFileInfo(nomFichier).absoluteFilePath();

    player.setAudioOutput(&sortieAudio);
    player.setSource(QUrl::fromLocalFile(nomFichier));
    sortieAudio.setVolume(50);
    connect(&player, &QMediaPlayer::errorOccurred, [](QMediaPlayer::Error error) {
        qDebug() << "Erreur du lecteur audio :" << error;
    });
    player.play();




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

