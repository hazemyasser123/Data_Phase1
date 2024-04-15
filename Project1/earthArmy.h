#pragma once
#include "ES.h"
#include "ET.h"
#include "Earth_Gunnery.h"
#include "UnitAOP.h"
#include "UnitQueue.h"
#include "UnitStack.h"
#include "UnitpriQueue.h"
class earthArmy
{
private:
	UnitQueue ES_List;
	UnitStack ET_List;
	UnitpriQueue EG_List;

public:
	void Attack();
	void Print();
	bool pick(Unit*& take, string x);
	bool addUnit(Unit* armyunit);
	bool KillUnit(Unit* Killedunit);
};

