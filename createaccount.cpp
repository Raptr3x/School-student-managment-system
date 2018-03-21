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

bool CreateAccount::CheckEmpty(){
    QString email = ui->text_email->text();
    QString username = ui->text_newUsername->text();
    QString password = ui->text_newPassword->text();
    QString passwordRe = ui->text_newRePassword->text();

    if(email!="" && username!="" && password!="" && passwordRe!=""){
        return true;
    }
    else{
        return false;
    }
}

void CreateAccount::AddUser(){
    QString email = ui->text_email->text();
    QString username = ui->text_newUsername->text();
    QString password = ui->text_newPassword->text();
    QSqlQuery query;
    query.prepare("INSERT INTO accounts (username, password, email) values (:username,:password,:email)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":email", email);
    if(query.exec()){
        QMessageBox::information(this, "Info", "Account successfuly created!");
        hide();
    }
    else{
        QMessageBox::information(this, "Connection info", "Problem while connecting with a database.");
    }
    MainWindow conn;
    conn.connClose();
}

bool CreateAccount::CheckEmail(){
    QString email = ui->text_email->text();
    MainWindow conn;
    conn.connOpen();
    QSqlQuery query;
    query.prepare("SELECT * FROM accounts WHERE email=:email");
    query.bindValue(":email", email);
    if(query.exec()){
        int count=0;
        while(query.next()){
            count++;
        }
        if(count>=1){
            return false;
        }
        else{
            return true;
        }
    }
    else{
        QMessageBox::information(this, "Connection problem", "Problem while connecting to the database");
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

    if(!CheckEmpty()){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->label_5->setPalette(sample_palette);
        ui->label_5->setText("All fields must be filled.");
    }
    else if(!is_email_valid()){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->label_5->setPalette(sample_palette);
        ui->label_5->setText("Email not valid.");
    }
    else if(!CheckEmail()){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->label_5->setPalette(sample_palette);
        ui->label_5->setText("Email is already in use.");
    }
    else if(!(password==RePassword)){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->label_5->setPalette(sample_palette);
        ui->label_5->setText("Passwords don't match.");
    }
    else if(!CheckUsername()){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->label_5->setPalette(sample_palette);
        ui->label_5->setText("Username is already in use.");
    }
    else{
        MainWindow conn;
        conn.connOpen();
        if (conn.connOpen()){
            AddUser();
        }
    }
}
