/********************************************************************************
** Form generated from reading UI file 'createaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNT_H
#define UI_CREATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateAccount
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *text_email;
    QLabel *label_4;
    QLineEdit *text_newUsername;
    QLabel *label_2;
    QLineEdit *text_newPassword;
    QLabel *label_3;
    QLineEdit *text_newRePassword;
    QLabel *label_5;
    QPushButton *button_create;

    void setupUi(QDialog *CreateAccount)
    {
        if (CreateAccount->objectName().isEmpty())
            CreateAccount->setObjectName(QStringLiteral("CreateAccount"));
        CreateAccount->resize(367, 392);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/school.png"), QSize(), QIcon::Normal, QIcon::Off);
        CreateAccount->setWindowIcon(icon);
        verticalLayoutWidget = new QWidget(CreateAccount);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 10, 291, 338));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        text_email = new QLineEdit(verticalLayoutWidget);
        text_email->setObjectName(QStringLiteral("text_email"));
        QFont font1;
        font1.setPointSize(10);
        text_email->setFont(font1);

        verticalLayout->addWidget(text_email);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        text_newUsername = new QLineEdit(verticalLayoutWidget);
        text_newUsername->setObjectName(QStringLiteral("text_newUsername"));
        text_newUsername->setFont(font1);

        verticalLayout->addWidget(text_newUsername);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        text_newPassword = new QLineEdit(verticalLayoutWidget);
        text_newPassword->setObjectName(QStringLiteral("text_newPassword"));
        text_newPassword->setFont(font1);
        text_newPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(text_newPassword);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        text_newRePassword = new QLineEdit(verticalLayoutWidget);
        text_newRePassword->setObjectName(QStringLiteral("text_newRePassword"));
        text_newRePassword->setFont(font1);
        text_newRePassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(text_newRePassword);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font2;
        font2.setPointSize(13);
        label_5->setFont(font2);
        label_5->setScaledContents(false);
        label_5->setWordWrap(false);

        verticalLayout->addWidget(label_5);

        button_create = new QPushButton(CreateAccount);
        button_create->setObjectName(QStringLiteral("button_create"));
        button_create->setGeometry(QRect(100, 350, 161, 31));
        QFont font3;
        font3.setPointSize(12);
        button_create->setFont(font3);

        retranslateUi(CreateAccount);

        QMetaObject::connectSlotsByName(CreateAccount);
    } // setupUi

    void retranslateUi(QDialog *CreateAccount)
    {
        CreateAccount->setWindowTitle(QApplication::translate("CreateAccount", "Create account", nullptr));
        label->setText(QApplication::translate("CreateAccount", "Email:", nullptr));
        label_4->setText(QApplication::translate("CreateAccount", "Create username:", nullptr));
        label_2->setText(QApplication::translate("CreateAccount", "Create password:", nullptr));
        label_3->setText(QApplication::translate("CreateAccount", "Repeat password:", nullptr));
        label_5->setText(QString());
        button_create->setText(QApplication::translate("CreateAccount", "Create Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateAccount: public Ui_CreateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNT_H
