#pragma once

#ifndef KOMPOSITOR_V2_H
#define KOMPOSITOR_V2_H

#include <QtWidgets/QMainWindow>
#include <QtGui>
#include "ui_kompositor_v2.h"
#include <QTimer>
#include <vector>

#include "Synthesizer.h"
#include "Notblad.h"
using namespace std;

class kompositor_v2 : public QMainWindow
{
	Q_OBJECT

	public:

		kompositor_v2(QWidget *parent = 0);
		//kompositor_v2(QWidget *parent);
		//kompositor_v2(QWidget *parent, int notTyp);
		~kompositor_v2();

		int notTypVal;
		
		void mousePressEvent(QMouseEvent* e);
		int pixelToHöjd(int ypixel);
		//int pixelToLängd(int xpixel);
		void ritaOm();
		void fjärdedelsnotKlickad();
		void paintEvent(QPaintEvent * e);

	private:

		Ui::kompositor_v2Class ui;
		Synthesizer synth;
		Notblad notblad;


#endif // KOMPOSITOR_V2_H
