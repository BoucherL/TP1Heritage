#include "HeritageTP1Q2.h"
#include <iostream>
#include <QApplication>
#include <QTextEdit>
#include <QLabel>
#include <QtWidgets/QMainWindow>

#pragma once
class dehisto : public HeritageTP1Q2
{
		Q_OBJECT

	int tab[7];

public:
	dehisto();
		
	void onJet(); //simule le jet d’un dé
public slots:
	void onBoutonjet(int n);//simule le jet de n dé
};

