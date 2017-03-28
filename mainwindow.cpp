#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->mymeter = new QcwMeter(this);
    ui->mymeter->resize(400,400);

    ui->horizontalScrollBar->setMinimum(0);
    ui->horizontalScrollBar->setMaximum(1000);

    ui->mymeter->setUnits(tr("速度表"));

    ui->mymeter->setPrecision(10);

    //mymeter->setThreshold(800);
    ui->mymeter->setThresholdEnabled(false);
    ui->mymeter->setScaleMinor(5);
    ui->mymeter->setScaleMajor(10);
    ui->mymeter->setCrownColor(Qt::black);
    ui->mymeter->setForeground(Qt::green);
    ui->mymeter->setValue(0);
    ui->mymeter->setMaxValue(1000);
    ui->mymeter->setMinValue(0);
    ui->mymeter->show();



       // plot = new QCustomPlot;
        // generate some data:
        QVector<double> x(101), y(101); // initialize with entries 0..100
        for (int i=0; i<101; ++i)
        {
            x[i] = i/50.0 - 1; // x goes from -1 to 1
            y[i] = x[i]*x[i];  // let's plot a quadratic function
        }
        // create graph and assign data to it:
        ui->plot->addGraph();
        ui->plot->graph(0)->setData(x, y);

        ui->plot->xAxis->setLabel("x");
        ui->plot->yAxis->setLabel("y");



        ui->plot->xAxis->setRange(-1, 1);
        ui->plot->yAxis->setRange(0, 1);

        ui->plot->resize(300, 200);
       // plot->show();








}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_horizontalScrollBar_valueChanged(int value)
{
    ui->mymeter->setValue(value);

    float v1,v2;

    v1 = 1000 - value;
    v2 = value;

    v1 = (v1/1000)*255;
    v2 = (v2/1000)*255;
   // v3 = v2

    ui->mymeter->setForeground(QColor(v2,v1,10));



}
