#pragma once
#include "LinkedQueue.h"
#include "ES.h"
#include "ArrayStack.h"
#include "ET.h"
#include "priQueue.h"
#include "Earth_Gunnery.h"

class earthArmy
{
private:
	LinkedQueue<ES*> ES_List;
	ArrayStack<ET*> ET_List;
	priQueue<Earth_Gunnery*> EG_List;

public:
	void Attack();
	void Print();
	bool addUnit(Unit* armyunit);
};

