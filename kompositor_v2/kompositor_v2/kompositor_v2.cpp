#include "kompositor_v2.h"
//#include "Synthesizer.h"
#include <qdebug.h>

kompositor_v2::kompositor_v2(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);

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
	update();// är som repaint, fast bättre(jonny sa det) / kör paintEvent()

	//Not nyTestNot(500, 6); // Test not, för att se att det funkar att skriva ut 
	//nyTestNot.skrivUt(100, this); // Hårdkodat 100 som test värde

	if (e->MouseButtonRelease)
	{
		//update();

		willDraw = true;

		if (ui.sheet->isEnabled()) //FIXA TILL KORREKT FUNKTION - GOTTA READ SHIT UP ON LABELS
		{
			int hojd = pixelToHojd(e->y());
					//TODO: LÄGG TILL I NOTLISTA
					if (hojd = -1)
						return;

					//notblad.adderaNot(1, hojd);
		}

		if (ui.quarterNote->isEnabled()) //DITO
			fjardedelsnotKlickad();
	}
}

void kompositor_v2::fjardedelsnotKlickad()
{
	notTypVal = 0; //NOLL ÄR LIKA MED FJÄRDEDELSNOT FÖR NU
}

void kompositor_v2::ritaOm()
{
}

void kompositor_v2::paintEvent(QPaintEvent * e)
{
	Not nyTestNot(500, 6); // Test not, för att se att det funkar att skriva ut 
	//nyTestNot.skrivUt(100, this); // Hårdkodat 100 som test värde
	if (willDraw)
	{ 
		//Not nyTestNot(500, 6); // Test not, för att se att det funkar att skriva ut 
		nyTestNot.skrivUt(100, this); // Hårdkodat 100 som test värde
		//willDraw = false;
	}

	//vector<Not*> notVector = notblad.hämtaNoter();

	//for (int i = 0; i < notVector.size(); i++)
	//notVector[i]->skrivUt(100, this);

	
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

/*int kompositor_v2::pixelToLängd(int xpixel)


{
	float enivå = 413;
	float step = 8;
	int höjd = -1;
	for (int i = 0; i < 12; i++)
	{
		if (ypixel <= (enivå + (2 - i)*step + step / 2) && ypixel >(enivå + (2 - i)*step - step / 2))
		höjd = i;
	}
	qDebug() << höjd;
	return höjd;
}
	
}*/