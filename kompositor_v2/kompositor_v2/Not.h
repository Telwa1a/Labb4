#pragma once
#include "Synthesizer.h"
#include <qwidget.h>
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
	Not(int lengd, int hojd);
	void skrivUt(int xPos, QWidget *qw);
	int skrivUtC(int xPos);
	void spelaUpp(Synthesizer);

		
private:
	int lengd;
	int hojd;
	QPixmap _bildNot;


};
