#include "AS.h"

AS::AS() : Unit()
{

}

AS::AS(int id, double tj, int h, int p, int ac) : Unit(id, tj, h, p, ac)
{
	Type = "AS";
}

void AS::Attack()
{}