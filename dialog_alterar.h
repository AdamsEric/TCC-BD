#ifndef DIALOG_ALTERAR_H
#define DIALOG_ALTERAR_H

#include <QDialog>

namespace Ui {
class dialog_alterar;
}

class dialog_alterar : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_alterar(QWidget *parent = 0);
    ~dialog_alterar();

private:
    Ui::dialog_alterar *ui;
};

#endif // DIALOG_ALTERAR_H
