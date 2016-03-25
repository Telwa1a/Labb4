#pragma once
#ifndef NOTBLAD_H
#define NOTBLAD_H

#include <vector>
#include "Not.h"

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


