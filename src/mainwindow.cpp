#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{


     float x1=76.1378;
       float x2=159.498;
     float x3 = 28.3959;
      float y1=188.268;
      float y2 =135.99;
      float y3 =926.15;

     float lenth = std::sqrt(std::pow(y1 - x1, 2) + std::pow(y2 - x2, 2) + std::pow(y3 - x3, 2));
     qDebug()<<"Distance is "<<lenth;
      QLabel* sum = new QLabel;

       sum->setText(QString("Distance: %1").arg(lenth));

     QHBoxLayout* layout = new QHBoxLayout;
     layout->addWidget(sum);



}

MainWindow::~MainWindow()
{

}

