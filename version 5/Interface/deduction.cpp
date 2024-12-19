#include "deduction.h"
#include "ui_deduction.h"

deduction::deduction(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deduction)
{
    ui->setupUi(this);



    ui->labelChiffre1->setStyleSheet("background: transparent;"
                                     "color: white;");
    ui->labelChiffre2->setStyleSheet("background: transparent;"
                                     "color: white;");
    ui->labelChiffre3->setStyleSheet("background: transparent;"
                                     "color: white;");
    ui->labelChiffre4->setStyleSheet("background: transparent;"
                                     "color: white;");
    ui->labelChiffre5->setStyleSheet("background: transparent;"
                                     "color: white;");
    ui->labelChiffre6->setStyleSheet("background: transparent;"
                                     "color: white;");
    ui->labelChiffre7->setStyleSheet("background: transparent;"
                                     "color: white;");
    ui->labelChiffre8->setStyleSheet("background: transparent;"
                                     "color: white;");





    ui->lineEditCarte1->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCarte2->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCarte3->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCarte4->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCarte5->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCarte6->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCarte7->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCarte8->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");

    ui->lineEditCrane1->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCrane2->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCrane3->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCrane4->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCrane5->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCrane6->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCrane7->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCrane8->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");
    ui->lineEditCrane8->setStyleSheet("background: white;"
                                      "border : white;"
                                      "color: black;");


    ui->lineEditTableauLigne1->setStyleSheet("background: white;"
                                             "border : white;"
                                             "color: black;");

    ui->lineEditTableauLigne2->setStyleSheet("background: white;"
                                             "border : white;"
                                             "color: black;");

    ui->lineEditTableauLigne3->setStyleSheet("background: white;"
                                             "border : white;"
                                             "color: black;");

    ui->lineEditTableauLigne4->setStyleSheet("background: white;"
                                             "border : white;"
                                             "color: black;");

    ui->lineEditTableauLigne5->setStyleSheet("background: white;"
                                             "border : white;"
                                             "color: black;");

    ui->lineEditTableauLigne6->setStyleSheet("background: white;"
                                             "border : white;"
                                             "color: black;");

    ui->lineEditTableauLigne7->setStyleSheet("background: white;"
                                             "border : white;"
                                             "color: black;");

    ui->lineEditTableauLigne8->setStyleSheet("background: white;"
                                             "border : white;"
                                             "color: black;");

    ui->labelVosDeduc->setStyleSheet("background: transparent;"
                        "color: white;");




    resultat = new Resultat;
}

deduction::~deduction()
{
    delete ui;
    delete resultat;
}




void deduction::on_pushButtonvalide_clicked()
{
    resultat->show();
}

