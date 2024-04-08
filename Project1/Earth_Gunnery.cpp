#include "Earth_Gunnery.h"


Earth_Gunnery::Earth_Gunnery() :Unit(0, 0, 0, 0, 0)
{
	SetType("Earth_Gunnery");
}

Earth_Gunnery::Earth_Gunnery(int id, double tj, int h, int p, int ac) :Unit(id, tj, h, p, ac)
{
	SetType("Earth_Gunnery");
}

void Earth_Gunnery::Attack()
{
	// TO DO: It's implementation will be done in phase 2
}
