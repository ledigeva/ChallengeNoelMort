#ifndef JEUXACTIF_H
#define JEUXACTIF_H

#include "deduction.h"
#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QVBoxLayout>

namespace Ui {
class JeuxActif;
}

class JeuxActif : public QWidget
{
    Q_OBJECT

public:
    explicit JeuxActif(QWidget *parent = nullptr);
    ~JeuxActif();

private slots:
    void on_pushButtonvalide_clicked();

private:
    Ui::JeuxActif *ui;
    deduction *deduc;
};

#endif // JEUXACTIF_H
