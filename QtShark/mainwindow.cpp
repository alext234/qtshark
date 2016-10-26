#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

#include "ipaddressstring.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::handle_start_connect(){
    QString iptext = ui->serverIpLineEdit->text();
    IpAddressString ipAddrStr (iptext.toStdString());

    if (!ipAddrStr.isValidIpAddressString()) {
        ui->statusBar->showMessage("not valid ip address format");
        return;
    }

    statusBar()->showMessage("connecting to server"+ui->serverIpLineEdit->text());


}

void MainWindow::on_connectButton_clicked()
{

    handle_start_connect();

}


void MainWindow::on_serverIpLineEdit_returnPressed()
{
    handle_start_connect();
}
