#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_cadastrar.h"
#include "dialog_buscar.h"
#include "dialog_alterar.h"
#include "dialog_excluir.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->button_ok, SIGNAL(clicked()), this, SLOT(button_ok_clicado())); //conecta o botão OK no menu principal a caixa dialog
}

void MainWindow::button_ok_clicado(){
    if(ui->button_cadastrar->isChecked()){
        Dialog_cadastrar dialog(this);
        dialog.exec();
    }else
    if(ui->button_buscar->isChecked()){
        dialog_buscar dialog(this);
        dialog.exec();
    }
    if(ui->button_alterar->isChecked()){
        dialog_alterar dialog(this);
        dialog.exec();
    }
    if(ui->button_excluir->isChecked()){
        dialog_excluir dialog(this);
        dialog.exec();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
