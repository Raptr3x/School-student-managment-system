#ifndef LISTWINDOW_H
#define LISTWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QtDebug>
#include <QFileInfo>
#include <QRegularExpression>
#include <QMessageBox>
#include "mainwindow.h"

namespace Ui {
class ListWindow;
}

class ListWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ListWindow(QWidget *parent = 0);
    ~ListWindow();

private slots:
    void on_action_Logout_triggered();

    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();

    void on_action_AddStudent_triggered();

    void on_listView_activated(const QModelIndex &index);

    void on_action_RemoveStudent_triggered();

private:
    Ui::ListWindow *ui;
    QSqlDatabase db;
};

#endif // LISTWINDOW_H
