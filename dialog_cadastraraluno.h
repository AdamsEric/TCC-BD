#ifndef DIALOG_CADASTRARALUNO_H
#define DIALOG_CADASTRARALUNO_H

#include <QDialog>

namespace Ui {
class dialog_cadastraraluno;
}

class dialog_cadastraraluno : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_cadastraraluno(QWidget *parent = 0);
    ~dialog_cadastraraluno();

private:
    Ui::dialog_cadastraraluno *ui;
};

#endif // DIALOG_CADASTRARALUNO_H
