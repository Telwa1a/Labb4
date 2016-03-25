#pragma once
#ifndef NOTBLAD_H
#define NOTBLAD_H

#include <vector>
#include "Not.h"
/**
* A class representing a point in a three-dimensional plane.
*
* This class represents a point in a three-dimensional plane with an x-axes,
* y-axes and z-axes.
*/

using namespace std;

class Notblad
{

	public:

		Notblad();
	
	
		vector<Not*> hamtaNoter();
		void adderaNot(int typ, int _hojd);

	private:

		vector<Not*> _notVector;

};

#endif // NOTBLAD_H


