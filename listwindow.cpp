#include "listwindow.h"
#include "ui_listwindow.h"
#include "mainwindow.h"
#include "studentedit.h"
#include "addstudent.h"
#include "removestudent.h"
#include "studentedit.h".h"
#include <QtSql>
#include <QSqlDatabase>
#include <QtDebug>
#include <QFileInfo>
#include <QRegularExpression>
#include <QMessageBox>

ListWindow::ListWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ListWindow)
{
    ui->setupUi(this);
    MainWindow conn;
    if(!conn.connOpen()){
        qDebug()<<("Failed to connect!");
    }
    else{
        qDebug()<<("Povezano!");
    }
    QSqlQueryModel * model = new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* query = new QSqlQuery(conn.db);
    query->prepare("SELECT fullName FROM students");
    query->exec();
    model->setQuery(*query);
    ui->listView->setModel(model);

    conn.connClose();
    qDebug()<<(model->rowCount());
}

ListWindow::~ListWindow()
{
    delete ui;
}

void ListWindow::on_action_Logout_triggered(){
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

void ListWindow::on_commandLinkButton_2_clicked()
{
    studentEdit = new StudentEdit(this);
    studentEdit->setModal(true);
    studentEdit->show();

    connect(this, SIGNAL(sendData(QStringList)), studentEdit, SLOT(receiveData(QStringList)));


    QStringList ls;
    ls.append(ui->name->text());
    ls.append(ui->lastName->text());
    ls.append(ui->class_2->text());
    ls.append(ui->classroom->text());
    ls.append(ui->birth->text());
    ls.append(ui->street->text());
    ls.append(ui->houseNum->text());
    ls.append(ui->zip->text());
    ls.append(ui->phone->text());
    ls.append(ui->email->text());

    qDebug()<<(ls);

    emit sendData(ls);
}

void ListWindow::receiveEditData(QStringList ls){
    ui->name->setText(ls[0]);
    ui->lastName->setText(ls[1]);
}

void ListWindow::on_commandLinkButton_clicked(){
    MainWindow conn;
    if(!conn.connOpen()){
        qDebug()<<("Failed to connect!");
    }
    else{
        qDebug()<<("Povezano!");
    }
    QSqlQueryModel * model = new QSqlQueryModel();
    conn.connOpen();
    QSqlQuery* query = new QSqlQuery(conn.db);
    query->prepare("SELECT fullName FROM students");
    query->exec();
    model->setQuery(*query);
    ui->listView->setModel(model);

    conn.connClose();
    qDebug()<<(model->rowCount());
}

void ListWindow::on_action_AddStudent_triggered(){
    AddStudent *addstudent = new AddStudent();
    addstudent->show();
}

void ListWindow::on_listView_activated(const QModelIndex &index)
{
    QString val=ui->listView->model()->data(index).toString();

    MainWindow conn;
    if(!conn.connOpen()){
        qDebug()<<("Failed to connect!");
    }
    else{
        qDebug()<<("Povezano!");
    }
    conn.connOpen();
    QSqlQuery query;
    query.prepare("SELECT * FROM students WHERE fullname=:name");
    query.bindValue(":name", val);

    if(query.exec()){
        while(query.next()){
            ui->name->setText(query.value(0).toString());
            ui->lastName->setText(query.value(1).toString());
            ui->class_2->setText(query.value(2).toString());
            ui->classroom->setText(query.value(3).toString());
            ui->birth->setText(query.value(4).toString());
            ui->street->setText(query.value(5).toString());
            ui->houseNum->setText(query.value(6).toString());
            ui->zip->setText(query.value(7).toString());
            ui->phone->setText(query.value(8).toString());
            ui->email->setText(query.value(9).toString());
                QByteArray outByteArray = query.value(10).toByteArray();
                QPixmap image = QPixmap();
                image.loadFromData(outByteArray);
            image = image.scaledToWidth(ui->profilePic->width(), Qt::SmoothTransformation);
            ui->profilePic->setPixmap(image);
        }
        conn.connClose();
    }else{
        QMessageBox::critical(this, "Error", "Something went wrong!");
    }
}

void ListWindow::on_action_RemoveStudent_triggered()
{
    RemoveStudent *rs = new RemoveStudent();
    rs->show();
}

void ListWindow::on_actionEdit_Student_triggered()
{

}
