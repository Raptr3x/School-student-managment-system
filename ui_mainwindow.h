/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *text_username;
    QLabel *label_2;
    QLineEdit *text_password;
    QLabel *label_logo;
    QPushButton *pushButton;
    QLabel *status;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(950, 483);
        MainWindow->setMinimumSize(QSize(950, 483));
        MainWindow->setMaximumSize(QSize(950, 483));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/school.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setInputMethodHints(Qt::ImhNone);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 70, 331, 231));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        formLayoutWidget = new QWidget(frame);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 20, 301, 191));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        text_username = new QLineEdit(formLayoutWidget);
        text_username->setObjectName(QStringLiteral("text_username"));
        QFont font1;
        font1.setPointSize(12);
        text_username->setFont(font1);

        formLayout->setWidget(1, QFormLayout::SpanningRole, text_username);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        text_password = new QLineEdit(formLayoutWidget);
        text_password->setObjectName(QStringLiteral("text_password"));
        text_password->setFont(font1);
        text_password->setFrame(true);
        text_password->setEchoMode(QLineEdit::Password);
        text_password->setCursorPosition(0);
        text_password->setClearButtonEnabled(false);

        formLayout->setWidget(3, QFormLayout::SpanningRole, text_password);

        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(390, 70, 500, 230));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo.png")));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 350, 281, 41));
        QFont font2;
        font2.setPointSize(16);
        pushButton->setFont(font2);
        pushButton->setAutoFillBackground(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        status = new QLabel(centralwidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(40, 310, 481, 30));
        QFont font3;
        font3.setPointSize(15);
        font3.setStyleStrategy(QFont::PreferAntialias);
        status->setFont(font3);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 430, 238, 42));
        pushButton_2->setMaximumSize(QSize(281, 16777215));
        pushButton_2->setFont(font2);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);
        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Student Managment System ", nullptr));
        label->setText(QApplication::translate("MainWindow", "username:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "password:", nullptr));
        text_password->setPlaceholderText(QString());
        label_logo->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        status->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Create Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
