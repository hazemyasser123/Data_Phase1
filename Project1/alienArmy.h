#pragma once
#include "LinkedQueue.h"
#include "AS.h"
#include "Array_Of_Pointers.h"
#include "Alien_Monster.h"
#include "DEQueue.h"
#include "Drones.h"

class alienArmy
{
private:
	LinkedQueue<AS*> AS_List;
	Array_Of_Pointers<Alien_Monster> AM_List;
	DEQueue<Drone*> AD_List;

public:
	void Attack();
	void Print();
	bool addUnit(Unit* armyunit);
};

