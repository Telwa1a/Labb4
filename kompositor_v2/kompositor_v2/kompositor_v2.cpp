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
	int hojd = pixelToH�jd(e->y());
}




int kompositor_v2::pixelToH�jd(int ypixel)
{
	float eniv� = 413;
	float step = 8;
	int h�jd = -1;
	for (int i = 0; i < 12; i++)
	{
		if (ypixel <= (eniv� + (2 - i)*step + step / 2) && ypixel >(eniv� + (2 - i)*step - step / 2))
			h�jd = i;
	}
	qDebug() << h�jd;
	return h�jd;
}


void kompositor_v2::ritaOm()//vad har denna f�r funktion? visas inte i n�got sekvensdiagram.
{

}

void kompositor_v2::paintEvent(QPaintEvent * e)
{
	for (int i = 0; i < notTypVal.size(); i++)
		notTypVal[i]->paint(this);

}
