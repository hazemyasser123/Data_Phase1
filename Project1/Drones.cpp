#include "Drones.h"

Drone::Drone():Unit()
{

}

Drone::Drone(int id, double tj, int h, int p, int ac) : Unit(id, tj, h, p, ac)
{
	Type = "Drone";
}

void Drone::Attack()
{}