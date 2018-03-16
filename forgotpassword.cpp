#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QtDebug>
#include <QFileInfo>
#include <QRegularExpression>
#include <QMessageBox>

ForgotPassword::ForgotPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgotPassword)
{
    ui->setupUi(this);
}

ForgotPassword::~ForgotPassword()
{
    delete ui;
}


void ForgotPassword::on_pushButton_clicked()
{
    QString email = ui->lineEdit->text();

    QRegExp mailREX("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    mailREX.setCaseSensitivity(Qt::CaseInsensitive);
    mailREX.setPatternSyntax(QRegExp::RegExp);
    if(mailREX.exactMatch(email)){
        //povezi db
        QSqlDatabase db;

        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/Programiranje/c++ projects/Skolski projekti/School_student_managment_system/school.db");
        if (db.open()){
            QSqlQuery query;
            query.prepare("SELECT * FROM accounts WHERE email=:email");
            query.bindValue(":email", email);
            if(query.exec()){
                int count=0;
                while(query.next()){
                    count++;
                }
                if(count==1){
                    //pokreni slanje email-a
                    QMessageBox::information(this, "info", "Email is sent!");
                    hide();
                }
                else if(count<1){
                QPalette sample_palette;
                sample_palette.setColor(QPalette::WindowText, Qt::red);
                ui->label_2->setPalette(sample_palette);
                ui->label_2->setText("Email is not valid.");
                }
            }
        }
    }
    else{
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->label_2->setPalette(sample_palette);
        ui->label_2->setText("Email is not valid.");
    }
}
