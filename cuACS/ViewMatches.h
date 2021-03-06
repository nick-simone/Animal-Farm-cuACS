#ifndef VIEWMATCHES_H
#define VIEWMATCHES_H

#include <QDialog>
#include "GenerateMatches.h"
#include <tuple>
#include <iostream>
#include <QFontDatabase>

namespace Ui {
class ViewMatches;
}

class ViewMatches : public QDialog
{
    Q_OBJECT

public:
    explicit ViewMatches(QWidget *parent = nullptr);
    ~ViewMatches();

    void populateUI(vector <tuple <Human*, Animal*>>);
private slots:
    void on_viewMatchesListWidget_currentRowChanged(int currentRow);

private:
    Ui::ViewMatches *ui;
    GenerateMatches *gm;
    vector <tuple <Human*, Animal*, float>> scores;
    vector <tuple <Human*, Animal*>> matches;
    vector <string>* summary;
};

#endif // VIEWMATCHES_H
