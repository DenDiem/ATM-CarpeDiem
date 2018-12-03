#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

//Forward declarations
class NoMoney;
class PinWindow;
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{ Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    //button slots
    void on_pushButton_clicked();
    void on_btn_1_clicked();
    void on_btn_2_clicked();
    void on_btn_3_clicked();
    void on_btn_4_clicked();
    void on_btn_5_clicked();
    void on_btn_6_clicked();
    void on_btn_7_clicked();
    void on_btn_8_clicked();
    void on_btn_9_clicked();
    void on_btn_0_clicked();
    void on_btn_del_clicked();

private:
    //ptr for linked windows
    Ui::MainWindow *ui;
    PinWindow *pin;
    NoMoney *_nm;
};
#endif // MAINWINDOW_H
