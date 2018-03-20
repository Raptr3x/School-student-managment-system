/********************************************************************************
** Form generated from reading UI file 'listwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWINDOW_H
#define UI_LISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListWindow
{
public:
    QAction *action_AddStudent;
    QAction *action_RemoveStudent;
    QAction *action_Logout;
    QWidget *centralwidget;
    QLabel *profilePic;
    QLabel *name;
    QLabel *lastName;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *class_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *birth;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *street;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLabel *houseNum;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLabel *zip;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_15;
    QLabel *classroom;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QLabel *phone;
    QListView *listView;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_18;
    QLabel *email;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ListWindow)
    {
        if (ListWindow->objectName().isEmpty())
            ListWindow->setObjectName(QStringLiteral("ListWindow"));
        ListWindow->resize(1200, 650);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ListWindow->sizePolicy().hasHeightForWidth());
        ListWindow->setSizePolicy(sizePolicy);
        ListWindow->setMinimumSize(QSize(1200, 650));
        ListWindow->setMaximumSize(QSize(1200, 650));
        QFont font;
        font.setKerning(true);
        ListWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/school.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListWindow->setWindowIcon(icon);
        action_AddStudent = new QAction(ListWindow);
        action_AddStudent->setObjectName(QStringLiteral("action_AddStudent"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_AddStudent->setIcon(icon1);
        action_RemoveStudent = new QAction(ListWindow);
        action_RemoveStudent->setObjectName(QStringLiteral("action_RemoveStudent"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_RemoveStudent->setIcon(icon2);
        action_Logout = new QAction(ListWindow);
        action_Logout->setObjectName(QStringLiteral("action_Logout"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Logout->setIcon(icon3);
        centralwidget = new QWidget(ListWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        profilePic = new QLabel(centralwidget);
        profilePic->setObjectName(QStringLiteral("profilePic"));
        profilePic->setGeometry(QRect(540, 10, 161, 151));
        profilePic->setFrameShape(QFrame::Box);
        profilePic->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/avatar.png")));
        profilePic->setScaledContents(true);
        profilePic->setWordWrap(false);
        name = new QLabel(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(740, 20, 301, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        name->setFont(font1);
        lastName = new QLabel(centralwidget);
        lastName->setObjectName(QStringLiteral("lastName"));
        lastName->setGeometry(QRect(740, 80, 341, 51));
        lastName->setFont(font1);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(540, 190, 241, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setPointSize(15);
        label_4->setFont(font2);

        horizontalLayout->addWidget(label_4);

        class_2 = new QLabel(horizontalLayoutWidget);
        class_2->setObjectName(QStringLiteral("class_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(class_2->sizePolicy().hasHeightForWidth());
        class_2->setSizePolicy(sizePolicy1);
        class_2->setFont(font2);

        horizontalLayout->addWidget(class_2);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(540, 250, 451, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        horizontalLayout_2->addWidget(label_6);

        birth = new QLabel(horizontalLayoutWidget_2);
        birth->setObjectName(QStringLiteral("birth"));
        sizePolicy1.setHeightForWidth(birth->sizePolicy().hasHeightForWidth());
        birth->setSizePolicy(sizePolicy1);
        birth->setFont(font2);

        horizontalLayout_2->addWidget(birth);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(540, 310, 461, 191));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(221, 161));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 441, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_8->setFont(font3);

        verticalLayout->addWidget(label_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font4;
        font4.setPointSize(10);
        label_9->setFont(font4);

        horizontalLayout_5->addWidget(label_9);

        street = new QLabel(verticalLayoutWidget);
        street->setObjectName(QStringLiteral("street"));
        sizePolicy1.setHeightForWidth(street->sizePolicy().hasHeightForWidth());
        street->setSizePolicy(sizePolicy1);
        street->setFont(font4);
        street->setScaledContents(true);
        street->setWordWrap(true);

        horizontalLayout_5->addWidget(street);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font4);

        horizontalLayout_6->addWidget(label_10);

        houseNum = new QLabel(verticalLayoutWidget);
        houseNum->setObjectName(QStringLiteral("houseNum"));
        sizePolicy1.setHeightForWidth(houseNum->sizePolicy().hasHeightForWidth());
        houseNum->setSizePolicy(sizePolicy1);
        houseNum->setFont(font4);
        houseNum->setScaledContents(true);
        houseNum->setWordWrap(true);

        horizontalLayout_6->addWidget(houseNum);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font4);

        horizontalLayout_7->addWidget(label_11);

        zip = new QLabel(verticalLayoutWidget);
        zip->setObjectName(QStringLiteral("zip"));
        sizePolicy1.setHeightForWidth(zip->sizePolicy().hasHeightForWidth());
        zip->setSizePolicy(sizePolicy1);
        zip->setFont(font4);
        zip->setScaledContents(true);
        zip->setWordWrap(true);

        horizontalLayout_7->addWidget(zip);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(790, 190, 331, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(horizontalLayoutWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font2);

        horizontalLayout_3->addWidget(label_15);

        classroom = new QLabel(horizontalLayoutWidget_3);
        classroom->setObjectName(QStringLiteral("classroom"));
        sizePolicy1.setHeightForWidth(classroom->sizePolicy().hasHeightForWidth());
        classroom->setSizePolicy(sizePolicy1);
        classroom->setFont(font2);

        horizontalLayout_3->addWidget(classroom);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(540, 510, 651, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(horizontalLayoutWidget_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font2);

        horizontalLayout_4->addWidget(label_17);

        phone = new QLabel(horizontalLayoutWidget_4);
        phone->setObjectName(QStringLiteral("phone"));
        sizePolicy1.setHeightForWidth(phone->sizePolicy().hasHeightForWidth());
        phone->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setPointSize(14);
        phone->setFont(font5);

        horizontalLayout_4->addWidget(phone);

        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 10, 521, 591));
        QFont font6;
        font6.setPointSize(17);
        listView->setFont(font6);
        horizontalLayoutWidget_8 = new QWidget(centralwidget);
        horizontalLayoutWidget_8->setObjectName(QStringLiteral("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(540, 560, 651, 41));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setSpacing(3);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(horizontalLayoutWidget_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font2);
        label_18->setWordWrap(true);

        horizontalLayout_8->addWidget(label_18);

        email = new QLabel(horizontalLayoutWidget_8);
        email->setObjectName(QStringLiteral("email"));
        sizePolicy1.setHeightForWidth(email->sizePolicy().hasHeightForWidth());
        email->setSizePolicy(sizePolicy1);
        email->setFont(font2);

        horizontalLayout_8->addWidget(email);

        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(1160, 10, 31, 40));
        commandLinkButton->setMaximumSize(QSize(16777211, 16777215));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon4);
        commandLinkButton_2 = new QCommandLinkButton(centralwidget);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(1130, 10, 31, 40));
        commandLinkButton_2->setMaximumSize(QSize(16777211, 16777215));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton_2->setIcon(icon5);
        ListWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(ListWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        toolBar->setFloatable(true);
        ListWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_AddStudent);
        toolBar->addAction(action_RemoveStudent);
        toolBar->addAction(action_Logout);

        retranslateUi(ListWindow);

        QMetaObject::connectSlotsByName(ListWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ListWindow)
    {
        ListWindow->setWindowTitle(QApplication::translate("ListWindow", "Student managment system", nullptr));
        action_AddStudent->setText(QApplication::translate("ListWindow", "Add student", nullptr));
#ifndef QT_NO_SHORTCUT
        action_AddStudent->setShortcut(QApplication::translate("ListWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        action_RemoveStudent->setText(QApplication::translate("ListWindow", "Remove student", nullptr));
#ifndef QT_NO_TOOLTIP
        action_RemoveStudent->setToolTip(QApplication::translate("ListWindow", "Remove student", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_RemoveStudent->setShortcut(QApplication::translate("ListWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        action_Logout->setText(QApplication::translate("ListWindow", "Logout", nullptr));
#ifndef QT_NO_TOOLTIP
        action_Logout->setToolTip(QApplication::translate("ListWindow", "Logout", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_Logout->setShortcut(QApplication::translate("ListWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        profilePic->setText(QString());
        name->setText(QApplication::translate("ListWindow", "Name", nullptr));
        lastName->setText(QApplication::translate("ListWindow", "Last name", nullptr));
        label_4->setText(QApplication::translate("ListWindow", "Class:", nullptr));
        class_2->setText(QString());
        label_6->setText(QApplication::translate("ListWindow", "Date of birth:", nullptr));
        birth->setText(QString());
        label_8->setText(QApplication::translate("ListWindow", "Adress", nullptr));
        label_9->setText(QApplication::translate("ListWindow", "Street:", nullptr));
        street->setText(QString());
        label_10->setText(QApplication::translate("ListWindow", "House num:", nullptr));
        houseNum->setText(QString());
        label_11->setText(QApplication::translate("ListWindow", "City & Zip code:", nullptr));
        zip->setText(QString());
        label_15->setText(QApplication::translate("ListWindow", "Classroom:", nullptr));
        classroom->setText(QString());
        label_17->setText(QApplication::translate("ListWindow", "Phone number:", nullptr));
        phone->setText(QString());
        label_18->setText(QApplication::translate("ListWindow", "E-mail:", nullptr));
        email->setText(QString());
#ifndef QT_NO_TOOLTIP
        commandLinkButton->setToolTip(QApplication::translate("ListWindow", "Refresh", nullptr));
#endif // QT_NO_TOOLTIP
        commandLinkButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        commandLinkButton_2->setToolTip(QApplication::translate("ListWindow", "Edit", nullptr));
#endif // QT_NO_TOOLTIP
        commandLinkButton_2->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("ListWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListWindow: public Ui_ListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWINDOW_H
