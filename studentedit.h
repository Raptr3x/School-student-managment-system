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
    QString old_name;
    QString old_lastName;
    QString old_email;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void receiveData(QStringList);

    void on_pushButton_3_clicked();

    bool checkEmail();

    bool checkEmpty();

signals:
    void sendEditData(QStringList);

private:
    Ui::StudentEdit *ui;
};

#endif // STUDENTEDIT_H
