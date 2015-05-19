#include "dialog_buscar.h"
#include "ui_dialog_buscar.h"

dialog_buscar::dialog_buscar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_buscar)
{
    ui->setupUi(this);
}

dialog_buscar::~dialog_buscar()
{
    delete ui;
}
