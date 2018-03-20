/********************************************************************************
** Form generated from reading UI file 'studentedit.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTEDIT_H
#define UI_STUDENTEDIT_H

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

class Ui_StudentEdit
{
public:
    QLabel *label_profileImage;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *text_name;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *text_lastName;
    QLineEdit *text_class;
    QLineEdit *text_classroom;
    QLineEdit *text_street;
    QLineEdit *text_houseNum;
    QLineEdit *text_zip;
    QLineEdit *text_phone;
    QLineEdit *text_email;
    QLineEdit *text_birth;
    QPushButton *pushButton;
    QLabel *email;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *image_info;

    void setupUi(QDialog *StudentEdit)
    {
        if (StudentEdit->objectName().isEmpty())
            StudentEdit->setObjectName(QStringLiteral("StudentEdit"));
        StudentEdit->resize(540, 652);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/school.png"), QSize(), QIcon::Normal, QIcon::Off);
        StudentEdit->setWindowIcon(icon);
        label_profileImage = new QLabel(StudentEdit);
        label_profileImage->setObjectName(QStringLiteral("label_profileImage"));
        label_profileImage->setGeometry(QRect(10, 10, 161, 131));
        label_profileImage->setFrameShape(QFrame::Box);
        gridLayoutWidget = new QWidget(StudentEdit);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 150, 521, 451));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font;
        font.setPointSize(15);
        label_10->setFont(font);

        gridLayout_2->addWidget(label_10, 13, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 9, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 7, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 8, 0, 1, 1);

        text_name = new QLineEdit(gridLayoutWidget);
        text_name->setObjectName(QStringLiteral("text_name"));
        text_name->setFont(font);

        gridLayout_2->addWidget(text_name, 0, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        gridLayout_2->addWidget(label_13, 12, 0, 1, 1);

        text_lastName = new QLineEdit(gridLayoutWidget);
        text_lastName->setObjectName(QStringLiteral("text_lastName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(text_lastName->sizePolicy().hasHeightForWidth());
        text_lastName->setSizePolicy(sizePolicy);
        text_lastName->setFont(font);

        gridLayout_2->addWidget(text_lastName, 1, 1, 1, 1);

        text_class = new QLineEdit(gridLayoutWidget);
        text_class->setObjectName(QStringLiteral("text_class"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text_class->sizePolicy().hasHeightForWidth());
        text_class->setSizePolicy(sizePolicy1);
        text_class->setFont(font);

        gridLayout_2->addWidget(text_class, 2, 1, 1, 1);

        text_classroom = new QLineEdit(gridLayoutWidget);
        text_classroom->setObjectName(QStringLiteral("text_classroom"));
        sizePolicy1.setHeightForWidth(text_classroom->sizePolicy().hasHeightForWidth());
        text_classroom->setSizePolicy(sizePolicy1);
        text_classroom->setFont(font);

        gridLayout_2->addWidget(text_classroom, 3, 1, 1, 1);

        text_street = new QLineEdit(gridLayoutWidget);
        text_street->setObjectName(QStringLiteral("text_street"));
        text_street->setFont(font);

        gridLayout_2->addWidget(text_street, 7, 1, 1, 1);

        text_houseNum = new QLineEdit(gridLayoutWidget);
        text_houseNum->setObjectName(QStringLiteral("text_houseNum"));
        sizePolicy1.setHeightForWidth(text_houseNum->sizePolicy().hasHeightForWidth());
        text_houseNum->setSizePolicy(sizePolicy1);
        text_houseNum->setMaximumSize(QSize(85, 16777215));
        text_houseNum->setFont(font);

        gridLayout_2->addWidget(text_houseNum, 8, 1, 1, 1);

        text_zip = new QLineEdit(gridLayoutWidget);
        text_zip->setObjectName(QStringLiteral("text_zip"));
        sizePolicy1.setHeightForWidth(text_zip->sizePolicy().hasHeightForWidth());
        text_zip->setSizePolicy(sizePolicy1);
        text_zip->setMaximumSize(QSize(167772, 16777215));
        text_zip->setFont(font);

        gridLayout_2->addWidget(text_zip, 9, 1, 1, 1);

        text_phone = new QLineEdit(gridLayoutWidget);
        text_phone->setObjectName(QStringLiteral("text_phone"));
        text_phone->setFont(font);
        text_phone->setMaxLength(32767);
        text_phone->setReadOnly(false);

        gridLayout_2->addWidget(text_phone, 12, 1, 1, 1);

        text_email = new QLineEdit(gridLayoutWidget);
        text_email->setObjectName(QStringLiteral("text_email"));
        text_email->setFont(font);

        gridLayout_2->addWidget(text_email, 13, 1, 1, 1);

        text_birth = new QLineEdit(gridLayoutWidget);
        text_birth->setObjectName(QStringLiteral("text_birth"));
        sizePolicy1.setHeightForWidth(text_birth->sizePolicy().hasHeightForWidth());
        text_birth->setSizePolicy(sizePolicy1);
        text_birth->setFont(font);

        gridLayout_2->addWidget(text_birth, 5, 1, 1, 1);

        pushButton = new QPushButton(StudentEdit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 610, 101, 31));
        email = new QLabel(StudentEdit);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(10, 610, 281, 31));
        QFont font1;
        font1.setPointSize(12);
        email->setFont(font1);
        email->setFrameShape(QFrame::NoFrame);
        pushButton_3 = new QPushButton(StudentEdit);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 110, 93, 28));
        pushButton_2 = new QPushButton(StudentEdit);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 610, 101, 31));
        image_info = new QLabel(StudentEdit);
        image_info->setObjectName(QStringLiteral("image_info"));
        image_info->setGeometry(QRect(180, 10, 351, 91));
        image_info->setFont(font1);

        retranslateUi(StudentEdit);

        QMetaObject::connectSlotsByName(StudentEdit);
    } // setupUi

    void retranslateUi(QDialog *StudentEdit)
    {
        StudentEdit->setWindowTitle(QApplication::translate("StudentEdit", "Edit student", nullptr));
        label_profileImage->setText(QString());
        label_10->setText(QApplication::translate("StudentEdit", "E-mail:", nullptr));
        label_4->setText(QApplication::translate("StudentEdit", "Classroom:", nullptr));
        label_8->setText(QApplication::translate("StudentEdit", "City, zip code:", nullptr));
        label_6->setText(QApplication::translate("StudentEdit", "Street:", nullptr));
        label_5->setText(QApplication::translate("StudentEdit", "Date of birth:", nullptr));
        label_7->setText(QApplication::translate("StudentEdit", "Class:", nullptr));
        label_9->setText(QApplication::translate("StudentEdit", "House number:", nullptr));
        label_11->setText(QApplication::translate("StudentEdit", "Last name:", nullptr));
        label_12->setText(QApplication::translate("StudentEdit", "Name:", nullptr));
        label_13->setText(QApplication::translate("StudentEdit", "Phone number:", nullptr));
        text_phone->setInputMask(QString());
        text_phone->setText(QString());
        text_phone->setPlaceholderText(QApplication::translate("StudentEdit", "+43", nullptr));
        pushButton->setText(QApplication::translate("StudentEdit", "OK", nullptr));
        email->setText(QString());
        pushButton_3->setText(QApplication::translate("StudentEdit", "Browse..", nullptr));
        pushButton_2->setText(QApplication::translate("StudentEdit", "Cancel", nullptr));
        image_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StudentEdit: public Ui_StudentEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTEDIT_H
