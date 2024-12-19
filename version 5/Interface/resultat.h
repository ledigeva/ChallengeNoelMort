#ifndef RESULTAT_H
#define RESULTAT_H

#include <QWidget>
#include <QMovie>

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
        QMovie *gifAnimation;
};

#endif // RESULTAT_H
