#include "mainwindow.h"
#include "./ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_buttonPing_clicked()
{
    networkAddress = "";
    baseCommand = "ping";
    ui->boxOutput->setPlainText("");
    networkAddress = ui->boxNetworkAddress->text();
    pingCount = ui->spinPingCount->text();
    baseCommand = baseCommand+" -c"+pingCount+" "+networkAddress; // concatenate

    QProcess process;
    process.start(baseCommand);
    process.waitForFinished(-1);
    QByteArray out = process.readAllStandardOutput();

    ui->boxOutput->setPlainText(out);
}

void MainWindow::on_buttonClear_clicked()
{
    networkAddress = "";
    ui->boxNetworkAddress->clear();
    ui->boxOutput->setPlainText("");
}
