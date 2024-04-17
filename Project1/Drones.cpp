#include "Drone.h"

Drone::Drone():Unit()
{

}

Drone::Drone(int id, int tj, int h, int p, int ac) : Unit(id, tj, h, p, ac)
{
	SetType("Drone");
}

void Drone::Attack()
{}