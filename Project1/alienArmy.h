#pragma once
#include "LinkedQueue.h"
#include "AS.h"
#include "Array_Of_Pointers.h"
#include "Alien_Monster.h"
#include "DEQueue.h"
#include "Drone.h"
#include "UnitAOP.h"
#include "UnitQueue.h"
#include "UnitStack.h"
#include "UnitDEQueue.h"
#include <iostream>
using namespace std;

class alienArmy
{
private:
	UnitQueue AS_List;
	UnitAOP AM_List;
	UnitDEQueue AD_List;

public:
	void Attack();
	void Print();
	Unit* PickAM();
	Unit* PickAS();
	void pickDrones(Unit*& frntDrone, Unit*& backDrone);
	bool addUnit(Unit* armyunit);
};

