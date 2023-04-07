#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "musique.h"


QWidget *mainwindow = new QWidget;
    QWidget *musique = new QWidget;
    QWidget *thirdPageWidget = new QWidget;

    QStackedWidget *stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(firstPageWidget);
    stackedWidget->addWidget(secondPageWidget);
    stackedWidget->addWidget(thirdPageWidget);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(stackedWidget);
    setLayout(layout);
