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
	//int NumberUnitsToBeAttacked;
	//bool dont_Comma = true;
	//Unit* UnitToBeAttacked = nullptr;
	//cout << "AM " << GetID() << " shot [";
	//if (GetAttackCap() % 2 == 0)
	//{
	//	NumberUnitsToBeAttacked = GetAttackCap() / 2;
	//	for (int i = 0; i < NumberUnitsToBeAttacked; i++)
	//	{
	//		//GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ES");
	//		if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ES") == true)
	//		{
	//			if (!dont_Comma)
	//			{
	//				cout << ", ";
	//			}
	//			dont_Comma = false;
	//			cout << UnitToBeAttacked->GetID();
	//			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
	//			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
	//			if (UnitToBeAttacked->IsAlive() == true)
	//			{
	//				if (UnitToBeAttacked->GetHealth() < 0.2 * UnitToBeAttacked->GetOrignalHealth()) //If the unit needs healing
	//				{
	//					UnitToBeAttacked->SetTm(GetGamePtr()->getCurrentTime());
	//					GetGamePtr()->GetEarthArmy()->AddToUML_Soldiers(UnitToBeAttacked);
	//				}
	//				else
	//				{
	//					Temp_List.enqueue(UnitToBeAttacked);
	//				}
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
	//			}
	//		}
	//	}
	//	for (int i = 0; i < NumberUnitsToBeAttacked; i++)
	//	{
	//		if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ET") == true)
	//		{
	//			if (!dont_Comma)
	//			{
	//				cout << ", ";
	//			}
	//			dont_Comma = false;
	//			cout << UnitToBeAttacked->GetID();
	//			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
	//			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
	//			if (UnitToBeAttacked->IsAlive() == true)
	//			{
	//				if (UnitToBeAttacked->GetHealth() < 0.2 * UnitToBeAttacked->GetOrignalHealth())
	//				{
	//					GetGamePtr()->GetEarthArmy()->AddToUML_Tanks(UnitToBeAttacked);
	//				}
	//				else {
	//					Temp_List.enqueue(UnitToBeAttacked);
	//				}
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
	//			}
	//		}
	//	}
	//}
	//else
	//{
	//	NumberUnitsToBeAttacked = GetAttackCap() / 2;
	//	for (int i = 0; i < NumberUnitsToBeAttacked + 1; i++)
	//	{
	//		if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ES") == true)
	//		{
	//			if (!dont_Comma)
	//			{
	//				cout << ", ";
	//			}
	//			dont_Comma = false;
	//			cout << UnitToBeAttacked->GetID();
	//			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
	//			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
	//			if (UnitToBeAttacked->IsAlive() == true)
	//			{

	//				if (UnitToBeAttacked->GetHealth() < 0.2 * UnitToBeAttacked->GetOrignalHealth()) //If the unit needs healing
	//				{
	//					UnitToBeAttacked->SetTm(GetGamePtr()->getCurrentTime());
	//					GetGamePtr()->GetEarthArmy()->AddToUML_Soldiers(UnitToBeAttacked);
	//				}
	//				else
	//				{
	//					Temp_List.enqueue(UnitToBeAttacked);
	//				}
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
	//			}
	//		}
	//	}
	//	for (int i = 0; i < NumberUnitsToBeAttacked; i++)
	//	{
	//		if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ET") == true)
	//		{
	//			if (!dont_Comma)
	//			{
	//				cout << ", ";
	//			}
	//			dont_Comma = false;
	//			cout << UnitToBeAttacked->GetID();
	//			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
	//			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
	//			if (UnitToBeAttacked->IsAlive() == true)
	//			{
	//				if (UnitToBeAttacked->GetHealth() < 0.2 * UnitToBeAttacked->GetOrignalHealth())
	//				{
	//					GetGamePtr()->GetEarthArmy()->AddToUML_Tanks(UnitToBeAttacked);
	//				}
	//				else {
	//					Temp_List.enqueue(UnitToBeAttacked);
	//				}
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
	//			}
	//		}
	//	}
	//}
	//cout << "]" << endl;

	int NumberUnitsToBeAttacked;
	Unit* UnitToBeAttacked;
	UnitQueue IDSNeeded;
	cout << "AM " << GetID() << " shot ";
	NumberUnitsToBeAttacked = GetAttackCap();
	while (NumberUnitsToBeAttacked > GetAttackCap() / 2)
	{
		if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ES") == true)
		{
			IDSNeeded.enqueue(UnitToBeAttacked);
			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
			NumberUnitsToBeAttacked--;
			if (UnitToBeAttacked->IsAlive() == true)
			{
				if (UnitToBeAttacked->GetHealth() < 0.2 * UnitToBeAttacked->GetOrignalHealth()) //If the unit needs healing
				{
					UnitToBeAttacked->SetTm(GetGamePtr()->getCurrentTime());
					GetGamePtr()->GetEarthArmy()->AddToUML_Soldiers(UnitToBeAttacked);
				}
				else
				{
					Temp_List.enqueue(UnitToBeAttacked);
				}
			}
			else
			{
				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
			}
		}
		else
		{
			break;
		}
	}
	while (NumberUnitsToBeAttacked > 0)
	{

		if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ET") == true)
		{
			IDSNeeded.enqueue(UnitToBeAttacked);
			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
			NumberUnitsToBeAttacked--;
			if (UnitToBeAttacked->IsAlive() == true)
			{
				if (UnitToBeAttacked->GetHealth() < 0.2 * UnitToBeAttacked->GetOrignalHealth())
				{
					GetGamePtr()->GetEarthArmy()->AddToUML_Tanks(UnitToBeAttacked);
				}
				else {
					Temp_List.enqueue(UnitToBeAttacked);
				}
			}
			else
			{
				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
			}
		}
		else
		{
			break;
		}
	}
	while (NumberUnitsToBeAttacked > 0)
	{
		if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeAttacked, "ES") == true)
		{
			IDSNeeded.enqueue(UnitToBeAttacked);
			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
			NumberUnitsToBeAttacked--;
			if (UnitToBeAttacked->IsAlive() == true)
			{
				if (UnitToBeAttacked->GetHealth() < 0.2 * UnitToBeAttacked->GetOrignalHealth()) //If the unit needs healing
				{
					UnitToBeAttacked->SetTm(GetGamePtr()->getCurrentTime());
					GetGamePtr()->GetEarthArmy()->AddToUML_Soldiers(UnitToBeAttacked);
				}
				else
				{
					Temp_List.enqueue(UnitToBeAttacked);
				}
			}
			else
			{
				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
			}
		}
		else
		{
			break;
		}
	}
	IDSNeeded.PrintQueue();
}






