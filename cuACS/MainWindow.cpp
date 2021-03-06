﻿#include "MainWindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPalette>

//MainWindow class constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(429, 217));
    //QColor cuRED = QColor(200, 16, 46);
    QPixmap icon (":/icon/icon.png");
    this->setWindowIcon(icon);
    int id = QFontDatabase::addApplicationFont ( ":/fonts/EgyptienneRoman.ttf" );
    QFont egyptienne(QFontDatabase::applicationFontFamilies(id).at(0), 11);
    this->setFont(egyptienne);
}


//MainWindow class destructor
MainWindow::~MainWindow()
{
    delete ui;
}

//This function is called when the login button is clicked
void MainWindow::on_loginButton_clicked()
{
    capi = new CuacsAPI();

    vector<Human*> humansVec = capi->getHumans();

    if (humansVec.size() != 0) {
        //Make QList from vector
        myList.reserve(humansVec.size());
        std::copy(humansVec.begin(), humansVec.end(), std::back_inserter(myList));
    }

   QString username = ui->usernameLineEdit->text();

   bool loggedIn = false;
   for (int i = 0; i < myList.size(); i++){
           if (username.toStdString() == myList.at(i)->getName()) {
               loggedIn = true;
               hide();
               postLoginClient = new PostLoginClient(this);
               postLoginClient->setData(myList.at(i)->getId());
               postLoginClient->exec();
               i = myList.size();
           }
   }

   if (loggedIn == false) {
       if (username == "Staff") {
           hide();
           postLoginStaff = new PostLoginStaff(this);
           postLoginStaff->exec();
           loggedIn = true;
       }

//       else if (username == "Client") {
//          hide();
//          postLoginClient = new PostLoginClient(this);
//          postLoginClient->show();
//       }
       else QMessageBox::warning(this, "Invalid Login", "The provided username does not exist");
   }
   if (loggedIn)
       delete capi;
}
