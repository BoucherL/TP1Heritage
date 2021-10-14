#include "HeritageTP1Q2.h"
#include <time.h>

HeritageTP1Q2::HeritageTP1Q2(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	srand(time(NULL));
}

void HeritageTP1Q2::onJet() {

	d = (rand() % 6) + 1;
	n++;
}

//Afifche la valeur du de
void HeritageTP1Q2::onBoutonDclicked() {
	QString str = "";
	str = QString::number(d);
	ui.labelD->setText(str);
}
