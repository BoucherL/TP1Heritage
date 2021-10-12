#pragma once

#include <QtWidgets/QMainWindow>
#include <conio.h>
#include "ui_HeritageTP1.h"
#include <iostream>
#include <QApplication>
#include <QTextEdit>
#include <QLabel>
using namespace std;

class HeritageTP1 : public QMainWindow
{
    Q_OBJECT

	int d;
	int n;
public:
    HeritageTP1(QWidget *parent = Q_NULLPTR);

private:
    Ui::HeritageTP1Class ui;
	

public slots:
	void onBoutonDclicked();
	void onBoutonScoreclicked();
	void onBoutonResetclicked();
};
