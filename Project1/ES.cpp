#include "ES.h"
#include "Game.h"

ES::ES() : Unit()
{
	SetType("ES");
}

ES::ES(int id, int tj, int h, int p, int ac, Game* Gp): Unit(id, tj, h, p, ac, Gp)
{
	SetType("ES");
}

void ES::Attack(UnitQueue& Temp_List)
{
	Unit* ToBeAttacked;
	for (int NumberAttacked = 0; NumberAttacked < GetAttackCap(); NumberAttacked++)
	{
		ToBeAttacked = GetGamePtr()->GetAlienArmy()->PickAS();
		if (ToBeAttacked != nullptr)
		{
			ToBeAttacked->SetHealth(ToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((ToBeAttacked->GetHealth()) ^ (1 / 2))));
			ToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
			
			if (ToBeAttacked->IsAlive() == true)
			{
				Temp_List.enqueue(ToBeAttacked);
			}
			else
			{
				GetGamePtr()->InsertInKilled_List(ToBeAttacked);
			}
		}
	}
}

