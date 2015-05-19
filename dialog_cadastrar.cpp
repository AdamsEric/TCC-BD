#include "dialog_cadastrar.h"
#include "ui_dialog_cadastrar.h"
#include "dialog_cadastraraluno.h"

Dialog_cadastrar::Dialog_cadastrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_cadastrar)
{
    ui->setupUi(this);
    connect(ui->Cadbutton_ok, SIGNAL(clicked()), this, SLOT(button_ok_clicado())); //conecta o botão OK no menu principal a caixa dialog
}

void Dialog_cadastrar::button_ok_clicado(){
    if(ui->radioButtonAluno->isChecked()){
        dialog_cadastraraluno dialog(this);
        dialog.exec();
    }
}

Dialog_cadastrar::~Dialog_cadastrar()
{
    delete ui;
}
