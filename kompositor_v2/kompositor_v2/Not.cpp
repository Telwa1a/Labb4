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
		int vilkenHojd;

		switch (hojd)
		{
			case 0:
				vilkenHojd = 413;
				break;

			case 1:
				vilkenHojd = 421;
				break;

			case 2:
				vilkenHojd = 429;
				break;

			case 3:
				vilkenHojd = 437;
				break;

			case 4:
				vilkenHojd = 445;
				break;

			case 5:
				vilkenHojd = 453;
				break;

			case 6:
				vilkenHojd = 461;
				break;

			case 7:
				vilkenHojd = 469;
				break;

			case 8:
				vilkenHojd = 477;
				break;

			case 9:
				vilkenHojd = 485;
				break;

			case 10:
				vilkenHojd = 493;
				break;

			case 11:
				vilkenHojd = 501;
				break;

			default:
				break;//tkrjhlkterjhoitrjhtrjhjhrth
		}

		QPainter qPainter(qw);
		qPainter.drawPixmap(xPos, vilkenHojd, _bildNot);
}

//int Not::skrivUtC(int xPos){}
void Not::spelaUpp(Synthesizer)
{
}


//testtesttest
