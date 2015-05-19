#ifndef DIALOG_BUSCAR_H
#define DIALOG_BUSCAR_H

#include <QDialog>

namespace Ui {
class dialog_buscar;
}

class dialog_buscar : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_buscar(QWidget *parent = 0);
    ~dialog_buscar();

private:
    Ui::dialog_buscar *ui;
};

#endif // DIALOG_BUSCAR_H
