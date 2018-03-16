#include "createaccount.h"
#include "ui_createaccount.h"
#include "mainwindow.h"
#include "QMessageBox"
#include <QRegularExpression>

CreateAccount::CreateAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateAccount)
{
    ui->setupUi(this);
}

CreateAccount::~CreateAccount()
{
    delete ui;
}

bool CreateAccount::is_email_valid(){
    QString email = ui->text_email->text();

    QRegExp mailREX("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    mailREX.setCaseSensitivity(Qt::CaseInsensitive);
    mailREX.setPatternSyntax(QRegExp::RegExp);
    return mailREX.exactMatch(email);
}

void CreateAccount::AddUser(){
    QString email = ui->text_email->text();
    QString username = ui->text_newUsername->text();
    QString password = ui->text_newPassword->text();
    //dodati sve ovo u db
    QSqlQuery query;
    query.prepare("INSERT INTO accounts (username, password, email) values (:username,:password,:email)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":email", email);
    if(query.exec()){
        QMessageBox::information(this, "Info", "Account successfuly created!");
        hide();
        MainWindow conn;
        conn.connClose();
    }
}

bool CreateAccount::CheckEmail(){
    QString email = ui->text_email->text();
    if(!is_email_valid()){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->label_5->setPalette(sample_palette);
        ui->label_5->setText("Email not valid.");
    }
    QSqlQuery query;

    query.prepare("SELECT * FROM accounts WHERE email=:email");
    query.bindValue(":email", email);
    if(query.exec()){
        int count=0;
        while(query.next()){
            count++;
        }
        if(count>=1){
            QPalette sample_palette;
            sample_palette.setColor(QPalette::WindowText, Qt::red);
            ui->label_5->setPalette(sample_palette);
            ui->label_5->setText("Email is already in use.");
            return false;
        }
        else{
            return true;
        }
    }
}

bool CreateAccount::CheckUsername(){
    QString username = ui->text_newUsername->text();
    QSqlQuery query;

    query.prepare("SELECT * FROM accounts WHERE username=:user");
    query.bindValue(":user", username);
    if(query.exec()){
        int count=0;
        while(query.next()){
            count++;
        }
        if(count>=1){
            QPalette sample_palette;
            sample_palette.setColor(QPalette::WindowText, Qt::red);
            ui->label_5->setPalette(sample_palette);
            ui->label_5->setText("Username is already in use.");
            return false;
        }
        else {
            return true;
        }
    }
}

void CreateAccount::on_button_create_clicked()
{
    QString password = ui->text_newPassword->text();
    QString RePassword = ui->text_newRePassword->text();

    if(!(password==RePassword)){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->label_5->setPalette(sample_palette);
        ui->label_5->setText("Passwords don't match.");
    }
    else{
        MainWindow conn;
        conn.connOpen();
        if (conn.connOpen()){
            //ovde uraditi sta vec treba sa bazom podataka
            if(CheckEmail() && CheckUsername() && is_email_valid()){
                ui->label_5->setText("");
                AddUser();
            }
        }
    }
}
