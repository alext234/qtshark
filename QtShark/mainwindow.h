#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_connectButton_clicked();

    void on_serverIpLineEdit_returnPressed();


private:
    void handle_start_connect();
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
