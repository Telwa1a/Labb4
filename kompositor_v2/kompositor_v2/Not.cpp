#include "Not.h"
#include <QPainter>

Not::Not()
{
	_lengd = 500;
	_hojd = 0;

	if (_hojd > 0)
	{
		_bildNot.load("Resources/quater.png");
	}
	else
	{
		_bildNot.load("Resources/quaterc.png");
	}
}

Not::~Not()
{
}

Not::Not(int hojd)
{
	_lengd = 500;
	_hojd = hojd;

	if (_hojd > 0)
	{
		_bildNot.load("Resources/quater.png");
	}
	else
	{
		_bildNot.load("Resources/quaterc.png");
	}
}

Not::Not(int lengd, int hojd)
{
	_lengd = lengd;
	_hojd = hojd;

	if (_hojd > 0)
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

		switch (_hojd)
		{
			case 0:
				vilkenHojd = 375;//501;
				break;

			case 1:
				vilkenHojd = 365;
				break;

			case 2:
				vilkenHojd = 355;
				break;

			case 3:
				vilkenHojd = 345;
				break;

			case 4:
				vilkenHojd = 337;
				break;

			case 5:
				vilkenHojd = 330;
				break;

			case 6:
				vilkenHojd = 325;
				break;

			case 7:
				vilkenHojd = 315;
				break;

			case 8:
				vilkenHojd = 305;
				break;

			case 9:
				vilkenHojd = 298;
				break;

			case 10:
				vilkenHojd = 289;
				break;

			case 11:
				vilkenHojd = 283;
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
