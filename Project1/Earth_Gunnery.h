#pragma once
#include "Unit.h"

class Earth_Gunnery : public Unit  // IMPORTANT: It's DS is Priority Queue
{
	Earth_Gunnery();
	Earth_Gunnery(int id, double tj, int h, int p, int ac);
	virtual void Attack();
};

