/********************************************************************************
** Form generated from reading UI file 'addclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENT_H
#define UI_ADDCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClient
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *budgetLabel;
    QLineEdit *budgetLineEdit;
    QLabel *freeTimeLabel;
    QComboBox *freeTimeComboBox;
    QLabel *allergicLabel;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *isAllergicRadioButtonYES;
    QRadioButton *isAllergicRadioButtonNO;
    QLabel *sizeLabel_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *isNeuteredRadioButtonYES;
    QRadioButton *isNeuteredRadioButtonNO;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QLabel *sexLabel;
    QComboBox *sexComboBox;
    QLabel *ageLabel;
    QLineEdit *ageLineEdit;
    QLabel *childrenLabel;
    QLineEdit *childrenLineEdit;
    QLabel *salaryLabel;
    QComboBox *salaryComboBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *purposeLabel;
    QComboBox *purposeComboBox;
    QLabel *attachmentLabel;
    QHBoxLayout *horizontalLayout_4;
    QSlider *attachmentSlider;
    QLineEdit *attachmentLineEdit;
    QLabel *labelPatience;
    QHBoxLayout *horizontalLayout_6;
    QSlider *patienceSlider;
    QLineEdit *obedienceLineEdit;
    QLabel *homeTypeLabel;
    QComboBox *homeTypeComboBox;
    QLabel *travelLabel;
    QComboBox *travelComboBox;
    QLabel *irritationLabel;
    QHBoxLayout *horizontalLayout_7;
    QSlider *patienceSlider_2;
    QLineEdit *obedienceLineEdit_2;

    void setupUi(QDialog *AddClient)
    {
        if (AddClient->objectName().isEmpty())
            AddClient->setObjectName(QStringLiteral("AddClient"));
        AddClient->resize(791, 487);
        QPalette palette;
        QBrush brush(QColor(200, 16, 46, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(238, 238, 238, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(190, 190, 190, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        AddClient->setPalette(palette);
        buttonBox = new QDialogButtonBox(AddClient);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(390, 440, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget_4 = new QWidget(AddClient);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setEnabled(true);
        layoutWidget_4->setGeometry(QRect(520, 30, 241, 321));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        budgetLabel = new QLabel(layoutWidget_4);
        budgetLabel->setObjectName(QStringLiteral("budgetLabel"));
        budgetLabel->setEnabled(true);

        verticalLayout_5->addWidget(budgetLabel);

        budgetLineEdit = new QLineEdit(layoutWidget_4);
        budgetLineEdit->setObjectName(QStringLiteral("budgetLineEdit"));
        budgetLineEdit->setEnabled(true);

        verticalLayout_5->addWidget(budgetLineEdit);

        freeTimeLabel = new QLabel(layoutWidget_4);
        freeTimeLabel->setObjectName(QStringLiteral("freeTimeLabel"));
        freeTimeLabel->setEnabled(true);

        verticalLayout_5->addWidget(freeTimeLabel);

        freeTimeComboBox = new QComboBox(layoutWidget_4);
        freeTimeComboBox->setObjectName(QStringLiteral("freeTimeComboBox"));
        freeTimeComboBox->setEnabled(true);

        verticalLayout_5->addWidget(freeTimeComboBox);

        allergicLabel = new QLabel(layoutWidget_4);
        allergicLabel->setObjectName(QStringLiteral("allergicLabel"));
        allergicLabel->setEnabled(true);

        verticalLayout_5->addWidget(allergicLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        isAllergicRadioButtonYES = new QRadioButton(layoutWidget_4);
        isAllergicRadioButtonYES->setObjectName(QStringLiteral("isAllergicRadioButtonYES"));

        horizontalLayout_2->addWidget(isAllergicRadioButtonYES);

        isAllergicRadioButtonNO = new QRadioButton(layoutWidget_4);
        isAllergicRadioButtonNO->setObjectName(QStringLiteral("isAllergicRadioButtonNO"));

        horizontalLayout_2->addWidget(isAllergicRadioButtonNO);


        verticalLayout_5->addLayout(horizontalLayout_2);

        sizeLabel_2 = new QLabel(layoutWidget_4);
        sizeLabel_2->setObjectName(QStringLiteral("sizeLabel_2"));
        sizeLabel_2->setEnabled(true);

        verticalLayout_5->addWidget(sizeLabel_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        isNeuteredRadioButtonYES = new QRadioButton(layoutWidget_4);
        isNeuteredRadioButtonYES->setObjectName(QStringLiteral("isNeuteredRadioButtonYES"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonYES);

        isNeuteredRadioButtonNO = new QRadioButton(layoutWidget_4);
        isNeuteredRadioButtonNO->setObjectName(QStringLiteral("isNeuteredRadioButtonNO"));

        horizontalLayout_3->addWidget(isNeuteredRadioButtonNO);


        verticalLayout_5->addLayout(horizontalLayout_3);

        layoutWidget = new QWidget(AddClient);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(10, 30, 211, 320));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setEnabled(true);

        verticalLayout_2->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(nameLineEdit);

        typeLabel = new QLabel(layoutWidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));
        typeLabel->setEnabled(true);

        verticalLayout_2->addWidget(typeLabel);

        typeComboBox = new QComboBox(layoutWidget);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        typeComboBox->setEnabled(true);

        verticalLayout_2->addWidget(typeComboBox);

        sexLabel = new QLabel(layoutWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));
        sexLabel->setEnabled(true);

        verticalLayout_2->addWidget(sexLabel);

        sexComboBox = new QComboBox(layoutWidget);
        sexComboBox->setObjectName(QStringLiteral("sexComboBox"));
        sexComboBox->setEnabled(true);

        verticalLayout_2->addWidget(sexComboBox);

        ageLabel = new QLabel(layoutWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));
        ageLabel->setEnabled(true);

        verticalLayout_2->addWidget(ageLabel);

        ageLineEdit = new QLineEdit(layoutWidget);
        ageLineEdit->setObjectName(QStringLiteral("ageLineEdit"));
        ageLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(ageLineEdit);

        childrenLabel = new QLabel(layoutWidget);
        childrenLabel->setObjectName(QStringLiteral("childrenLabel"));
        childrenLabel->setEnabled(true);

        verticalLayout_2->addWidget(childrenLabel);

        childrenLineEdit = new QLineEdit(layoutWidget);
        childrenLineEdit->setObjectName(QStringLiteral("childrenLineEdit"));
        childrenLineEdit->setEnabled(true);

        verticalLayout_2->addWidget(childrenLineEdit);

        salaryLabel = new QLabel(layoutWidget);
        salaryLabel->setObjectName(QStringLiteral("salaryLabel"));
        salaryLabel->setEnabled(true);

        verticalLayout_2->addWidget(salaryLabel);

        salaryComboBox = new QComboBox(layoutWidget);
        salaryComboBox->setObjectName(QStringLiteral("salaryComboBox"));
        salaryComboBox->setEnabled(true);

        verticalLayout_2->addWidget(salaryComboBox);

        layoutWidget_2 = new QWidget(AddClient);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setEnabled(true);
        layoutWidget_2->setGeometry(QRect(240, 30, 254, 402));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        purposeLabel = new QLabel(layoutWidget_2);
        purposeLabel->setObjectName(QStringLiteral("purposeLabel"));
        purposeLabel->setEnabled(true);

        verticalLayout_3->addWidget(purposeLabel);

        purposeComboBox = new QComboBox(layoutWidget_2);
        purposeComboBox->setObjectName(QStringLiteral("purposeComboBox"));
        purposeComboBox->setEnabled(true);

        verticalLayout_3->addWidget(purposeComboBox);

        attachmentLabel = new QLabel(layoutWidget_2);
        attachmentLabel->setObjectName(QStringLiteral("attachmentLabel"));
        attachmentLabel->setEnabled(true);

        verticalLayout_3->addWidget(attachmentLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        attachmentSlider = new QSlider(layoutWidget_2);
        attachmentSlider->setObjectName(QStringLiteral("attachmentSlider"));
        attachmentSlider->setMaximum(10);
        attachmentSlider->setPageStep(2);
        attachmentSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(attachmentSlider);

        attachmentLineEdit = new QLineEdit(layoutWidget_2);
        attachmentLineEdit->setObjectName(QStringLiteral("attachmentLineEdit"));
        attachmentLineEdit->setEnabled(false);
        attachmentLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(attachmentLineEdit);

        horizontalLayout_4->setStretch(0, 10);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_4);

        labelPatience = new QLabel(layoutWidget_2);
        labelPatience->setObjectName(QStringLiteral("labelPatience"));
        labelPatience->setEnabled(true);

        verticalLayout_3->addWidget(labelPatience);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        patienceSlider = new QSlider(layoutWidget_2);
        patienceSlider->setObjectName(QStringLiteral("patienceSlider"));
        patienceSlider->setMaximum(10);
        patienceSlider->setPageStep(2);
        patienceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(patienceSlider);

        obedienceLineEdit = new QLineEdit(layoutWidget_2);
        obedienceLineEdit->setObjectName(QStringLiteral("obedienceLineEdit"));
        obedienceLineEdit->setEnabled(false);
        obedienceLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(obedienceLineEdit);

        horizontalLayout_6->setStretch(0, 10);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_6);

        homeTypeLabel = new QLabel(layoutWidget_2);
        homeTypeLabel->setObjectName(QStringLiteral("homeTypeLabel"));
        homeTypeLabel->setEnabled(true);

        verticalLayout_3->addWidget(homeTypeLabel);

        homeTypeComboBox = new QComboBox(layoutWidget_2);
        homeTypeComboBox->setObjectName(QStringLiteral("homeTypeComboBox"));
        homeTypeComboBox->setEnabled(true);

        verticalLayout_3->addWidget(homeTypeComboBox);

        travelLabel = new QLabel(layoutWidget_2);
        travelLabel->setObjectName(QStringLiteral("travelLabel"));
        travelLabel->setEnabled(true);

        verticalLayout_3->addWidget(travelLabel);

        travelComboBox = new QComboBox(layoutWidget_2);
        travelComboBox->setObjectName(QStringLiteral("travelComboBox"));
        travelComboBox->setEnabled(true);

        verticalLayout_3->addWidget(travelComboBox);

        irritationLabel = new QLabel(layoutWidget_2);
        irritationLabel->setObjectName(QStringLiteral("irritationLabel"));
        irritationLabel->setEnabled(true);

        verticalLayout_3->addWidget(irritationLabel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        patienceSlider_2 = new QSlider(layoutWidget_2);
        patienceSlider_2->setObjectName(QStringLiteral("patienceSlider_2"));
        patienceSlider_2->setMaximum(10);
        patienceSlider_2->setPageStep(2);
        patienceSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(patienceSlider_2);

        obedienceLineEdit_2 = new QLineEdit(layoutWidget_2);
        obedienceLineEdit_2->setObjectName(QStringLiteral("obedienceLineEdit_2"));
        obedienceLineEdit_2->setEnabled(false);
        obedienceLineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(obedienceLineEdit_2);

        horizontalLayout_7->setStretch(0, 10);
        horizontalLayout_7->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_7);


        retranslateUi(AddClient);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddClient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddClient);
    } // setupUi

    void retranslateUi(QDialog *AddClient)
    {
        AddClient->setWindowTitle(QApplication::translate("AddClient", "Dialog", Q_NULLPTR));
        budgetLabel->setText(QApplication::translate("AddClient", "Budget", Q_NULLPTR));
        freeTimeLabel->setText(QApplication::translate("AddClient", "Free Time per Day (hours)", Q_NULLPTR));
        freeTimeComboBox->clear();
        freeTimeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "0 - 1", Q_NULLPTR)
         << QApplication::translate("AddClient", "1 - 2", Q_NULLPTR)
         << QApplication::translate("AddClient", "3 - 4", Q_NULLPTR)
         << QApplication::translate("AddClient", "5+", Q_NULLPTR)
        );
        allergicLabel->setText(QApplication::translate("AddClient", "Allergic", Q_NULLPTR));
        isAllergicRadioButtonYES->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        isAllergicRadioButtonNO->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        sizeLabel_2->setText(QApplication::translate("AddClient", "<html><head/><body><p>Requires Animal to be Neutered/Spayed</p></body></html>", Q_NULLPTR));
        isNeuteredRadioButtonYES->setText(QApplication::translate("AddClient", "Yes", Q_NULLPTR));
        isNeuteredRadioButtonNO->setText(QApplication::translate("AddClient", "No", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("AddClient", "Name", Q_NULLPTR));
        typeLabel->setText(QApplication::translate("AddClient", "Type", Q_NULLPTR));
        typeComboBox->clear();
        typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "Cat", Q_NULLPTR)
         << QApplication::translate("AddClient", "Dog", Q_NULLPTR)
         << QApplication::translate("AddClient", "Hamster", Q_NULLPTR)
         << QApplication::translate("AddClient", "Fish", Q_NULLPTR)
         << QApplication::translate("AddClient", "Snake", Q_NULLPTR)
        );
        sexLabel->setText(QApplication::translate("AddClient", "Sex", Q_NULLPTR));
        sexComboBox->clear();
        sexComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "Male", Q_NULLPTR)
         << QApplication::translate("AddClient", "Female", Q_NULLPTR)
        );
        ageLabel->setText(QApplication::translate("AddClient", "Age", Q_NULLPTR));
        childrenLabel->setText(QApplication::translate("AddClient", "Number of Children", Q_NULLPTR));
        salaryLabel->setText(QApplication::translate("AddClient", "<html><head/><body><p>Salary (thousands/year)</p></body></html>", Q_NULLPTR));
        salaryComboBox->clear();
        salaryComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "0 - 30", Q_NULLPTR)
         << QApplication::translate("AddClient", "30 - 50", Q_NULLPTR)
         << QApplication::translate("AddClient", "50 - 70", Q_NULLPTR)
         << QApplication::translate("AddClient", "70 - 90", Q_NULLPTR)
         << QApplication::translate("AddClient", "90 - 110", Q_NULLPTR)
         << QApplication::translate("AddClient", "110 - 130", Q_NULLPTR)
         << QApplication::translate("AddClient", "130+", Q_NULLPTR)
        );
        purposeLabel->setText(QApplication::translate("AddClient", "Purpose", Q_NULLPTR));
        purposeComboBox->clear();
        purposeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "Guard", Q_NULLPTR)
         << QApplication::translate("AddClient", "Companion", Q_NULLPTR)
         << QApplication::translate("AddClient", "Hunting", Q_NULLPTR)
         << QApplication::translate("AddClient", "Gift", Q_NULLPTR)
         << QApplication::translate("AddClient", "Breeding", Q_NULLPTR)
         << QApplication::translate("AddClient", "Disability", Q_NULLPTR)
        );
        attachmentLabel->setText(QApplication::translate("AddClient", "Attachment Level (Out of 10)", Q_NULLPTR));
        labelPatience->setText(QApplication::translate("AddClient", "Patience (Out of 10)", Q_NULLPTR));
        homeTypeLabel->setText(QApplication::translate("AddClient", "Home Type", Q_NULLPTR));
        homeTypeComboBox->clear();
        homeTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "Condo", Q_NULLPTR)
         << QApplication::translate("AddClient", "Apartment", Q_NULLPTR)
         << QApplication::translate("AddClient", "Small House", Q_NULLPTR)
         << QApplication::translate("AddClient", "Medium House", Q_NULLPTR)
         << QApplication::translate("AddClient", "Large House", Q_NULLPTR)
         << QApplication::translate("AddClient", "Mansion", Q_NULLPTR)
        );
        travelLabel->setText(QApplication::translate("AddClient", "<html><head/><body><p>Amount of Travel Each Year</p></body></html>", Q_NULLPTR));
        travelComboBox->clear();
        travelComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddClient", "Please Select", Q_NULLPTR)
         << QApplication::translate("AddClient", "No Travel", Q_NULLPTR)
         << QApplication::translate("AddClient", "1 - 2 Weeks", Q_NULLPTR)
         << QApplication::translate("AddClient", "3 - 4 Weeks", Q_NULLPTR)
         << QApplication::translate("AddClient", "2 - 3 Months", Q_NULLPTR)
         << QApplication::translate("AddClient", "4 - 6 months", Q_NULLPTR)
         << QApplication::translate("AddClient", "Constant Travel", Q_NULLPTR)
        );
        irritationLabel->setText(QApplication::translate("AddClient", "<html><head/><body><p>Irritation to Noise (Out of 10)</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddClient: public Ui_AddClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENT_H
