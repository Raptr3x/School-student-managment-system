#ifndef REMOVESTUDENT_H
#define REMOVESTUDENT_H

#include <QDialog>

namespace Ui {
class RemoveStudent;
}

class RemoveStudent : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveStudent(QWidget *parent = 0);
    ~RemoveStudent();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::RemoveStudent *ui;
};

#endif // REMOVESTUDENT_H
