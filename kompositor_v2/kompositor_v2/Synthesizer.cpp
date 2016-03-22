#pragma once
#include "Synthesizer.h"

Synthesizer::Synthesizer(int instrument)
{
	midiOutOpen(&device, -1, 0, 0, 0);
	// Set instrument to 0 = Acoustic Grand Piano
	midiOutShortMsg(device, DWORD(0x0C0 | 0 | (instrument << 8) | (0 << 16)));
}

void Synthesizer::spela(int höjd, int längd, int volym)
{
	midiOutShortMsg(device, DWORD(0x090 | 0 | (höjdtomidi(höjd) << 8) | (volym << 16)));
	std::chrono::milliseconds dur(längd);
	std::this_thread::sleep_for(dur);
	midiOutShortMsg(device, DWORD(0x090 | 0 | (höjdtomidi(höjd) << 8) | (0 << 16)));
}

int Synthesizer::höjdtomidi(int höjd)
{
	int midinr = 60;

	switch (höjd)
	{
		case 0: midinr = 60; break;
		case 1: midinr = 62; break;
		case 2: midinr = 64; break;
		case 3: midinr = 65; break;
		case 4: midinr = 67; break;
		case 5: midinr = 69; break;
		case 6: midinr = 71; break;
		case 7: midinr = 72; break;
		case 8: midinr = 74; break;
		case 9: midinr = 76; break;
		case 10: midinr = 77; break;
		case 11: midinr = 79; break;
		case 12: midinr = 81; break;
	};

	return midinr;
}