#ifndef JEUX_H
#define JEUX_H

#include "salleattente.h"

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui {
class jeux;
}
QT_END_NAMESPACE

class jeux : public QWidget
{
    Q_OBJECT

public:
    jeux(QWidget *parent = nullptr);
    ~jeux();

private slots:
    void on_pushButtonLancer_clicked();

private:
    Ui::jeux *ui;
    SalleAttente *salle;
};
#endif // JEUX_H
