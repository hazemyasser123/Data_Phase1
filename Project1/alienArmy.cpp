#include <iostream>
#include "alienArmy.h"
#include "Array_Of_Pointers.h"
using namespace std;

ostream& operator << (ostream& out, const Alien_Monster& unit)
{
	unit.Print();
	return out;
}

void alienArmy::Attack()
{
	// TODO in phase 2
}

void alienArmy::Print()
{
	cout << "============== Alien Army Alive Units ==============" << endl;
	cout << AS_List.getcount() << " AS "; AS_List.PrintQueue();          // eg: 55 AS [2001, 2002, 2003, 2004, ...]
	cout << AM_List.GetCount() << " AM "; AM_List.PrintAll();
	cout << AD_List.getcount() << " AD "; AD_List.PrintQueue();
}

bool alienArmy::addUnit(Unit* armyunit)  // add unit to appropiate list
{
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


