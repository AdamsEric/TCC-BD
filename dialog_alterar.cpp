#include "dialog_alterar.h"
#include "ui_dialog_alterar.h"

dialog_alterar::dialog_alterar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_alterar)
{
    ui->setupUi(this);
}

dialog_alterar::~dialog_alterar()
{
    delete ui;
}
