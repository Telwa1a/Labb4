#ifndef KOMPOSITOR_V2_H
#define KOMPOSITOR_V2_H

#include <QtWidgets/QMainWindow>
#include <QtGui>
#include "ui_kompositor_v2.h"
#include "Notblad.h"
#include "Synthesizer.h"

class kompositor_v2 : public QMainWindow
{
	Q_OBJECT

public:
	kompositor_v2(QWidget *parent = 0);
	~kompositor_v2();

	void mousePressEvent(QMouseEvent *e);




	int pixelToHöjd(int ypixel);


	void ritaOm();
	void fjärdedelsnotKlickad();
	void paintEvent();

private:
	Ui::kompositor_v2Class ui;
	int notTypVal;
};

#endif // KOMPOSITOR_V2_H
