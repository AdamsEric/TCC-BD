#include "dialog_cadastrar.h"
#include "ui_dialog_cadastrar.h"

Dialog_cadastrar::Dialog_cadastrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_cadastrar)
{
    ui->setupUi(this);
}

Dialog_cadastrar::~Dialog_cadastrar()
{
    delete ui;
}
