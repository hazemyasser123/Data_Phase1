#pragma once
#include "Game.h"
#include "Unit.h"
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function
#include <random>
using namespace std;

class Unit_Generator
{
protected:
	Unit GeneratedUnits[2];
public:
	Unit_Generator(Game* Gameptr);
	
	Unit* GetGeneratedUnits();


};

