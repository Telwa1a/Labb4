#pragma once
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
	Not(int längd, int höjd);
	int skrivUt(int xPos);
	int skrivUtC(int xPos);
	void spelaUpp(Synthesizer);

		int längd;
		int höjd;
		//private:


};
