#include "EditProfile.h"
#include "ui_editprofile.h"

EditProfile::EditProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditProfile)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(871, 491));
    this->setWindowTitle("Edit Your Profile");
    int id = QFontDatabase::addApplicationFont ( ":/fonts/EgyptienneRoman.ttf" );
    QFont egyptienne(QFontDatabase::applicationFontFamilies(id).at(0), 11);
    this->setFont(egyptienne);

    QDoubleValidator* floatValidator = new QDoubleValidator(this);
    QIntValidator* ageRange = new QIntValidator(0, 999, this);
    QIntValidator* childrenRange = new QIntValidator(0, 99, this);
    floatValidator->setRange(0,99999,2);

    ui->ageLineEdit->setValidator(ageRange);
    ui->childrenLineEdit->setValidator(childrenRange);
    ui->budgetLineEdit->setValidator(floatValidator);

    capi = new CuacsAPI();
    updateOk();
}

EditProfile::~EditProfile()
{
    delete ui;
    delete capi;
}


void EditProfile::setData(int &labelText) {
    passedData = labelText;

    vector<Human*> humansVec = capi->getHumans();

    if (humansVec.size() != 0) {
        //Make QList from vector
        myList.reserve(humansVec.size());
        std::copy(humansVec.begin(), humansVec.end(), std::back_inserter(myList));
    }

    int id = passedData;

    for (int i = 0; i < myList.size(); i++){
        if (to_string(myList.at(i)->getId()).compare(to_string(id)) == 0) {

            string name =  myList.at(i)->getName();

            ui->titleLabel->setText(QString::fromStdString(name));
            ui->nameLineEdit->setText(QString::fromStdString(myList.at(i)->getName()));
            ui->emailLineEdit->setText(QString::fromStdString(myList.at(i)->getEmail()));
            ui->ageLineEdit->setText(QString::number(myList.at(i)->getAge()));
            ui->sexComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getGender()));
            ui->childrenLineEdit->setText(QString::number(myList.at(i)->getNumChildren()));
            ui->salaryComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getSalary()));
            ui->typePreferenceComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getTypePreference()));
            ui->purposeComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getPurpose()));
            ui->homeTypeComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getHomeType()));
            ui->travelComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getTravel()));
            ui->freeTimeComboBox->setCurrentText(QString::fromStdString(myList.at(i)->getFreeTime()));
            ui->budgetLineEdit->setText(QString::number(myList.at(i)->getBudget()));
            ui->irritationSlider->setValue(myList.at(i)->getNoiseTolerance());
            ui->irritationLineEdit->setText(QString::number(myList.at(i)->getNoiseTolerance()));
            ui->patienceLineEdit->setText(QString::number(myList.at(i)->getPatience()));
            ui->patienceSlider->setValue(myList.at(i)->getPatience());
            ui->attachmentLineEdit->setText(QString::number(myList.at(i)->getAttachment()));
            ui->attachmentSlider->setValue(myList.at(i)->getAttachment());
            ui->addressLineEdit->setText(QString::fromStdString(myList.at(i)->getAddress()));
            ui->phoneLineEdit->setText(QString::fromStdString(myList.at(i)->getPhoneNumber()));
            if (myList.at(i)->getNeedNeutered())
                ui->isNeuteredRadioButtonYES->setChecked(true);
            else
                ui->isNeuteredRadioButtonNO->setChecked(true);

            if (myList.at(i)->getAllergies().find("Cat")!=std::string::npos) ui->catAllergyCheckBox->setChecked(true);
            else ui->catAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Dog")!=std::string::npos) ui->dogAllergyCheckBox->setChecked(true);
            else ui->dogAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Bird")!=std::string::npos) ui->birdAllergyCheckBox->setChecked(true);
            else ui->birdAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Hamster")!=std::string::npos) ui->hamsterAllergyCheckBox->setChecked(true);
            else ui->hamsterAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Mouse")!=std::string::npos) ui->mouseAllergyCheckBox->setChecked(true);
            else ui->mouseAllergyCheckBox->setChecked(false);
            if (myList.at(i)->getAllergies().find("Guineapig")!=std::string::npos) ui->guineapigAllergyCheckBox->setChecked(true);
            else ui->guineapigAllergyCheckBox->setChecked(false);

            i=myList.size();
        }
    }
    //make a vector of currently existing usernames
    for (int i = 0; i < myList.size(); i++){
            if (myList.at(i)->getId() != passedData) {
                users.push_back(myList.at(i)->getName());
            }
    }
}


// Checks for all info to be filled to enable the "OK" button
void EditProfile::updateOk()
{
    // checks to see if username is taken
    bool userAvailable;

    std::vector<std::string>::iterator i;
    i = std::find(users.begin(), users.end(), ui->nameLineEdit->text().toStdString());

    if (i!=users.end()) userAvailable = false;
    else {
        userAvailable = true;
    }

    // checks to see if the form is completely filled
    if (userAvailable == false ||
            ui->nameLineEdit->text().isEmpty() ||
            ui->ageLineEdit->text().isEmpty() ||
            ui->sexComboBox->currentText() == "Please Select" ||
            ui->typePreferenceComboBox->currentText() == "Please Select" ||
            ui->purposeComboBox->currentText() == "Please Select" ||
            ui->attachmentLineEdit->text().isEmpty() ||
            ui->patienceLineEdit->text().isEmpty() ||
            ui->homeTypeComboBox->currentText() == "Please Select" ||
            ui->travelComboBox->currentText() == "Please Select" ||
            //ui->allergicComboBox->currentText() == "Please Select" ||
            ui->irritationLineEdit->text().isEmpty() ||
            (!ui->isNeuteredRadioButtonYES->isChecked() && !ui->isNeuteredRadioButtonNO->isChecked()) ||
            ui->childrenLineEdit->text().isEmpty() ||
            ui->salaryComboBox->currentText() == "Please Select" ||
            ui->budgetLineEdit->text().isEmpty() ||
            ui->freeTimeComboBox->currentText() == "Please Select" ||
            ui->emailLineEdit->text().isEmpty() ||
            ui->phoneLineEdit->text().isEmpty() ||
            ui->addressLineEdit->text().isEmpty())
                ui->buttonBox->button(QDialogButtonBox::Save)->setEnabled(false);
        else
            ui->buttonBox->button(QDialogButtonBox::Save)->setEnabled(true);
}

void EditProfile::on_buttonBox_accepted()
{
    string allergies = "";
    if (ui->catAllergyCheckBox->isChecked() == true)
        allergies+="Cat";
    if (ui->dogAllergyCheckBox->isChecked() == true)
        allergies+="Dog";
    if (ui->birdAllergyCheckBox->isChecked() == true)
        allergies+="Bird";
    if (ui->hamsterAllergyCheckBox->isChecked() == true)
        allergies+="Hamster";
    if (ui->mouseAllergyCheckBox->isChecked() == true)
        allergies+="Mouse";
    if (ui->guineapigAllergyCheckBox->isChecked() == true)
        allergies+="Guineapig";

    //get attributes from ui
    string name = ui->nameLineEdit->text().toStdString();
    int age = ui->ageLineEdit->text().toInt();
    string gender = ui->sexComboBox->currentText().toStdString();
    string typePreference = ui->typePreferenceComboBox->currentText().toStdString();
    string purpose = ui->purposeComboBox->currentText().toStdString();
    int attachment = ui->attachmentLineEdit->text().toInt();
    int patience = ui->patienceLineEdit->text().toInt();
    string homeType = ui->homeTypeComboBox->currentText().toStdString();
    string travel = ui->travelComboBox->currentText().toStdString();
    //string allergies = ui->allergicComboBox->currentText().toStdString();
    int noiseTolerance = ui->irritationLineEdit->text().toInt();
    bool needNeutered = ui->isNeuteredRadioButtonYES->isChecked();
    int numChildren = ui->childrenLineEdit->text().toInt();
    string salary = ui->salaryComboBox->currentText().toStdString();
    float budget = ui->budgetLineEdit->text().toFloat();
    string freeTime = ui->freeTimeComboBox->currentText().toStdString();
    string email = ui->emailLineEdit->text().toStdString();
    string phone = ui->phoneLineEdit->text().toStdString();
    string address = ui->addressLineEdit->text().toStdString();



    //now give attributes to Client class
    capi->editHuman(passedData, name, age, gender, typePreference, purpose, attachment, patience, homeType,
                   travel, allergies, noiseTolerance, needNeutered, numChildren,
                   salary, budget, freeTime, email, phone, address);


}

void EditProfile::on_patienceSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->patienceLineEdit->setText(s);
    updateOk();
}

void EditProfile::on_irritationSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->irritationLineEdit->setText(s);
    updateOk();
}

void EditProfile::on_attachmentSlider_valueChanged(int value)
{
    QString s = QString::number(value);
    ui->attachmentLineEdit->setText(s);
    updateOk();
}

void EditProfile::on_isNeuteredRadioButtonYES_toggled(bool checked)
{
    updateOk();
}

void EditProfile::on_isNeuteredRadioButtonNO_toggled(bool checked)
{
    updateOk();
}

void EditProfile::on_sexComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_salaryComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_typePreferenceComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_purposeComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_homeTypeComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_travelComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_freeTimeComboBox_currentIndexChanged(const QString &arg1)
{
    updateOk();
}


void EditProfile::on_emailLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_budgetLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_childrenLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_ageLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_nameLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_addressLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}

void EditProfile::on_phoneLineEdit_textChanged(const QString &arg1)
{
    updateOk();
}
