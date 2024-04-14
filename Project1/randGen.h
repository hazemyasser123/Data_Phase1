#pragma once
#include "Game.h"
#include "Unit.h"
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function
#include <random>
using namespace std;

class randGen
{
protected:
	Unit GeneratedUnits[2];
public:
	randGen(Game* Gameptr);
	
	Unit* GetGeneratedUnits();


};

