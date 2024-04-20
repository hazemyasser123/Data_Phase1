#include "AS.h"

AS::AS() : Unit()
{

}

AS::AS(int id, int tj, int h, int p, int ac, Game* Gp) : Unit(id, tj, h, p, ac, Gp)
{
	SetType("AS");
}

void AS::Attack()
{}