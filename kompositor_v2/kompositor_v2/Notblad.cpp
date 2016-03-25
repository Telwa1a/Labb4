#include "Notblad.h"

Notblad::Notblad()
{

}

vector<Not*> Notblad::hamtaNoter()
{

		return _notVector;
	
}

void Notblad::adderaNot(int typ, int _hojd)
{

	if (_notVector.size() < 30)
	{
		if (typ == 1)
			_notVector.push_back(new Not(_hojd));
	}


	

}
