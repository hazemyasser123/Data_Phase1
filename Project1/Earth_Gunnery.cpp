#include "Earth_Gunnery.h"


Earth_Gunnery::Earth_Gunnery() :Unit()
{
	SetType("Earth_Gunnery");
}

Earth_Gunnery::Earth_Gunnery(int id, double tj, int h, int p, int ac, Game* Gp) :Unit(id, tj, h, p, ac, Gp)
{
	SetType("Earth_Gunnery");
}

void Earth_Gunnery::Attack()
{
	// TO DO: It's implementation will be done in phase 2
}
