/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout_2;
    QGridLayout *gridLayout;
    QWidget *iconMenu;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *homeBtn_1;
    QPushButton *lightBtn_1;
    QPushButton *seatBtn_1;
    QPushButton *airBtn_1;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_5;
    QWidget *leftMenu;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *homeBtn_2;
    QPushButton *lightBtn_2;
    QPushButton *seatBtn_2;
    QPushButton *airBtn_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_10;
    QWidget *mainWindow;
    QFormLayout *formLayout;
    QWidget *header;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *changeBtn;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QLabel *label_4;
    QWidget *lightPage;
    QWidget *lightPageHeader;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QWidget *lightPageBody;
    QPushButton *lightOnBtn;
    QPushButton *lightOffBtn;
    QSlider *horizontalSlider;
    QWidget *lightLogArea;
    QLabel *label_8;
    QLabel *lightLog;
    QWidget *seatPage;
    QWidget *seatPageBody;
    QWidget *seatPageHeader;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_5;
    QWidget *airPage;
    QWidget *airPageHeader;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_3;
    QWidget *airPageBody;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout_2 = new QFormLayout(centralwidget);
        formLayout_2->setObjectName("formLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        iconMenu = new QWidget(centralwidget);
        iconMenu->setObjectName("iconMenu");
        iconMenu->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(iconMenu);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(iconMenu);
        label->setObjectName("label");
        label->setMinimumSize(QSize(30, 30));
        label->setMaximumSize(QSize(30, 30));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/resource/icon/autonomous-car.png")));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        homeBtn_1 = new QPushButton(iconMenu);
        homeBtn_1->setObjectName("homeBtn_1");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/resource/icon/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        homeBtn_1->setIcon(icon);
        homeBtn_1->setIconSize(QSize(20, 20));
        homeBtn_1->setCheckable(true);
        homeBtn_1->setChecked(true);
        homeBtn_1->setAutoExclusive(true);

        verticalLayout->addWidget(homeBtn_1);

        lightBtn_1 = new QPushButton(iconMenu);
        lightBtn_1->setObjectName("lightBtn_1");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/resource/icon/light.png"), QSize(), QIcon::Normal, QIcon::Off);
        lightBtn_1->setIcon(icon1);
        lightBtn_1->setIconSize(QSize(20, 20));
        lightBtn_1->setCheckable(true);
        lightBtn_1->setAutoExclusive(true);

        verticalLayout->addWidget(lightBtn_1);

        seatBtn_1 = new QPushButton(iconMenu);
        seatBtn_1->setObjectName("seatBtn_1");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/resource/icon/car-seat.png"), QSize(), QIcon::Normal, QIcon::Off);
        seatBtn_1->setIcon(icon2);
        seatBtn_1->setIconSize(QSize(20, 20));
        seatBtn_1->setCheckable(true);
        seatBtn_1->setAutoExclusive(true);

        verticalLayout->addWidget(seatBtn_1);

        airBtn_1 = new QPushButton(iconMenu);
        airBtn_1->setObjectName("airBtn_1");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resource/resource/icon/fan.png"), QSize(), QIcon::Normal, QIcon::Off);
        airBtn_1->setIcon(icon3);
        airBtn_1->setIconSize(QSize(20, 20));
        airBtn_1->setCheckable(true);
        airBtn_1->setAutoExclusive(true);

        verticalLayout->addWidget(airBtn_1);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 359, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_5 = new QPushButton(iconMenu);
        pushButton_5->setObjectName("pushButton_5");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resource/resource/icon/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(20, 20));
        pushButton_5->setCheckable(true);
        pushButton_5->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_5);


        gridLayout->addWidget(iconMenu, 0, 0, 1, 1);

        leftMenu = new QWidget(centralwidget);
        leftMenu->setObjectName("leftMenu");
        verticalLayout_4 = new QVBoxLayout(leftMenu);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(leftMenu);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(40, 40));
        label_2->setMaximumSize(QSize(40, 40));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resource/resource/icon/autonomous-car.png")));
        label_2->setScaledContents(true);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(leftMenu);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(9);
        font.setBold(true);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        homeBtn_2 = new QPushButton(leftMenu);
        homeBtn_2->setObjectName("homeBtn_2");
        homeBtn_2->setIcon(icon);
        homeBtn_2->setIconSize(QSize(14, 14));
        homeBtn_2->setCheckable(true);
        homeBtn_2->setChecked(true);
        homeBtn_2->setAutoExclusive(true);

        verticalLayout_3->addWidget(homeBtn_2);

        lightBtn_2 = new QPushButton(leftMenu);
        lightBtn_2->setObjectName("lightBtn_2");
        lightBtn_2->setIcon(icon1);
        lightBtn_2->setIconSize(QSize(14, 14));
        lightBtn_2->setCheckable(true);
        lightBtn_2->setAutoExclusive(true);

        verticalLayout_3->addWidget(lightBtn_2);

        seatBtn_2 = new QPushButton(leftMenu);
        seatBtn_2->setObjectName("seatBtn_2");
        seatBtn_2->setIcon(icon2);
        seatBtn_2->setIconSize(QSize(14, 14));
        seatBtn_2->setCheckable(true);
        seatBtn_2->setAutoExclusive(true);

        verticalLayout_3->addWidget(seatBtn_2);

        airBtn_2 = new QPushButton(leftMenu);
        airBtn_2->setObjectName("airBtn_2");
        airBtn_2->setIcon(icon3);
        airBtn_2->setIconSize(QSize(14, 14));
        airBtn_2->setCheckable(true);
        airBtn_2->setAutoExclusive(true);

        verticalLayout_3->addWidget(airBtn_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 359, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        pushButton_10 = new QPushButton(leftMenu);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setIcon(icon4);
        pushButton_10->setIconSize(QSize(14, 14));

        verticalLayout_4->addWidget(pushButton_10);


        gridLayout->addWidget(leftMenu, 0, 1, 1, 1);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, gridLayout);

        mainWindow = new QWidget(centralwidget);
        mainWindow->setObjectName("mainWindow");
        formLayout = new QFormLayout(mainWindow);
        formLayout->setObjectName("formLayout");
        header = new QWidget(mainWindow);
        header->setObjectName("header");
        horizontalLayout_4 = new QHBoxLayout(header);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        changeBtn = new QPushButton(header);
        changeBtn->setObjectName("changeBtn");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resource/resource/icon/drawer.png"), QSize(), QIcon::Normal, QIcon::Off);
        changeBtn->setIcon(icon5);
        changeBtn->setCheckable(true);
        changeBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(changeBtn);

        horizontalSpacer = new QSpacerItem(398, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        formLayout->setWidget(0, QFormLayout::SpanningRole, header);

        stackedWidget = new QStackedWidget(mainWindow);
        stackedWidget->setObjectName("stackedWidget");
        homePage = new QWidget();
        homePage->setObjectName("homePage");
        label_4 = new QLabel(homePage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 200, 141, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(15);
        font1.setBold(true);
        label_4->setFont(font1);
        stackedWidget->addWidget(homePage);
        lightPage = new QWidget();
        lightPage->setObjectName("lightPage");
        lightPageHeader = new QWidget(lightPage);
        lightPageHeader->setObjectName("lightPageHeader");
        lightPageHeader->setGeometry(QRect(-10, 0, 551, 41));
        horizontalLayout_5 = new QHBoxLayout(lightPageHeader);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_2 = new QSpacerItem(171, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        label_5 = new QLabel(lightPageHeader);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(212, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        lightPageBody = new QWidget(lightPage);
        lightPageBody->setObjectName("lightPageBody");
        lightPageBody->setGeometry(QRect(0, 41, 541, 481));
        lightOnBtn = new QPushButton(lightPageBody);
        lightOnBtn->setObjectName("lightOnBtn");
        lightOnBtn->setGeometry(QRect(120, 200, 101, 31));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resource/resource/icon/power.png"), QSize(), QIcon::Normal, QIcon::Off);
        lightOnBtn->setIcon(icon6);
        lightOnBtn->setIconSize(QSize(20, 20));
        lightOnBtn->setCheckable(true);
        lightOnBtn->setAutoExclusive(true);
        lightOffBtn = new QPushButton(lightPageBody);
        lightOffBtn->setObjectName("lightOffBtn");
        lightOffBtn->setGeometry(QRect(270, 200, 91, 31));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resource/resource/icon/power-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        lightOffBtn->setIcon(icon7);
        lightOffBtn->setIconSize(QSize(20, 20));
        lightOffBtn->setCheckable(true);
        lightOffBtn->setAutoExclusive(true);
        horizontalSlider = new QSlider(lightPageBody);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(160, 270, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lightLogArea = new QWidget(lightPageBody);
        lightLogArea->setObjectName("lightLogArea");
        lightLogArea->setGeometry(QRect(349, 369, 191, 111));
        label_8 = new QLabel(lightLogArea);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 0, 191, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        font2.setBold(true);
        label_8->setFont(font2);
        lightLog = new QLabel(lightLogArea);
        lightLog->setObjectName("lightLog");
        lightLog->setGeometry(QRect(0, 40, 191, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        lightLog->setFont(font3);
        stackedWidget->addWidget(lightPage);
        seatPage = new QWidget();
        seatPage->setObjectName("seatPage");
        seatPageBody = new QWidget(seatPage);
        seatPageBody->setObjectName("seatPageBody");
        seatPageBody->setGeometry(QRect(0, 41, 536, 451));
        seatPageHeader = new QWidget(seatPage);
        seatPageHeader->setObjectName("seatPageHeader");
        seatPageHeader->setGeometry(QRect(0, 0, 536, 41));
        horizontalLayout_7 = new QHBoxLayout(seatPageHeader);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_4 = new QSpacerItem(164, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        label_6 = new QLabel(seatPageHeader);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_5 = new QSpacerItem(204, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        stackedWidget->addWidget(seatPage);
        airPage = new QWidget();
        airPage->setObjectName("airPage");
        airPageHeader = new QWidget(airPage);
        airPageHeader->setObjectName("airPageHeader");
        airPageHeader->setGeometry(QRect(0, 0, 536, 41));
        horizontalLayout_8 = new QHBoxLayout(airPageHeader);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_6 = new QSpacerItem(164, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        label_7 = new QLabel(airPageHeader);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        horizontalLayout_8->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(204, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        gridLayout_3 = new QGridLayout(airPage);
        gridLayout_3->setObjectName("gridLayout_3");
        airPageBody = new QWidget(airPage);
        airPageBody->setObjectName("airPageBody");

        gridLayout_3->addWidget(airPageBody, 0, 0, 1, 1);

        stackedWidget->addWidget(airPage);

        formLayout->setWidget(1, QFormLayout::FieldRole, stackedWidget);


        formLayout_2->setWidget(0, QFormLayout::FieldRole, mainWindow);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(changeBtn, &QPushButton::toggled, iconMenu, &QWidget::setVisible);
        QObject::connect(changeBtn, &QPushButton::toggled, leftMenu, &QWidget::setHidden);
        QObject::connect(pushButton_5, &QPushButton::toggled, pushButton_10, &QPushButton::setChecked);
        QObject::connect(pushButton_10, &QPushButton::toggled, pushButton_5, &QPushButton::setChecked);
        QObject::connect(pushButton_10, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton_5, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(homeBtn_1, &QPushButton::toggled, homeBtn_2, &QPushButton::setChecked);
        QObject::connect(homeBtn_2, &QPushButton::toggled, homeBtn_1, &QPushButton::setChecked);
        QObject::connect(lightBtn_1, &QPushButton::toggled, lightBtn_2, &QPushButton::setChecked);
        QObject::connect(lightBtn_2, &QPushButton::toggled, lightBtn_1, &QPushButton::setChecked);
        QObject::connect(seatBtn_1, &QPushButton::toggled, seatBtn_2, &QPushButton::setChecked);
        QObject::connect(seatBtn_2, &QPushButton::toggled, seatBtn_1, &QPushButton::setChecked);
        QObject::connect(airBtn_1, &QPushButton::toggled, airBtn_2, &QPushButton::setChecked);
        QObject::connect(airBtn_2, &QPushButton::toggled, airBtn_1, &QPushButton::setChecked);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        homeBtn_1->setText(QString());
        lightBtn_1->setText(QString());
        seatBtn_1->setText(QString());
        airBtn_1->setText(QString());
        pushButton_5->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Comfort Control", nullptr));
        homeBtn_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        lightBtn_2->setText(QCoreApplication::translate("MainWindow", "Light control", nullptr));
        seatBtn_2->setText(QCoreApplication::translate("MainWindow", "Seat control", nullptr));
        airBtn_2->setText(QCoreApplication::translate("MainWindow", "Air control", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        changeBtn->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Light Settings", nullptr));
        lightOnBtn->setText(QCoreApplication::translate("MainWindow", "On", nullptr));
        lightOffBtn->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
#if QT_CONFIG(shortcut)
        lightOffBtn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        label_8->setText(QCoreApplication::translate("MainWindow", "Light log", nullptr));
        lightLog->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Seat Settings", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Air  Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
