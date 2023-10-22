#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_homeBtn_2_toggled(bool checked);

    void on_lightBtn_2_toggled(bool checked);

    void on_seatBtn_2_toggled(bool checked);

    void on_airBtn_2_toggled(bool checked);

    void on_lightOnBtn_toggled(bool checked);

    void on_lightOffBtn_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
