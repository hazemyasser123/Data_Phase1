#include "Drone.h"

Drone::Drone():Unit()
{

}

Drone::Drone(int id, int tj, int h, int p, int ac, Game* Gp) : Unit(id, tj, h, p, ac, Gp)
{
	SetType("Drone");
}

void Drone::Attack(UnitQueue& Temp_List)
{
}