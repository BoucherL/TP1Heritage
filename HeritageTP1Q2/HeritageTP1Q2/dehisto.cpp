#include "dehisto.h"
#include <time.h>

 dehisto::dehisto() {
	// tableWidget = new QTableWidget(12, 3, this);
}

 void dehisto::onBoutonjet(int n)
 {
	 QString str = "";
	 str = QString::number(n);
	 ui.labelJet->setText(str);
 }


void dehisto::onJet() {

}