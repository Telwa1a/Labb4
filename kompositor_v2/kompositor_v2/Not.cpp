#include "Not.h"
#include <qpainter>

Not::Not()
{
	lengd = 1000;
	hojd = -1;
}

Not::Not(int _hojd)
{
	lengd = 1000;
	hojd = _hojd;
}

Not::Not(int _lengd, int _hojd)
{
	lengd = _lengd;
	hojd = _hojd;

	if (hojd > 0)
	{
		_bildNot.load("Resources/quater.png");
	}
	else
	{
		_bildNot.load("Resources/quaterc.png");
	}	
}

void Not::skrivUt(int xPos, QWidget *qw)
{
	QPainter qPainter(qw);
	qPainter.drawPixmap(xPos, 100, _bildNot);

}

//int Not::skrivUtC(int xPos){}
void Not::spelaUpp(Synthesizer)
{
}


//testtesttest
