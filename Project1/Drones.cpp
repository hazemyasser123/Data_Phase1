#include "Drones.h"

Drone::Drone():Unit()
{

}

Drone::Drone(int id, double tj, int h, int p, int ac) : Unit(id, "Drone", tj, h, p, ac)
{
	Type = "Drone";
}
