#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class AddStudent;
}

class AddStudent : public QDialog
{
    Q_OBJECT

public:
    explicit AddStudent(QWidget *parent = 0);
    ~AddStudent();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    bool checkEmail();

    bool checkEmpty();

    void on_pushButton_3_clicked();

private:
    Ui::AddStudent *ui;
};

#endif // ADDSTUDENT_H
