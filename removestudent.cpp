#include "removestudent.h"
#include "ui_removestudent.h"
#include "mainwindow.h"

RemoveStudent::RemoveStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveStudent)
{
    ui->setupUi(this);
}

RemoveStudent::~RemoveStudent()
{
    delete ui;
}

void RemoveStudent::on_pushButton_2_clicked()
{
    MainWindow conn;
    conn.connClose();
    hide();
}

void RemoveStudent::on_pushButton_clicked()
{
    QString name = ui->name->text();
    QString lastName = ui->lastName->text();
    QString usrClass = ui->usrClass->text();

    MainWindow conn;
    conn.connOpen();
    QSqlQuery query;

    //primeniti sha246 enkripciju ovde, pre pretrage u bazi podataka

    query.prepare("SELECT * FROM students WHERE name=:name and surname=:surname and class=:class");
    query.bindValue(":name", name);
    query.bindValue(":surname", lastName);
    query.bindValue(":class", usrClass);
    if(query.exec()){
        int count=0;
        while(query.next()){
            count++;
        }
        if(count==1){
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Remove student", "Are you sure you want to delete "+name+" "+lastName+" from school database?", QMessageBox::Yes|QMessageBox::No);
            if(reply == QMessageBox::Yes){
                query.prepare("DELETE FROM students WHERE name=:name and surname=:surname and class=:class");
                query.bindValue(":name", name);
                query.bindValue(":surname", lastName);
                query.bindValue(":class", usrClass);
                if(query.exec()){
                    QMessageBox::information(this, "Warning", "Student deleted.");
                }
                hide();
                conn.connClose();
            }
        }
        else if(count>1){
            //prikazi tabelu i pusti da sam korisnik bira.
        }
        else if(count<1){
            QPalette sample_palette;
            sample_palette.setColor(QPalette::WindowText, Qt::red);
            ui->label_4->setPalette(sample_palette);
            ui->label_4->setText("Can't find that student.");
        }
    }
}
