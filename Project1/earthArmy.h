#pragma once
#include "LinkedQueue.h"
#include "ES.h"
#include "ArrayStack.h"
#include "ET.h"
#include "priQueue.h"
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
	bool addUnit(Unit* armyunit);
};

