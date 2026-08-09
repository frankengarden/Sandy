#include "mainwindow.h"
#include "ui_mainwindow.h"

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

QString outVal;

void MainWindow::on_pushButton_clicked()
{
    outVal= ui->lineEdit->text();
    ui->OutputLineEdit->setText(outVal);
}

