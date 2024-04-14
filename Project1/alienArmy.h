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
#include <iostream>
using namespace std;

class alienArmy
{
private:
	UnitQueue AS_List;
	UnitAOP AM_List;
	DEQueue<Drone*> AD_List;

public:
	void Attack();
	void Print();
	bool addUnit(Unit* armyunit);
};

