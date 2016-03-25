#pragma once
#ifndef NOT_H
#define NOT_H

#include <QWidget.h>
#include "Synthesizer.h"

/**
* A class representing a point in a three-dimensional plane.
*
* This class represents a point in a three-dimensional plane with an x-axes,
* y-axes and z-axes.
*/
class Not
{

public:

	Not();
	Not(int _hojd);
	Not(int _lengd, int _hojd);//Behöver vi verkligen alla tre?


	void skrivUt(int xPos, QWidget *qw);
	void skrivUtC(int xPos);
	void spelaUpp(Synthesizer);

		
private:
	int _lengd;
	int _hojd;
	QPixmap _bildNot;


};

#endif // NOT_H