/********************************************************************************
** Form generated from reading UI file 'removestudent.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVESTUDENT_H
#define UI_REMOVESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveStudent
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *name;
    QLineEdit *lastName;
    QLineEdit *usrClass;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;

    void setupUi(QDialog *RemoveStudent)
    {
        if (RemoveStudent->objectName().isEmpty())
            RemoveStudent->setObjectName(QStringLiteral("RemoveStudent"));
        RemoveStudent->resize(358, 228);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/school.png"), QSize(), QIcon::Normal, QIcon::Off);
        RemoveStudent->setWindowIcon(icon);
        gridLayoutWidget = new QWidget(RemoveStudent);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 341, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        name = new QLineEdit(gridLayoutWidget);
        name->setObjectName(QStringLiteral("name"));
        name->setFont(font);

        gridLayout->addWidget(name, 0, 1, 1, 1);

        lastName = new QLineEdit(gridLayoutWidget);
        lastName->setObjectName(QStringLiteral("lastName"));
        lastName->setFont(font);

        gridLayout->addWidget(lastName, 1, 1, 1, 1);

        usrClass = new QLineEdit(gridLayoutWidget);
        usrClass->setObjectName(QStringLiteral("usrClass"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(usrClass->sizePolicy().hasHeightForWidth());
        usrClass->setSizePolicy(sizePolicy);
        usrClass->setMaximumSize(QSize(85, 16777215));
        usrClass->setFont(font);
        usrClass->setMaxLength(5);

        gridLayout->addWidget(usrClass, 2, 1, 1, 1);

        pushButton = new QPushButton(RemoveStudent);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 190, 93, 28));
        pushButton_2 = new QPushButton(RemoveStudent);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 190, 93, 28));
        label_4 = new QLabel(RemoveStudent);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 160, 311, 16));
        label_4->setFont(font);

        retranslateUi(RemoveStudent);

        pushButton_2->setDefault(true);


        QMetaObject::connectSlotsByName(RemoveStudent);
    } // setupUi

    void retranslateUi(QDialog *RemoveStudent)
    {
        RemoveStudent->setWindowTitle(QApplication::translate("RemoveStudent", "Remove student", nullptr));
        label_3->setText(QApplication::translate("RemoveStudent", "class:", nullptr));
        label->setText(QApplication::translate("RemoveStudent", "Name:", nullptr));
        label_2->setText(QApplication::translate("RemoveStudent", "Last name:", nullptr));
        pushButton->setText(QApplication::translate("RemoveStudent", "OK", nullptr));
        pushButton_2->setText(QApplication::translate("RemoveStudent", "Cancel", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RemoveStudent: public Ui_RemoveStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVESTUDENT_H
