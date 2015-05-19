#include "dialog_cadastraraluno.h"
#include "ui_dialog_cadastraraluno.h"

dialog_cadastraraluno::dialog_cadastraraluno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_cadastraraluno)
{
    ui->setupUi(this);
}

dialog_cadastraraluno::~dialog_cadastraraluno()
{
    delete ui;
}
