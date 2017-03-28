#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcw_meter.h"
#include "qcustomplot.h"

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
    void on_horizontalScrollBar_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    //QcwMeter *mymeter;
    //QCustomPlot *plot;
};

#endif // MAINWINDOW_H
