#include "kompositor_v2.h"
//#include "Synthesizer.h"
#include <qdebug.h>

kompositor_v2::kompositor_v2(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.quarterNote, SIGNAL(toggled(bool)), this, SLOT(fjardedelsnotKlickad()));
	//timer = new QTimer(this);
	//connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	//timer->start(10000);
	//connect(ui.playButton, SIGNAL(clicked()), this, SLOT(push()));
}

kompositor_v2::~kompositor_v2()
{
}

void kompositor_v2::mousePressEvent(QMouseEvent *e)
{
	if (e->MouseButtonRelease)
	{
		willDraw = true;

		if (notTypVal == 1)
		{
			int hojd = pixelToHojd(e->y());

			if (hojd == -1)
				return;

			notblad.adderaNot(notTypVal, hojd);
		}
	}

	update(); //k�r paintEvent()
}

void kompositor_v2::fjardedelsnotKlickad()
{
	//ui->textEdit->setText("THE LOST TREASURE IS FOUND");
	notTypVal = 1;
}

void kompositor_v2::ritaOm()
{
}

void kompositor_v2::paintEvent(QPaintEvent * e)
{
	//Not nyTestNot(500, 6); // Test not, f�r att se att det funkar att skriva ut 
	//nyTestNot.skrivUt(100, this); // H�rdkodat 100 som test v�rde
	//vector<Not*> notVector = notblad.hamtaNoter();

	if (willDraw)
	{ 
		//Not nyTestNot(500, 2); // Test not, f�r att se att det funkar att skriva ut 
		//nyTestNot.skrivUt(100, this); // H�rdkodat 100 som test v�rde
		vector<Not*> notVector = notblad.hamtaNoter();

		for (int i = 0; i < notVector.size(); i++)
			notVector[i]->skrivUt(175 + (25 *i), this);

		willDraw = false;
	}
}

int kompositor_v2::pixelToHojd(int ypixel)
{
	float eniva = 413;
	float step = 8;
	int hojd = -1;

	for (int i = 0; i < 12; i++)
	{
		if (ypixel <= (eniva + (2 - i)*step + step / 2) && ypixel >(eniva + (2 - i)*step - step / 2))
			hojd = i;
	}

	qDebug() << hojd;
	return hojd;
}

/*int kompositor_v2::pixelToL�ngd(int xpixel)


{
	float eniv� = 413;
	float step = 8;
	int h�jd = -1;
	for (int i = 0; i < 12; i++)
	{
		if (ypixel <= (eniv� + (2 - i)*step + step / 2) && ypixel >(eniv� + (2 - i)*step - step / 2))
		h�jd = i;
	}
	qDebug() << h�jd;
	return h�jd;
}
	
}*/