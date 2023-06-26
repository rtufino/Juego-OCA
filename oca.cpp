#include "oca.h"
#include "ui_oca.h"

Oca::Oca(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Oca)
{
    ui->setupUi(this);
}

Oca::~Oca()
{
    delete ui;
}

