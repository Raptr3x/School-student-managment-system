#include "editstudent.h"
#include "ui_editstudent.h"
#include "listwindow.h"

EditStudent::EditStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditStudent)
{
    ui->setupUi(this);
}

EditStudent::~EditStudent()
{
    delete ui;
}
