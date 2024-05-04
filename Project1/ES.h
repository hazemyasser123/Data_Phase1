#pragma once
#include "LinkedQueue.h"
#include <iostream>
#include "Unit.h"
using namespace std;

class ES : public Unit
{
public:
	ES();

	ES(int id, int tj, int h, int p, int ac, Game* Gp);

	void Attack(UnitQueue& Temp_List);
};