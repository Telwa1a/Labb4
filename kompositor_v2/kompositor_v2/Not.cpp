#include "Not.h"
#include <qpainter>


Not::Not(int längd, int höjd)
{
	this->längd = längd;
	this->höjd = höjd;

	if (höjd > 0)
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
void Not::spelaUpp(Synthesizer){}


//testtesttest
