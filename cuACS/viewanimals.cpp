#include "viewanimals.h"
#include "ui_viewanimals.h"

using namespace std;

ViewAnimals::ViewAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewAnimals)
{

    ui->setupUi(this);
    this->setWindowTitle("View Animals");

    vector<Animal*> animalList = capi->getAnimals();

//    for (unsigned int i = 0; i < animalList.size(); i++)
//        cout << "asdsadsa";

//    QString someList[] = {"first", "second", "third", "fourth"};


//    for (int i = 0; i < sizeof(someList)/(int)sizeof(QString); i++){
//        ui->viewAnimalsListWidget->addItem(someList[i]);
//    }
}

ViewAnimals::~ViewAnimals()
{
    delete ui;
}


