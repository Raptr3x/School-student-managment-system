#ifndef EDITSTUDENT_H
#define EDITSTUDENT_H

#include <QDialog>

namespace Ui {
class EditStudent;
}

class EditStudent : public QDialog
{
    Q_OBJECT

public:
    explicit EditStudent(QWidget *parent = 0);
    ~EditStudent();

private:
    Ui::EditStudent *ui;
};

#endif // EDITSTUDENT_H
