#include "ET.h"

ET::ET() : Unit()
{

}

ET::ET(int id, int tj, int h, int p, int ac) : Unit(id, tj, h, p, ac)
{
	SetType("ET");
}

void ET::Attack()
{}