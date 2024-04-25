#pragma once
#include "alienArmy.h"
#include "earthArmy.h"
#include "randGen.h"
#ifndef GAME
#define GAME
class alienArmy;
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
	void InsertInKilled_List(Unit* ToBeInserted);
	void ReadParameters();
	int getCurrentTime();
	alienArmy* GetAlienArmy();
	earthArmy* GetEarthArmy();
	void print();
	void Test();
	void Attack();
};

#endif
