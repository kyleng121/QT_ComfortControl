#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    QFile file(":/resource/resource/style/style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    setStyleSheet(styleSheet);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_homeBtn_2_toggled(bool checked)
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_lightBtn_2_toggled(bool checked)
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_seatBtn_2_toggled(bool checked)
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_airBtn_2_toggled(bool checked)
{
    ui->stackedWidget->setCurrentIndex(2);
}

