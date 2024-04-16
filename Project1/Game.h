#pragma once
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
	double CurrentTime;
public:
	Game();
	~Game();
	void ReadParameters();
	double getCurrentTime();
	alienArmy* GetAlienArmy();
	earthArmy* GetEarthArmy();
	void print();
	void Test();
};

