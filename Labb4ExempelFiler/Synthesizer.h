#pragma once
#include <windows.h>   /* required before including mmsystem.h */
#include <mmsystem.h>  /* multimedia functions (such as MIDI) for Windows */
#include <iostream>
#include <chrono>
#include <thread>
class Synthesizer
{
public:
	Synthesizer(int intrument=0);
	void spela(int höjd, int längd,int volym);
private:
	int Synthesizer::höjdtomidi(int höjd);
private:
	HMIDIOUT device;

};

