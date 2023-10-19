#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *header;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QWidget *mainBody;
    QHBoxLayout *horizontalLayout_2;
    QWidget *leftMenu;
    QWidget *mainBodyContent;
    QWidget *rightMenu;
    QMenuBar *menubar;
    QMenu *menuComfort_Control;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("zoom-original")));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	border: none;\n"
"	background-color: transparent;\n"
"	background: transparent;\n"
"	padding: 0;\n"
"	margin: 0;\n"
"	color: #fff;\n"
"}\n"
"\n"
"#centralwidget{\n"
"	background-color: #1f232a;\n"
"}\n"
"\n"
"#header{\n"
"background-color:#27263c;\n"
"}\n"
"\n"
"#mainBody{\n"
"background-color:#27263c;\n"
"}"));
        MainWindow->setInputMethodHints(Qt::ImhNone);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        header = new QWidget(centralwidget);
        header->setObjectName("header");
        horizontalLayout = new QHBoxLayout(header);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_2 = new QFrame(header);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(frame_2);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);


        horizontalLayout->addWidget(frame_2);

        frame = new QFrame(header);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");

        horizontalLayout->addWidget(frame, 0, Qt::AlignRight);


        verticalLayout->addWidget(header, 0, Qt::AlignTop);

        mainBody = new QWidget(centralwidget);
        mainBody->setObjectName("mainBody");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainBody->sizePolicy().hasHeightForWidth());
        mainBody->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(mainBody);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        leftMenu = new QWidget(mainBody);
        leftMenu->setObjectName("leftMenu");

        horizontalLayout_2->addWidget(leftMenu);

        mainBodyContent = new QWidget(mainBody);
        mainBodyContent->setObjectName("mainBodyContent");

        horizontalLayout_2->addWidget(mainBodyContent);

        rightMenu = new QWidget(mainBody);
        rightMenu->setObjectName("widget_3");

        horizontalLayout_2->addWidget(rightMenu);


        verticalLayout->addWidget(mainBody);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuComfort_Control = new QMenu(menubar);
        menuComfort_Control->setObjectName("menuComfort_Control");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuComfort_Control->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuComfort_Control->setTitle(QCoreApplication::translate("MainWindow", "Comfort Control", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

