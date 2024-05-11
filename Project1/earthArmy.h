#pragma once
#include "ES.h"
#include "ET.h"
#include "Earth_Gunnery.h"
#include "UnitAOP.h"
#include "UnitQueue.h"
#include "HU.h"
#include "UnitStack.h"
#include "UnitpriQueue.h"
class earthArmy
{
private:
	UnitQueue ES_List;
	UnitStack ET_List;
	UnitpriQueue EG_List;
	int armyCount;
	UnitStack HU_List;
	UnitpriQueue UML_Soldiers;
	UnitQueue UML_Tanks;
public:
	void Attack(UnitQueue& Temp_List);
	void Print();
	bool pick(Unit*& take, string x);
	bool addUnit(Unit* armyunit);
	int getarmyCount();
	void AddToUML_Soldiers(Unit* ArmyUnit);
	void AddToUML_Tanks(Unit* ArmyUnit);
	int GetESCount();
};

