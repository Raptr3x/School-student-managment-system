#include "old_studentedit.h"
#include "ui_studentedit.h"

StudentEdit::StudentEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentEdit)
{
    ui->setupUi(this);
}

StudentEdit::~StudentEdit()
{
    delete ui;
}

void StudentEdit::on_pushButton_2_clicked()
{
    hide();
}
