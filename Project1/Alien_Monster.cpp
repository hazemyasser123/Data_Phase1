#include "Alien_Monster.h"

Alien_Monster::Alien_Monster() :Unit(0,0,0,0,0)
{
	SetType("Alien_Monster");
}

Alien_Monster::Alien_Monster(int id, int tj, int h, int p, int ac):Unit(id,tj,h,p,ac)
{
	SetType("Alien_Monster");
}

void Alien_Monster::Attack()
{
	// TO DO: It's implementation will be done in phase 2
}
