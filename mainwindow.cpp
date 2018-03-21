#include <string>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createaccount.h"
#include "listwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    CreateAccount cr;
    cr.setModal(true);
    cr.exec();
}

void MainWindow::on_pushButton_3_clicked(){}

void MainWindow::on_pushButton_clicked()
{

    QString username = ui->text_username->text();
    QString password = ui->text_password->text();

    if (!connOpen()){
        qDebug()<<("Failed to connect!");
    }
    connOpen();
    QSqlQuery query;

    //primeni sha256 enkripciju ovde, pre pretrage u database

    query.prepare("SELECT * FROM accounts WHERE username=:user and password=:pass");
    query.bindValue(":user", username);
    query.bindValue(":pass", password);
    if(query.exec()){
        int count=0;
        while(query.next()){
            count++;
        }
        if(count==1){
            connClose();
            hide();
            ListWindow *listwindow = new ListWindow();
            listwindow->show();
        }
        else if(count<1){
            QPalette sample_palette;
            sample_palette.setColor(QPalette::WindowText, Qt::red);
            ui->status->setPalette(sample_palette);
            ui->status->setText("Username or password is incorrect.");
        }
    }
}
