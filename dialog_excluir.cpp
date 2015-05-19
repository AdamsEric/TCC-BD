#include "dialog_excluir.h"
#include "ui_dialog_excluir.h"

dialog_excluir::dialog_excluir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_excluir)
{
    ui->setupUi(this);
}

dialog_excluir::~dialog_excluir()
{
    delete ui;
}
