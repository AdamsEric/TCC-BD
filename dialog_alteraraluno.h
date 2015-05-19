#ifndef DIALOG_ALTERARALUNO_H
#define DIALOG_ALTERARALUNO_H

#include <QDialog>

namespace Ui {
class dialog_alteraraluno;
}

class dialog_alteraraluno : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_alteraraluno(QWidget *parent = 0);
    ~dialog_alteraraluno();

private:
    Ui::dialog_alteraraluno *ui;

public slots:

};

#endif // DIALOG_ALTERARALUNO_H
