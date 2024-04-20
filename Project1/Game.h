#pragma once
#ifndef GAME
#define GAME
#include "alienArmy.h"
#include "earthArmy.h"
#include "randGen.h"
class Game
{
private:
	randGen* g2;
	alienArmy AlienArmy;
	earthArmy EarthArmy;
	UnitQueue KilledList;
	int CurrentTime;
public:
	Game();
	~Game();
	void ReadParameters();
	int getCurrentTime();
	alienArmy* GetAlienArmy();
	earthArmy* GetEarthArmy();
	void print();
	void Test();
};

#endif