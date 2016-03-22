#include "Kompositor.h"
#include "Synthesizer.h"
#include <qdebug.h>

	/*Kompositor::Kompositor(QWidget *parent) : QMainWindow
	{
	
	}

	*/



void Kompositor::mousePressEvent(QMouseEvent *e)
{
	int hojd = pixelToHöjd(e->y());
}




int Kompositor::pixelToHöjd(int ypixel)
{
	float enivå = 413;
	float step = 8;
	int höjd = -1;
	for (int i = 0; i < 12; i++)
	{
		if (ypixel <= (enivå + (2 - i)*step + step / 2) && ypixel >(enivå + (2 - i)*step - step / 2))
			höjd = i;
	}
	qDebug() << höjd;
	return höjd;
}




	void ritaOm();
	void paintEvent();

