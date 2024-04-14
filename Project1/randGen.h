#pragma once
#include "Game.h"
#include "Unit.h"
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function
#include <random>
#include "UnitQueue.h"
#include "Alien_Monster.h"
#include "Drone.h"
#include "Earth_Gunnery.h"
#include "ES.h"
#include "AS.h"
#include "ET.h"
using namespace std;

class randGen
{
protected:
	Game* GamePtr;
	UnitQueue EarthGenerated;   // These two Queues will be used in the game class to insert the generated units in eartharmy and alien army
 	UnitQueue AlienGenerated;  // (using the getters these two Queues are passed by refrence). so, in the game class you will dequeue to get the 
							  // units inside the queues DON'T ENQUEUE THE UNITS AFTER DEQUEUE we want the queues to be empty for the next 
							 // time step to be able to generate new units
							// IMPORTANT notic: the getters return refrence to the queues so any change you do to them in the game class will affect those
						   // in the randgen class (and that it is what we desire) 
						  // IMPORTANT FOR IMPLEMENTING: lets say the object from class randgen in game class is called "G2" 
						 // 
					    // if you want to dequeue from the EarthGenerated Queue you will write this: 
					   //   "G2.Get_EarthGenerated_Queue().dequeue(/*HERE YOU WILL PASS A VARIABLE*/)"
					  // 
					 // IN CASE YOU DIDN'T UNDERSTAND CONTACT ME
							  
public:
	randGen(Game* Gp);
	void GenerateUnits();
	UnitQueue& Get_EarthGenerated_Queue();
	UnitQueue& Get_AlienGenerated_Queue();

};

