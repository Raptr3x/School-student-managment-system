#include "studentedit.h"
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

void StudentEdit::on_pushButton_clicked()
{
    QStringList ls;
    ls.append(ui->text_name->text());
    ls.append(ui->text_lastName->text());
    emit sendEditData(ls);

    close();
}

void StudentEdit::receiveData(QStringList ls){
    ui->text_name->setText(ls[0]);
    ui->text_lastName->setText(ls[1]);
    ui->text_class->setText(ls[2]);
    ui->text_classroom->setText(ls[3]);
    ui->text_street->setText(ls[4]);
    ui->text_houseNum->setText(ls[5]);
    ui->text_zip->setText(ls[6]);
    ui->text_phone->setText(ls[7]);
    ui->text_email->setText(ls[8]);
    //DODAJ JOS DATUM RODJENJA I SLIKU
}
