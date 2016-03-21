#ifndef KOMPOSITOR_V2_H
#define KOMPOSITOR_V2_H

#include <QtWidgets/QMainWindow>
#include "ui_kompositor_v2.h"

class kompositor_v2 : public QMainWindow
{
	Q_OBJECT

public:
	kompositor_v2(QWidget *parent = 0);
	~kompositor_v2();

private:
	Ui::kompositor_v2Class ui;
};

#endif // KOMPOSITOR_V2_H
