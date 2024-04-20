#include "Alien_Monster.h"

Alien_Monster::Alien_Monster() :Unit()
{
	SetType("Alien_Monster");
}

Alien_Monster::Alien_Monster(int id, int tj, int h, int p, int ac, Game* Gp):Unit(id,tj,h,p,ac, Gp)
{
	SetType("Alien_Monster");
}

void Alien_Monster::Attack()
{
	// TO DO: It's implementation will be done in phase 2
}
