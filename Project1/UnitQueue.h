#pragma once
#include "LinkedQueue.h"
#include "Unit.h"
class UnitQueue :  public LinkedQueue <Unit*>
{
public:
	void PrintQueue();
};

