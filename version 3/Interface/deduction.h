#ifndef DEDUCTION_H
#define DEDUCTION_H

#include <QWidget>
#include "resultat.h"

namespace Ui {
class deduction;
}

class deduction : public QWidget
{
    Q_OBJECT

public:
    explicit deduction(QWidget *parent = nullptr);
    ~deduction();

private slots:
    void on_pushButtonValide_clicked();

private:
    Ui::deduction *ui;
    Resultat *resultat;
};

#endif // DEDUCTION_H
