#include "kompositor_v2.h"
#include "Synthesizer.h"
#include <qdebug.h>

kompositor_v2::kompositor_v2(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	//DO WHATEVER
}

kompositor_v2::~kompositor_v2()
{
	
}

void kompositor_v2::mousePressEvent(QMouseEvent *e)
{
	if (e->MouseButtonRelease)
	{
		if (ui.sheet->isEnabled()) //FIXA TILL KORREKT FUNKTION - GOTTA READ SHIT UP ON LABELS
		{
			int hojd = pixelToH�jd(e->y());
			//TODO: L�GG TILL I NOTLISTA
			if (hojd = -1)
				return;

			//notblad.adderaNot(1, hojd);
		}

		if (ui.quarterNote->isEnabled()) //DITO
			fj�rdedelsnotKlickad();
	}
}

void kompositor_v2::fj�rdedelsnotKlickad()
{
	notTypVal = 0; //NOLL �R LIKA MED FJ�RDEDELSNOT F�R NU
}

void kompositor_v2::ritaOm()
{
}

void kompositor_v2::paintEvent(QPaintEvent * e)
{

}

void kompositor_v2::mousePressEvent(QMouseEvent *e)
{
	int hojd = pixelToH�jd(e->y());
}




kompositor_v2::pixelToH�jd(int ypixel)
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

/*int kompositor_v2::pixelToL�ngd(int xpixel)
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
}*/
