#pragma once

#include "DEQueue.h"
#include "Unit.h"
class Drone : public Unit
{
public:
	Drone();

	Drone(int id, double tj, int h, int p, int ac);
};

