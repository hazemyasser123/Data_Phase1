#include "Alien_Monster.h"
#include "Game.h"

Alien_Monster::Alien_Monster() :Unit()
{
	SetType("Alien_Monster");
}

Alien_Monster::Alien_Monster(int id, int tj, int h, int p, int ac, Game* Gp) :Unit(id, tj, h, p, ac, Gp)
{
	SetType("Alien_Monster");
}




void Alien_Monster::Attack(UnitQueue& Temp_List)
{
	int NumberUnitsToBeAttacked;
	Unit* UnitToBeAttacked;
	if (GetAttackCap() % 2 == 0)
	{
		NumberUnitsToBeAttacked = GetAttackCap() / 2;
		for (int i = 0; i < NumberUnitsToBeAttacked; i++)
		{
			//GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ES");
			if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ES") == true)
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

			if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ET") == true)
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
	}
	else
	{
		NumberUnitsToBeAttacked = GetAttackCap() / 2;
		for (int i = 0; i < NumberUnitsToBeAttacked + 1; i++)
		{

			if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ES") == true)
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
			if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ET") == true)
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
	}
}






