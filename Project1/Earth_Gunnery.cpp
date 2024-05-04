#include "Earth_Gunnery.h"
#include "Game.h"

Earth_Gunnery::Earth_Gunnery() :Unit()
{
	SetType("Earth_Gunnery");
}

Earth_Gunnery::Earth_Gunnery(int id, int tj, int h, int p, int ac, Game* Gp) :Unit(id, tj, h, p, ac, Gp)
{
	SetType("Earth_Gunnery");
}


void Earth_Gunnery::Attack(UnitQueue& Temp_List)
{
	int NumberUnitsToBeAttacked;
	Unit* UnitToBeAttacked;
	Unit* UnitToBeAttacked2; // This is made for the case of attacking two drones 
	if (GetAttackCap() % 2 == 0)
	{
		NumberUnitsToBeAttacked = GetAttackCap() / 2;
		for (int i = 0; i < NumberUnitsToBeAttacked; i++)
		{
			UnitToBeAttacked = GetGamePtr()->GetAlienArmy()->PickAM();
			if (UnitToBeAttacked != nullptr)
			{
				UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
				UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
				if (UnitToBeAttacked->IsAlive() == true)
				{
					Temp_List.enqueue(UnitToBeAttacked);
				}
				else
				{
					GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
				}
			}
		}
		for (int i = 0; i < NumberUnitsToBeAttacked; i++)
		{
			GetGamePtr()->GetAlienArmy()->pickDrones(UnitToBeAttacked, UnitToBeAttacked2);
			if (UnitToBeAttacked != nullptr)
			{
				UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
				UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
				if (UnitToBeAttacked->IsAlive() == true)
				{
					Temp_List.enqueue(UnitToBeAttacked);
				}
				else
				{
					GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
				}
			}
			if (UnitToBeAttacked2 != nullptr)
			{
				UnitToBeAttacked2->SetHealth(UnitToBeAttacked2->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked2->GetHealth()) ^ (1 / 2))));
				UnitToBeAttacked2->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
				if (UnitToBeAttacked2->IsAlive() == true)
				{
					Temp_List.enqueue(UnitToBeAttacked2);
				}
				else
				{
					GetGamePtr()->InsertInKilled_List(UnitToBeAttacked2);
				}
			}
		}
	}
	else
	{
		NumberUnitsToBeAttacked = GetAttackCap() / 2;
		for (int i = 0; i < NumberUnitsToBeAttacked + 1; i++)
		{
			UnitToBeAttacked = GetGamePtr()->GetAlienArmy()->PickAM();
			if (UnitToBeAttacked != nullptr)
			{
				UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
				UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
				if (UnitToBeAttacked->IsAlive() == true)
				{
					Temp_List.enqueue(UnitToBeAttacked);
				}
				else
				{
					GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
				}
			}
		}
		for (int i = 0; i < NumberUnitsToBeAttacked; i++)
		{
			GetGamePtr()->GetAlienArmy()->pickDrones(UnitToBeAttacked, UnitToBeAttacked2);
			if (UnitToBeAttacked != nullptr)
			{
				UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
				UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
				if (UnitToBeAttacked->IsAlive() == true)
				{
					Temp_List.enqueue(UnitToBeAttacked);
				}
				else
				{
					GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
				}
			}
			if (UnitToBeAttacked2 != nullptr)
			{
				UnitToBeAttacked2->SetHealth(UnitToBeAttacked2->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked2->GetHealth()) ^ (1 / 2))));
				UnitToBeAttacked2->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
				if (UnitToBeAttacked2->IsAlive() == true)
				{
					Temp_List.enqueue(UnitToBeAttacked2);
				}
				else
				{
					GetGamePtr()->InsertInKilled_List(UnitToBeAttacked2);
				}
			}
		}
	}
}