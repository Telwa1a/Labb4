#include "Notblad.h"

Notblad::Notblad()
{

}

vector<Not*> Notblad::hamtaNoter()
{
	return notVector;
}

void Notblad::adderaNot(int typ, int _hojd)
{
	if (typ == 1)
	notVector.push_back(new Not(_hojd));
}
