#pragma once

#ifndef KOMPOSITOR_H
#define KOMPOSITOR_H

#include <QtWidgets/QMainWindow>
#include <QtGui>
#include "ui_kompositor_v2.h"
#include "Notblad.h"
#include <QtWidgets/QMainWindow>
#include <QtGui>
#include "ui_kompositor_v2.h"
#include "Notblad.h"
#include "Synthesizer.h"


	/**
	* A class representing a point in a three-dimensional plane.
	*
	* This class represents a point in a three-dimensional plane with an x-axes,
	* y-axes and z-axes.
	*/
class Kompositor : public QMainWindow
	{

	public:
	
		Kompositor(QWidget *parent = 0);
	

		int notTypVal;

		void mousePressEvent(QMouseEvent *e);




		int pixelToHöjd(int ypixel);






		void ritaOm();
		void fjärdedelsnotKlickad();
		void paintEvent();

	private:
		Ui::kompositor_v2Class ui;

	
		Notblad _notblad;
	
	};

#endif // KOMPOSITOR_H





