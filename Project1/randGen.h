//#pragma once
//#include "Game.h"
//#include "Unit.h"
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function
#include <random>
//#include "UnitQueue.h"
#include "Game.h"
class Game;
//class UnitQueue;
using namespace std;

#ifndef RANDGEN
#define RANDGEN

class randGen
{
protected:
	Game* GamePtr;
	int Earth;
	int Aliens;
public:
	randGen(Game* Gp);
	void CreateUnits();
};

#endif
