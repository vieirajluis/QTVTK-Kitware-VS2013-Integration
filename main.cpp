
#include "QVTKApplication.h"

#include "qvtktest.h"
//#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QVTKApplication a(argc, argv);
	QVtkTest w;
	w.show();
	return a.exec();
}
