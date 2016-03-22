#include "kompositor_v2.h"
#include "Synthesizer.h"
#include <qdebug.h>

kompositor_v2::kompositor_v2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

kompositor_v2::~kompositor_v2()
{

}


void kompositor_v2::mousePressEvent(QMouseEvent *e)
{
	int hojd = pixelToHöjd(e->y());
}




int kompositor_v2::pixelToHöjd(int ypixel)
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




void kompositor_v2::ritaOm()
{

}
void kompositor_v2::paintEvent()
{

}
