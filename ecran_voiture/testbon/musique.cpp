#include "musique.h"
#include "ui_musique.h"

musique::musique(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::musique)
{
    ui->setupUi(this);
}

musique::~musique()
{
    delete ui;
}
