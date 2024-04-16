#include "ES.h"

ES::ES() : Unit()
{

}

ES::ES(int id, int tj, int h, int p, int ac): Unit(id, tj, h, p, ac)
{
	SetType("ES");
}

void ES::Attack()
{}