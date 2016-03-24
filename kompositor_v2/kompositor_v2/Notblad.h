#pragma once
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

		//void adderaNot(int typ, int höjd);//Vi måste göra en klass som kan hantera de olika noterna??
		vector<Not*> hamtaNoter();
		void adderaNot(int typ, int _hojd);

	private:

		vector<Not*> notVector;

};



