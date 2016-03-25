#pragma once
#ifndef NOT_H
#define NOT_H

#include <QWidget.h>
#include "Synthesizer.h"

class Not
{

	public:

		Not();
		~Not();
		Not(int _hojd);
		Not(int _lengd, int _hojd);

		void skrivUt(int xPos, QWidget *qw);
		void skrivUtC(int xPos);
		void spelaUpp(Synthesizer *synthie);

	private:

		int _lengd;
		int _hojd;
		QPixmap _bildNot;

};

#endif // NOT_H