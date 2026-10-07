#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButtonBMI, &QPushButton::clicked, this, &MainWindow::BMI);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::BMI()
{
    double vyska = ui->doubleSpinBoxHeight->value() / 100.0;
    double vaha = ui->doubleSpinBoxWeight->value();

    double bmi = vaha / (vyska * vyska);

    QString kategorie;
    if (bmi < 18.5) {
        kategorie = "Podváha";
    ui->lineEditBMI->setStyleSheet("QLineEdit { background-color: #FFFFFF; }");}
    else if (bmi < 25.0) {
        kategorie = "Normální hodnota";
    ui->lineEditBMI->setStyleSheet("QLineEdit { background-color: #00F538; }");}
    else if (bmi < 30.0) {
        kategorie = "Nadváha";
    ui->lineEditBMI->setStyleSheet("QLineEdit { background-color: #D40000; }");}
    else {
        kategorie = "Obezita";
    ui->lineEditBMI->setStyleSheet("QLineEdit { background-color: #6B6B6B; }");}



    ui->lineEditBMI->setText(
        "BMI: " + QString::number(bmi, 'f', 1) + " | " + kategorie
        );
}
