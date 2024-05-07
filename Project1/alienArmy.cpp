#include <iostream>
#include "alienArmy.h"
#include "Array_Of_Pointers.h"
using namespace std;

void alienArmy::Attack(UnitQueue& Temp_List)
{
	// This Temp_List should be sent as a parameter to the attack functions of each unit to be able to insert in it (See Line 14)
	// I made the random access function in the UnitAOP class to pick a random AM without deleting it 
	Unit* MonsterThatWillAttack;
	AM_List.AcceesRandomMonster(MonsterThatWillAttack); // picking a random monster
	if (MonsterThatWillAttack != nullptr)
	{
		MonsterThatWillAttack->Attack(Temp_List); // making that random monster attack
	}

	Unit* ASthatWillAttack;
	if (AS_List.peek(ASthatWillAttack))
	{
		ASthatWillAttack->Attack(Temp_List);
	}

	/*Unit* drone1;
	Unit* drone2;
	if(AD_List.peekboth(drone1, drone2))
	{
		drone1->Attack(Temp_List);
		drone2->Attack(Temp_List);
	}*/

	armyCount = AS_List.getcount() + AM_List.GetCount() + AD_List.getcount();
}

void alienArmy::Print()
{
	cout << "============== Alien Army Alive Units ==============" << endl;
	cout << AS_List.getcount() << " AS "; AS_List.PrintQueue();          // eg: 55 AS [2001, 2002, 2003, 2004, ...]
	cout << AM_List.GetCount() << " AM "; AM_List.PrintAll();
	cout << AD_List.getcount() << " AD "; AD_List.PrintQueue();
}

Unit* alienArmy::PickAM()
{
	Unit* Monster = nullptr;
	AM_List.Delete(Monster);
	return Monster;
}

Unit* alienArmy::PickAS()
{
	Unit* AlienSolider = nullptr;
	AS_List.dequeue(AlienSolider);
	return AlienSolider;
}

void alienArmy::pickDrones(Unit*& frntDrone, Unit*& backDrone)
{
	AD_List.dequeueboth(frntDrone, backDrone);
}

bool alienArmy::addUnit(Unit* armyunit)  // add unit to appropiate list
{
	if (armyunit == nullptr)
	{
		return false;
	}
	if (armyunit->GetType() == "AS")
	{
		AS_List.enqueue((AS*)armyunit);
		return true;
	}
	else if (armyunit->GetType() == "Alien_Monster")
	{
		AM_List.insert((Alien_Monster*)armyunit);
		return true;
	}
	else if (armyunit->GetType() == "Drone")
	{
		AD_List.enqueue((Drone*)armyunit);
		return true;
	}
	else return false;
}

int alienArmy::getarmyCount()
{
	return armyCount;
}

double alienArmy::getAvgTj()
{
	/*int total_Tj;
	Node<Unit*>* x = new Node<Unit*>();
	Unit* y;
	AS_List.peek(y);
	AS_List.frontptr
	
	return 0.0;*/
}


