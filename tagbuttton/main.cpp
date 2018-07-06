#include "widget.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


	//QFile styleFile(":/styles/styles/default.qss");

	QFile styleFile("styles/default.qss");

	styleFile.open(QFile::ReadOnly);
	// Apply the loaded stylesheet
	QString style(styleFile.readAll());
	a.setStyleSheet(style);


    Widget w;
    w.show();

    return a.exec();
}
