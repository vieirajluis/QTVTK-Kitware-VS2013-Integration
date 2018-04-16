#ifndef QVTKTEST_H
#define QVTKTEST_H

#include <QtWidgets/QMainWindow>
#include <QString>
#include "ui_qvtktest.h"

class QVtkTest : public QMainWindow, public Ui::QVtkTestClass
{
	Q_OBJECT

public:
	QVtkTest();
	~QVtkTest();

	double *test;
	int as;
	QString stds;

//private:
	//Ui::QVtkTestClass ui;
};

#endif // QVTKTEST_H
