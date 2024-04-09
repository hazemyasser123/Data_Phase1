#pragma once
#include "LinkedQueue.h"
#include <iostream>
#include "Unit.h"
using namespace std;

class AS : public Unit
{
public:
	AS() : Unit()
	{}

	AS(int id, double tj, int h, int p, int ac) : Unit(id, "AS", tj, h, p, ac)
	{
		Type = "AS";
	}
};