#pragma once
#include "LinkedQueue.h"
#include <iostream>
#include "Unit.h"
using namespace std;

class ET : public Unit
{
public:
	ET();

	ET(int id, double tj, int h, int p, int ac);
	void Attack();
};