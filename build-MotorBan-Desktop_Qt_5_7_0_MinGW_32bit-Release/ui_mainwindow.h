/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QWidget *centralWidget;
    QComboBox *comboBox;
    QPushButton *connect;
    QPushButton *scan;
    QPushButton *sendBtn;
    QPushButton *pushButton;
    QPushButton *fetch;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *Admin;
    QFormLayout *formLayout_4;
    QLineEdit *adminNum1;
    QLabel *adminLab1;
    QFormLayout *formLayout_5;
    QLineEdit *adminNum2;
    QLabel *adminLab2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *user;
    QFormLayout *formLayout;
    QLineEdit *userNum1;
    QLabel *userLab1;
    QFormLayout *formLayout_2;
    QLineEdit *userNum2;
    QLabel *userLab2;
    QFormLayout *formLayout_3;
    QLineEdit *userNum3;
    QLabel *userLab3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *channelName;
    QFormLayout *formLayout_6;
    QLineEdit *channel1;
    QLabel *channel1Label;
    QFormLayout *formLayout_7;
    QLineEdit *channel2;
    QLabel *channel1Label_2;
    QFormLayout *formLayout_8;
    QLineEdit *channel3;
    QLabel *channel1Label_3;
    QFormLayout *formLayout_9;
    QLineEdit *channel4;
    QLabel *channel1Label_4;
    QFormLayout *formLayout_10;
    QLineEdit *channel5;
    QLabel *channel1Label_5;
    QFormLayout *formLayout_11;
    QLineEdit *channel6;
    QLabel *channel1Label_6;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1148, 519);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 10, 91, 22));
        connect = new QPushButton(centralWidget);
        connect->setObjectName(QStringLiteral("connect"));
        connect->setGeometry(QRect(130, 10, 93, 28));
        scan = new QPushButton(centralWidget);
        scan->setObjectName(QStringLiteral("scan"));
        scan->setGeometry(QRect(10, 50, 93, 28));
        sendBtn = new QPushButton(centralWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(500, 370, 93, 28));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 50, 93, 28));
        fetch = new QPushButton(centralWidget);
        fetch->setObjectName(QStringLiteral("fetch"));
        fetch->setGeometry(QRect(610, 370, 93, 28));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(860, 10, 281, 181));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Admin = new QLabel(layoutWidget);
        Admin->setObjectName(QStringLiteral("Admin"));

        gridLayout_2->addWidget(Admin, 0, 0, 1, 1);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        adminNum1 = new QLineEdit(layoutWidget);
        adminNum1->setObjectName(QStringLiteral("adminNum1"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, adminNum1);

        adminLab1 = new QLabel(layoutWidget);
        adminLab1->setObjectName(QStringLiteral("adminLab1"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, adminLab1);


        gridLayout_2->addLayout(formLayout_4, 1, 0, 1, 1);

        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        adminNum2 = new QLineEdit(layoutWidget);
        adminNum2->setObjectName(QStringLiteral("adminNum2"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, adminNum2);

        adminLab2 = new QLabel(layoutWidget);
        adminLab2->setObjectName(QStringLiteral("adminLab2"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, adminLab2);


        gridLayout_2->addLayout(formLayout_5, 2, 0, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(530, 10, 281, 251));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        user = new QLabel(layoutWidget1);
        user->setObjectName(QStringLiteral("user"));

        gridLayout->addWidget(user, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        userNum1 = new QLineEdit(layoutWidget1);
        userNum1->setObjectName(QStringLiteral("userNum1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, userNum1);

        userLab1 = new QLabel(layoutWidget1);
        userLab1->setObjectName(QStringLiteral("userLab1"));

        formLayout->setWidget(0, QFormLayout::FieldRole, userLab1);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        userNum2 = new QLineEdit(layoutWidget1);
        userNum2->setObjectName(QStringLiteral("userNum2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, userNum2);

        userLab2 = new QLabel(layoutWidget1);
        userLab2->setObjectName(QStringLiteral("userLab2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, userLab2);


        gridLayout->addLayout(formLayout_2, 2, 0, 1, 1);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        userNum3 = new QLineEdit(layoutWidget1);
        userNum3->setObjectName(QStringLiteral("userNum3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, userNum3);

        userLab3 = new QLabel(layoutWidget1);
        userLab3->setObjectName(QStringLiteral("userLab3"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, userLab3);


        gridLayout->addLayout(formLayout_3, 3, 0, 1, 1);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(290, 10, 191, 271));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        channelName = new QLabel(layoutWidget2);
        channelName->setObjectName(QStringLiteral("channelName"));

        gridLayout_3->addWidget(channelName, 0, 0, 1, 1);

        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        channel1 = new QLineEdit(layoutWidget2);
        channel1->setObjectName(QStringLiteral("channel1"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, channel1);

        channel1Label = new QLabel(layoutWidget2);
        channel1Label->setObjectName(QStringLiteral("channel1Label"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, channel1Label);


        gridLayout_3->addLayout(formLayout_6, 1, 0, 1, 1);

        formLayout_7 = new QFormLayout();
        formLayout_7->setSpacing(6);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        channel2 = new QLineEdit(layoutWidget2);
        channel2->setObjectName(QStringLiteral("channel2"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, channel2);

        channel1Label_2 = new QLabel(layoutWidget2);
        channel1Label_2->setObjectName(QStringLiteral("channel1Label_2"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, channel1Label_2);


        gridLayout_3->addLayout(formLayout_7, 2, 0, 1, 1);

        formLayout_8 = new QFormLayout();
        formLayout_8->setSpacing(6);
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        channel3 = new QLineEdit(layoutWidget2);
        channel3->setObjectName(QStringLiteral("channel3"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, channel3);

        channel1Label_3 = new QLabel(layoutWidget2);
        channel1Label_3->setObjectName(QStringLiteral("channel1Label_3"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, channel1Label_3);


        gridLayout_3->addLayout(formLayout_8, 3, 0, 1, 1);

        formLayout_9 = new QFormLayout();
        formLayout_9->setSpacing(6);
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        channel4 = new QLineEdit(layoutWidget2);
        channel4->setObjectName(QStringLiteral("channel4"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, channel4);

        channel1Label_4 = new QLabel(layoutWidget2);
        channel1Label_4->setObjectName(QStringLiteral("channel1Label_4"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, channel1Label_4);


        gridLayout_3->addLayout(formLayout_9, 4, 0, 1, 1);

        formLayout_10 = new QFormLayout();
        formLayout_10->setSpacing(6);
        formLayout_10->setObjectName(QStringLiteral("formLayout_10"));
        channel5 = new QLineEdit(layoutWidget2);
        channel5->setObjectName(QStringLiteral("channel5"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, channel5);

        channel1Label_5 = new QLabel(layoutWidget2);
        channel1Label_5->setObjectName(QStringLiteral("channel1Label_5"));

        formLayout_10->setWidget(0, QFormLayout::FieldRole, channel1Label_5);


        gridLayout_3->addLayout(formLayout_10, 5, 0, 1, 1);

        formLayout_11 = new QFormLayout();
        formLayout_11->setSpacing(6);
        formLayout_11->setObjectName(QStringLiteral("formLayout_11"));
        channel6 = new QLineEdit(layoutWidget2);
        channel6->setObjectName(QStringLiteral("channel6"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, channel6);

        channel1Label_6 = new QLabel(layoutWidget2);
        channel1Label_6->setObjectName(QStringLiteral("channel1Label_6"));

        formLayout_11->setWidget(0, QFormLayout::FieldRole, channel1Label_6);


        gridLayout_3->addLayout(formLayout_11, 6, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1148, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Raiwan", 0));
        action->setText(QApplication::translate("MainWindow", "\330\256\330\247\331\206\331\207", 0));
        action_3->setText(QApplication::translate("MainWindow", "\330\257\330\261\330\250\330\247\330\261\331\207 \331\205\330\247", 0));
        connect->setText(QApplication::translate("MainWindow", "\330\247\330\252\330\265\330\247\331\204", 0));
        scan->setText(QApplication::translate("MainWindow", "\330\247\330\263\332\251\331\206", 0));
        sendBtn->setText(QApplication::translate("MainWindow", "\330\250\330\247\330\261\332\257\330\262\330\247\330\261\333\214", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\331\202\330\267\330\271", 0));
        fetch->setText(QApplication::translate("MainWindow", "\330\250\330\247\330\261\332\257\333\214\330\261\333\214", 0));
        Admin->setText(QApplication::translate("MainWindow", "\330\263\330\267\330\255 \330\257\330\263\330\252\330\261\330\263\333\214 1", 0));
        adminNum1->setText(QString());
        adminLab1->setText(QApplication::translate("MainWindow", "\330\264\331\205\330\247\330\261\331\207 1", 0));
        adminNum2->setText(QString());
        adminLab2->setText(QApplication::translate("MainWindow", "\330\264\331\205\330\247\330\261\331\207 2", 0));
        user->setText(QApplication::translate("MainWindow", "\330\263\330\267\330\255 \330\257\330\263\330\252\330\261\330\263\333\214 2", 0));
        userNum1->setText(QString());
        userLab1->setText(QApplication::translate("MainWindow", "\330\264\331\205\330\247\330\261\331\207 1", 0));
        userNum2->setText(QString());
        userLab2->setText(QApplication::translate("MainWindow", "\330\264\331\205\330\247\330\261\331\207 2", 0));
        userNum3->setText(QString());
        userLab3->setText(QApplication::translate("MainWindow", "\330\264\331\205\330\247\330\261\331\207 3", 0));
        channelName->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205 \332\251\330\247\331\206\330\247\331\204 \331\207\330\247", 0));
        channel1Label->setText(QApplication::translate("MainWindow", "    1", 0));
        channel1Label_2->setText(QApplication::translate("MainWindow", "    2", 0));
        channel1Label_3->setText(QApplication::translate("MainWindow", "    3", 0));
        channel1Label_4->setText(QApplication::translate("MainWindow", "    4", 0));
        channel1Label_5->setText(QApplication::translate("MainWindow", "    5", 0));
        channel1Label_6->setText(QApplication::translate("MainWindow", "    6", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\331\205\331\206\331\210", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
