#include "earthArmy.h"


void earthArmy::Attack(UnitQueue& Temp_List)
{
	// READ THE COMMENT IN ** ALIENARMY.CPP ** LINE 8
}

void earthArmy::Print()
{
	cout << "============== Earth Army Alive Units ==============" << endl;
	cout << ES_List.getcount() << " ES "; ES_List.PrintQueue();            // eg: 55 ES [1, 2, 3, 4, ...]
	cout << ET_List.gettop() + 1 << " ET "; ET_List.PrintStack();
	cout << EG_List.getcount() << " EG "; EG_List.PrintPriQueue();
}

bool earthArmy::pick(Unit*& take, string x)
{
	if (x == "ET")
	{
		bool truth = ET_List.pop(take);
		if (truth)
			return true;
	}
	else
	{
		if (x == "ES")
		{
			if (ES_List.dequeue(take) == true)
				return true;
		}
		else
		{
			int y;
			if (EG_List.dequeue(take,y) == true)
				return true;
		}
	}
	return false;
}

bool earthArmy::addUnit(Unit* armyunit)  // add unit to appropiate list 
{
	if (armyunit == nullptr)
		return false;
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

int earthArmy::GetESCount()
{
	return ES_List.getcount();
}
