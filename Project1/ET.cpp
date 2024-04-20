#include "ET.h"

ET::ET() : Unit()
{

}

ET::ET(int id, int tj, int h, int p, int ac, Game* Gp) : Unit(id, tj, h, p, ac, Gp)
{
	SetType("ET");
}

void ET::Attack()
{}