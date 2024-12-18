#ifndef DEDUCTION_H
#define DEDUCTION_H

#include <QWidget>

namespace Ui {
class deduction;
}

class deduction : public QWidget
{
    Q_OBJECT

public:
    explicit deduction(QWidget *parent = nullptr);
    ~deduction();

private:
    Ui::deduction *ui;
};

#endif // DEDUCTION_H
