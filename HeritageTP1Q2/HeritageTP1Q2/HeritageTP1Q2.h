#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HeritageTP1Q2.h"
#include <iostream>
#include <QApplication>
#include <QTextEdit>
#include <QLabel>

class HeritageTP1Q2 : public QMainWindow
{
	Q_OBJECT

		
public:
    HeritageTP1Q2(QWidget *parent = Q_NULLPTR);
	int d;		//variable du dé
	int n=0;	//variable de n jet
	Ui::HeritageTP1Q2Class ui;
private:
    

public slots:
	void onBoutonDclicked();
	void onJet();
};
