#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "musique.h"

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

void MainWindow::on_pushButton_3_clicked() //cette fonction s'active sur l'appui sur le bouton musique
{
    ui->musique->show();    //permet d'afficher l'ecran musqiue
    ui->GPS->hide();        //permet de cacher l'ecran GPS
    ui->telephone->hide();  //permet de cacher l'ecran telephone
}

void MainWindow::on_pushButton_clicked()
{
    ui->GPS->show();
    ui->musique->hide();
    ui->telephone->hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->telephone->show();
    ui->GPS->hide();
    ui->musique->hide();
}

void MainWindow::on_ble_bouton_clicked()
{
    ui->ble_frame->show();
    ui->radio_frame->hide();
}

void MainWindow::on_radio_bouton_clicked()
{
   ui->ble_frame->hide();
   ui->radio_frame->show();
}
