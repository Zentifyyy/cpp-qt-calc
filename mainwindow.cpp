#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "iostream"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

int dots = 0;
long double num1 = 0;
char calc = '_';

void MainWindow::doCalculating(long double num2){
    double answer = 0;

    switch (calc) {
    case '/':
        answer = num1/num2;
        break;
    case '*':
        answer = num1*num2;
        break;
    case '+':
        answer = num1+num2;
        break;
    case '-':
        answer = num1-num2;
        break;
    }

    ui->numberDisplay->setText(QString::number(answer));
}

QString MainWindow::getText(){
    return ui->numberDisplay->text();
}

void MainWindow::setText(QString s){
    QString text;
    if(s == "."){
        dots++;
    }

    if(getText() == "0" && s != "0"){
        ui->numberDisplay->setText(s);
    }
    else{
        text = getText() + s;
        ui->numberDisplay->setText(text);
    }
}

void MainWindow::on_zeroButton_pressed(){
    setText("0");
}


void MainWindow::on_oneButton_pressed(){
    setText("1");
}


void MainWindow::on_twoButton_pressed(){
    setText("2");
}


void MainWindow::on_threeButton_pressed(){
    setText("3");
}


void MainWindow::on_fourButton_pressed(){
    setText("4");
}


void MainWindow::on_fiveButton_pressed(){
    setText("5");
}


void MainWindow::on_sixButton_pressed(){
    setText("6");
}


void MainWindow::on_sevenButton_pressed(){
    setText("7");
}


void MainWindow::on_eightButton_pressed(){
    setText("8");
}


void MainWindow::on_nineButton_pressed(){
    setText("9");
}


void MainWindow::on_acButton_pressed(){
    ui->numberDisplay->setText("0");
    dots = 0;
    num1 = 0;
    calc = '_';
}


void MainWindow::on_absoluteButton_pressed(){
    if(getText()[0] != '-'){
        ui->numberDisplay->setText("-" + getText());
    }
    else{
        ui->numberDisplay->setText(getText().removeFirst());
    }
}


void MainWindow::on_percentButton_pressed(){
    if(long number = getText().toLong()){
        ui->numberDisplay->setText(QString::number(number / 10));}
}


void MainWindow::on_dotButton_pressed(){
    if(dots == 0 && getText() != "0"){
        setText(".");}
}


void MainWindow::on_devideButton_pressed(){
    if(num1 == 0){
        num1 = ui->numberDisplay->text().toDouble();
        ui->numberDisplay->setText("0");
        if(calc == '_'){
            calc = '/';
        }
    }
}


void MainWindow::on_timesButton_pressed(){
    if(num1 == 0){
        num1 = ui->numberDisplay->text().toDouble();
        ui->numberDisplay->setText("0");
        if(calc == '_'){
            calc = '*';
        }
    }
}


void MainWindow::on_equalsButton_pressed(){
    if(calc != '_' && num1 != 0){
        doCalculating(ui->numberDisplay->text().toDouble());
    }
}


void MainWindow::on_minusButton_pressed(){
    if(num1 == 0){
        num1 = ui->numberDisplay->text().toDouble();
        ui->numberDisplay->setText("0");
        if(calc == '_'){
            calc = '-';
        }
    }
}


void MainWindow::on_plusButton_pressed(){
    if(num1 == 0){
        num1 = ui->numberDisplay->text().toDouble();
        ui->numberDisplay->setText("0");
        if(calc == '_'){
            calc = '+';
        }
    }
}
