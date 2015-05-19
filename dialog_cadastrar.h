#ifndef DIALOG_CADASTRAR_H
#define DIALOG_CADASTRAR_H

#include <QDialog>

namespace Ui {
class Dialog_cadastrar;
}

class Dialog_cadastrar : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_cadastrar(QWidget *parent = 0);
    ~Dialog_cadastrar();

private:
    Ui::Dialog_cadastrar *ui;
};

#endif // DIALOG_CADASTRAR_H
