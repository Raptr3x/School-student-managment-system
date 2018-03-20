/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgotPassword
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *ForgotPassword)
    {
        if (ForgotPassword->objectName().isEmpty())
            ForgotPassword->setObjectName(QStringLiteral("ForgotPassword"));
        ForgotPassword->resize(335, 180);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/school.png"), QSize(), QIcon::Normal, QIcon::Off);
        ForgotPassword->setWindowIcon(icon);
        formLayoutWidget = new QWidget(ForgotPassword);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 20, 301, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setScaledContents(false);
        label->setMargin(0);
        label->setIndent(0);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setPointSize(12);
        lineEdit->setFont(font1);

        formLayout->setWidget(2, QFormLayout::SpanningRole, lineEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setPointSize(10);
        label_2->setFont(font2);

        formLayout->setWidget(3, QFormLayout::SpanningRole, label_2);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton);


        retranslateUi(ForgotPassword);

        QMetaObject::connectSlotsByName(ForgotPassword);
    } // setupUi

    void retranslateUi(QDialog *ForgotPassword)
    {
        ForgotPassword->setWindowTitle(QApplication::translate("ForgotPassword", "Forgot password", nullptr));
        label->setText(QApplication::translate("ForgotPassword", "Email:", nullptr));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("ForgotPassword", "Retrive password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgotPassword: public Ui_ForgotPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
