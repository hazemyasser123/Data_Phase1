#include "AS.h"

AS::AS() : Unit()
{

}

AS::AS(int id, int tj, int h, int p, int ac) : Unit(id, tj, h, p, ac)
{
	SetType("AS");
}

void AS::Attack()
{}