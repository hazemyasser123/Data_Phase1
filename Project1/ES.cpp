#include "ES.h"

ES::ES() : Unit()
{

}

ES::ES(int id, double tj, int h, int p, int ac): Unit(id, tj, h, p, ac)
{
	Type = "ES";
}

void ES::Attack()
{}