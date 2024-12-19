#ifndef SALLEATTENTE_H
#define SALLEATTENTE_H

#include <QWidget>
#include "jeuxactif.h"

namespace Ui {
class SalleAttente;
}

class SalleAttente : public QWidget
{
    Q_OBJECT

public:
    explicit SalleAttente(QWidget *parent = nullptr);
    ~SalleAttente();

private slots:
    void on_pushButtonPret_clicked();

private:
    Ui::SalleAttente *ui;
    JeuxActif *jeuxactif;
};

#endif // SALLEATTENTE_H
