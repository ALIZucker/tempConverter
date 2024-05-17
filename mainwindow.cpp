#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     change =ui->changebot;
     reset=ui->resetbot;
     showtitle=ui->lableShow;
     edit=ui->input_textC;
     result=ui->lableresult;
    convert=ui->convertbot;
    connect(change,SIGNAL(clicked(bool)),this , SLOT(changetext()));
     connect(reset,SIGNAL(clicked(bool)),this , SLOT(resettext()));
      connect(convert,SIGNAL(clicked(bool)),this , SLOT(converttext()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changetext()
{
    if(mode){
        mode=false;
         showtitle->setText(QString("Convert C to F"));
             edit->setPlaceholderText("C");
    }else {
            mode=true;
        showtitle->setText(QString("Convert F to C"));
        edit->setPlaceholderText("F");
    }

}

void MainWindow::resettext()
{
    edit->setText(" ");
    result->setText("result: 0");
}

void MainWindow::converttext()
{
    qDebug()<<"asdasdasd";

   if(mode){
finalNum=(edit->text().toInt()-32)*(5/9);
      result->setText("result: "+QString::number(finalNum));
   }else {
       finalNum=((9/5)*edit->text().toInt())+32;
       result->setText("result: "+QString::number(finalNum));
   }
}

