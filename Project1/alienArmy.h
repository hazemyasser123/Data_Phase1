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
	int armyCount;
	/*int total_Td;
	int total_Ta;
	int total_Dd;
	int total_Df;    
	int total_Db;*/

public:
	void Attack(UnitQueue& Temp_List);
	void Print();
	Unit* PickAM();
	Unit* PickAS();
	void pickDrones(Unit*& frntDrone, Unit*& backDrone);
	bool addUnit(Unit* armyunit);
	int getarmyCount();
	double getAvgTj();
};

