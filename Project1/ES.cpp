#include "ES.h"

ES::ES() : Unit()
{

}

ES::ES(int id, int tj, int h, int p, int ac, Game* Gp): Unit(id, tj, h, p, ac, Gp)
{
	SetType("ES");
}

void ES::Attack(UnitQueue& Temp_List)
{

}

