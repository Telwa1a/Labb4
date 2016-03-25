#pragma once
#include <windows.h>   /* required before including mmsystem.h */
#include <mmsystem.h>  /* multimedia functions (such as MIDI) for Windows */
#include <iostream>
#include <chrono>
#include <thread>

class Synthesizer
{
	public:
		Synthesizer(int intrument = 0);
		void spela(int hojd, int lengd, int volym);

	private:
		int Synthesizer::hojdtomidi(int hojd);
		HMIDIOUT device;
};




