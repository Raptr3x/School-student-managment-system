#ifndef STUDENTEDIT_H
#define STUDENTEDIT_H

#include <QDialog>

namespace Ui {
class StudentEdit;
}

class StudentEdit : public QDialog
{
    Q_OBJECT

public:
    explicit StudentEdit(QWidget *parent = 0);
    ~StudentEdit();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::StudentEdit *ui;
};

#endif // STUDENTEDIT_H
