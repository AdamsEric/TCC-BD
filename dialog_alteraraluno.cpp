#include "dialog_alteraraluno.h"
#include "ui_dialog_alteraraluno.h"

dialog_alteraraluno::dialog_alteraraluno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_alteraraluno)
{
    ui->setupUi(this);
}

dialog_alteraraluno::~dialog_alteraraluno()
{
    delete ui;
}
