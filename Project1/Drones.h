#pragma once

#include "DEQueue.h"
#include "Unit.h"
class Drone : public Unit
{
public:
	Drone();

	Drone(int id, double tj, int h, int p, int ac);

<<<<<<< HEAD
	void Attack();
=======
	attack();
>>>>>>> f78a463a7ed9c704d7002260332083c025743a3b
};

