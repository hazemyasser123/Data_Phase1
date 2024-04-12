#include "earthArmy.h"

void earthArmy::Attack()
{
	// TODO in phase 2
}

void earthArmy::Print()
{
	cout << "============== Earth Army Alive Units ==============" << endl;
	cout << ES_List.getcount() << " ES "; ES_List.PrintQueue();            // eg: 55 ES [1, 2, 3, 4, ...]
	cout << ET_List.gettop() << " ET "; ET_List.PrintStack();
	cout << EG_List.getcount() << " EG "; EG_List.PrintPriQueue();
}

bool earthArmy::addUnit(Unit* armyunit)  // add unit to appropiate list 
{
	if (armyunit->GetType() == "ES")
	{
		ES_List.enqueue((ES*)armyunit);
		return true;
	}
	else if (armyunit->GetType() == "ET")
	{
		ET_List.push((ET*)armyunit);
		return true;
	}
	else if (armyunit->GetType() == "Earth_Gunnery")
	{
		EG_List.enqueue((Earth_Gunnery*)armyunit, armyunit->GetHealth()+armyunit->GetPower()); //priority formula can be changed if needed later
		return true;
	}
	else return false;
}
