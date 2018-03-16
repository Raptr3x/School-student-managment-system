#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QtDebug>
#include <QFileInfo>
#include <QRegularExpression>

namespace Ui {
class CreateAccount;
}

class CreateAccount : public QDialog
{
    Q_OBJECT

public:
    explicit CreateAccount(QWidget *parent = 0);
    ~CreateAccount();

private slots:
    void on_button_create_clicked();
    bool CheckEmail();
    bool CheckUsername();
    void AddUser();
    bool is_email_valid();

private:
    Ui::CreateAccount *ui;
    QSqlDatabase db;

};

#endif // CREATEACCOUNT_H
