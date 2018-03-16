#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QtDebug>
#include <QFileInfo>
#include <QRegularExpression>

namespace Ui {
class ForgotPassword;
}

class ForgotPassword : public QDialog
{
    Q_OBJECT

public:
    explicit ForgotPassword(QWidget *parent = 0);
    ~ForgotPassword();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ForgotPassword *ui;
    QSqlDatabase db;
};

#endif // FORGOTPASSWORD_H
