#include "HeritageTP1.h"
#include <time.h>

HeritageTP1::HeritageTP1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	srand(time(NULL));
}

void HeritageTP1::onBoutonDclicked() 
{
	QLabel Label;
	d = (rand() % 6) + 1;
	n += d;
	QString str = "";
	str = QString::number(d);
	ui.labelD->setText(str);

}

void HeritageTP1::onBoutonScoreclicked() {

	QString str = "";
	str = QString::number(n);
	ui.labelScore->setText(str);
}
void HeritageTP1::onBoutonResetclicked() {
	n = 0;
	QString str = "";
	str = QString::number(n);
	ui.labelScore->setText(str);
}