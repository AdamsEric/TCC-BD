#ifndef DIALOG_EXCLUIR_H
#define DIALOG_EXCLUIR_H

#include <QDialog>

namespace Ui {
class dialog_excluir;
}

class dialog_excluir : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_excluir(QWidget *parent = 0);
    ~dialog_excluir();

private:
    Ui::dialog_excluir *ui;
};

#endif // DIALOG_EXCLUIR_H
