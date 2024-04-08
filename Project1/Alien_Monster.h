#pragma once
#include "Unit.h"
class Alien_Monster :  public Unit
{

public:
	Alien_Monster();
	Alien_Monster(int id, double tj, int h, int p, int ac);
	virtual void Attack();
};

