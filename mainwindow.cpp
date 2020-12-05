#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mkmmanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MKMManager *manager = new MKMManager("1", "2", "3", "4", this);
    manager->request("5");
}

MainWindow::~MainWindow()
{
    delete ui;
}

