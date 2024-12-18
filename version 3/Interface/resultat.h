#ifndef RESULTAT_H
#define RESULTAT_H

#include <QWidget>

namespace Ui {
class Resultat;
}

class Resultat : public QWidget
{
    Q_OBJECT

public:
    explicit Resultat(QWidget *parent = nullptr);
    ~Resultat();

private:
    Ui::Resultat *ui;
};

#endif // RESULTAT_H
