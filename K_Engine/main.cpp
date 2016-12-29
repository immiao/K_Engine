#include "k_engine.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	K_Engine w;
	w.show();
	return a.exec();
}
