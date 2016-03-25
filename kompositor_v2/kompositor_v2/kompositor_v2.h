//#pragma once
#ifndef KOMPOSITOR_V2_H
#define KOMPOSITOR_V2_H

#include <QtWidgets/QMainWindow>
#include <QtGui>
#include <QTimer>
#include <vector>

#include "ui_kompositor_v2.h"
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

		void mousePressEvent(QMouseEvent *e);
		void paintEvent(QPaintEvent * e);

		int pixelToHojd(int ypixel);
		//int pixelToLängd(int xpixel);
		void ritaOm();
		//void fjardedelsnotKlickad();

		//QTimer * timer;

	private:

		Ui::kompositor_v2Class ui;
		Synthesizer synth;
		Notblad notblad;
		int notTypVal = -1; //INGA NOTKNAPPAR HAR TRYCKTS IN
		bool willDraw = false;

	private slots:
		void fjardedelsnotKlickad();
		//void update();
		//void push();
};

#endif // KOMPOSITOR_V2_H
