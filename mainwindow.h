#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QtDebug>
#include <QFileInfo>
#include "listwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSqlDatabase db;
    void connClose(){
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    };
    bool connOpen(){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/Programiranje/c++ projects/Skolski projekti/School_student_managment_system/school.db");
        if(!db.open()){
            qDebug()<<("Database failed!");
            return false;
        }
        else{
            qDebug()<<("Connected!");
            return true;
        }
    };

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
