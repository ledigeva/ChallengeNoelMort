#include "deduction.h"
#include "ui_deduction.h"

deduction::deduction(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deduction)
{
    ui->setupUi(this);
}

deduction::~deduction()
{
    delete ui;
}
