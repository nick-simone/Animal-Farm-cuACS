#include "viewclients.h"
#include "ui_viewclients.h"

ViewClients::ViewClients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewClients)
{
    ui->setupUi(this);
    this->setWindowTitle("View Clients");

    ui->nameLineEdit_2->setReadOnly(true);
    ui->ageLineEdit_2->setReadOnly(true);
    ui->sexLineEdit_2->setReadOnly(true);
    ui->childrenLineEdit->setReadOnly(true);
    ui->salaryLineEdit->setReadOnly(true);
    ui->allergyLineEdit->setReadOnly(true);
    ui->purposeLineEdit->setReadOnly(true);
    ui->homeLineEdit->setReadOnly(true);
    ui->travelLineEdit->setReadOnly(true);
    ui->freeTimeLineEdit->setReadOnly(true);
    ui->budgetLineEdit->setReadOnly(true);
    ui->irritationLineEdit->setReadOnly(true);
    ui->patienceLineEdit->setReadOnly(true);
    ui->attachmentLineEdit_2->setReadOnly(true);
    ui->neuteredLineEdit->setReadOnly(true);

    capi = new CuacsAPI();

    vector<Human*> humansVec = capi->getHumans(); //THIS LINE CRASHES

    if (humansVec.size() != 0) {
        //Make QList from vector
        myList.reserve(humansVec.size());
        std::copy(humansVec.begin(), humansVec.end(), std::back_inserter(myList));

        for (int i = 0; i < humansVec.size(); i++)
            ui->viewClientsListWidget->addItem(QString::fromStdString(myList.at(i)->getName()) + " (ID: " + QString::number(myList.at(i)->getId()) + ")");
    }

}

ViewClients::~ViewClients()
{
    delete capi;
    delete ui;
}


void ViewClients::on_viewClientsListWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    string selectedString = current->text().toStdString();

    stringstream ss;
    ss << selectedString;

    string temp;
    int id = -1;
    while (!ss.eof()) {
        ss >> temp;
        stringstream(temp) >> id;
    }

    string stringId = to_string(id);


    string name, gender, purpose, homeType, travel, allergies, salary, freeTime;
    int age, attachment, patience, noiseTolerance, numChildren;
    bool needFertile;
    float budget;


    for (int i = 0; i < myList.size(); i++){
        if (to_string(myList.at(i)->getId()).find(stringId) != string::npos) {
            name = myList.at(i)->getName();
            gender = myList.at(i)->getGender();
            purpose = myList.at(i)->getPurpose();
            homeType = myList.at(i)->getHomeType();
            travel = myList.at(i)->getTravel();
            allergies = myList.at(i)->getAllergies();
            salary = myList.at(i)->getSalary();
            freeTime = myList.at(i)->getFreeTime();

            age = myList.at(i)->getAge();
            attachment = myList.at(i)->getAttachment();
            patience = myList.at(i)->getPatience();
            noiseTolerance = myList.at(i)->getNoiseTolerance();
            numChildren = myList.at(i)->getNumChildren();

            needFertile = myList.at(i)->getNeedFertile();
            budget = myList.at(i)->getBudget();

            i = myList.size();
        }
    }

    string title = name;
    ui->titleLabel->setText(QString::fromStdString(title));

    ui->nameLineEdit_2->setText(QString::fromStdString(name));
    ui->ageLineEdit_2->setText(QString::fromStdString(name));
    ui->sexLineEdit_2->setText(QString::fromStdString(gender));
    ui->childrenLineEdit->setText(QString::number(numChildren));
    ui->salaryLineEdit->setText(QString::fromStdString(salary));
    ui->allergyLineEdit->setText(QString::fromStdString(allergies));
    ui->purposeLineEdit->setText(QString::fromStdString(purpose));
    ui->homeLineEdit->setText(QString::fromStdString(homeType));
    ui->travelLineEdit->setText(QString::fromStdString(travel));
    ui->freeTimeLineEdit->setText(QString::fromStdString(freeTime));
    ui->budgetLineEdit->setText(QString::number(budget));
    ui->irritationLineEdit->setText(QString::number(noiseTolerance));
    ui->patienceLineEdit->setText(QString::number(patience));
    ui->attachmentLineEdit_2->setText(QString::number(attachment));
    if (needFertile)
        ui->neuteredLineEdit->setText("Yes");
    else
        ui->neuteredLineEdit->setText("No");
}
