#include "MainWindow.h"
#include "XMLPraser.h"
#include "./ui_MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    XMLPraser xmlPraser;

    xmlPraser.LoadXmlConfigFile();
    xmlPraser.BuildFunctionNodeVector();

    qDebug() << "End";
}

MainWindow::~MainWindow()
{
    delete ui;
}