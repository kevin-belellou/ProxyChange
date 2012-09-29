#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButtonQuitter_clicked()
{
    this->close();
}

void MainWindow::on_pushButtonAppliquer_clicked()
{
    QProcess::startDetached("cmd.exe /C regedit /s C:\\Users\\Kevin\\Documents\\Cours\\Projets\\ProxyChange\\ProxyChange\\proxys_regs\\" + proxy + ".reg");
}

void MainWindow::on_radioButtonDesactiver_clicked()
{
    this->proxy = "Desactiver";
}

void MainWindow::on_radioButtonClous_clicked()
{
    this->proxy = "Clous2012";
}

void MainWindow::on_radioButtonFac_clicked()
{
    this->proxy = "Fac";
}
