#pragma once
#include "LinkedQueue.h"
#include <iostream>
#include "Unit.h"
using namespace std;

class AS : public Unit
{
public:
	AS();

	AS(int id, double tj, int h, int p, int ac);
	
	void Attack();

};