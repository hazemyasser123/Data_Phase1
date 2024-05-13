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
	//int NumberUnitsToBeAttacked;
	//bool dont_Comma = true;
	//Unit* UnitToBeAttacked = nullptr;
	//Unit* UnitToBeAttacked2 = nullptr; // This is made for the case of attacking two drones
	//cout << "EG " << GetID() << " shot [";
	//if (GetAttackCap() % 2 == 0)
	//{
	//	NumberUnitsToBeAttacked = GetAttackCap() / 2;
	//	for (int i = 0; i < NumberUnitsToBeAttacked; i++)
	//	{
	//		UnitToBeAttacked = GetGamePtr()->GetAlienArmy()->PickAM();
	//		if (UnitToBeAttacked != nullptr)
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
	//				Temp_List.enqueue(UnitToBeAttacked);
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
	//			}
	//		}
	//	}
	//	for (int i = 0; i < NumberUnitsToBeAttacked; i++)
	//	{
	//		GetGamePtr()->GetAlienArmy()->pickDrones(UnitToBeAttacked, UnitToBeAttacked2);
	//		if (UnitToBeAttacked != nullptr)
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
	//				Temp_List.enqueue(UnitToBeAttacked);
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
	//			}
	//		}
	//		if (UnitToBeAttacked2 != nullptr)
	//		{
	//			if (!dont_Comma)
	//			{
	//				cout << ", ";
	//			}
	//			dont_Comma = false;
	//			cout << UnitToBeAttacked2->GetID();
	//			UnitToBeAttacked2->SetHealth(UnitToBeAttacked2->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked2->GetHealth()) ^ (1 / 2))));
	//			UnitToBeAttacked2->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
	//			if (UnitToBeAttacked2->IsAlive() == true)
	//			{
	//				Temp_List.enqueue(UnitToBeAttacked2);
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked2);
	//			}
	//		}
	//	}
	//}
	//else
	//{
	//	NumberUnitsToBeAttacked = GetAttackCap() / 2;
	//	for (int i = 0; i < NumberUnitsToBeAttacked + 1; i++)
	//	{
	//		UnitToBeAttacked = GetGamePtr()->GetAlienArmy()->PickAM();
	//		if (UnitToBeAttacked != nullptr)
	//		{
	//			if (dont_Comma)
	//			{
	//				cout << ", ";
	//			}
	//			dont_Comma = false;
	//			cout << UnitToBeAttacked->GetID();
	//			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
	//			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
	//			if (UnitToBeAttacked->IsAlive() == true)
	//			{
	//				Temp_List.enqueue(UnitToBeAttacked);
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
	//			}
	//		}
	//	}
	//	for (int i = 0; i < NumberUnitsToBeAttacked; i++)
	//	{
	//		GetGamePtr()->GetAlienArmy()->pickDrones(UnitToBeAttacked, UnitToBeAttacked2);
	//		if (UnitToBeAttacked != nullptr)
	//		{
	//			if (dont_Comma)
	//			{
	//				cout << ", ";
	//			}
	//			dont_Comma = false;
	//			cout << UnitToBeAttacked->GetID();
	//			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
	//			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
	//			if (UnitToBeAttacked->IsAlive() == true)
	//			{
	//				Temp_List.enqueue(UnitToBeAttacked);
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked);
	//			}
	//		}
	//		if (UnitToBeAttacked2 != nullptr)
	//		{
	//			if (dont_Comma)
	//			{
	//				cout << ", ";
	//			}
	//			dont_Comma = false;
	//			cout << UnitToBeAttacked2->GetID();
	//			UnitToBeAttacked2->SetHealth(UnitToBeAttacked2->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked2->GetHealth()) ^ (1 / 2))));
	//			UnitToBeAttacked2->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
	//			if (UnitToBeAttacked2->IsAlive() == true)
	//			{
	//				Temp_List.enqueue(UnitToBeAttacked2);
	//			}
	//			else
	//			{
	//				GetGamePtr()->InsertInKilled_List(UnitToBeAttacked2);
	//			}
	//		}
	//	}
	//}
	//cout << "]" << endl;

	int NumberUnitsToBeAttacked;
	Unit* UnitToBeAttacked;
	Unit* UnitToBeAttacked2; // This is made for the case of attacking two drones 
	NumberUnitsToBeAttacked = GetAttackCap();
	UnitQueue IDSNeeded;
	cout << "EG " << GetID() << " shot ";
	while (NumberUnitsToBeAttacked > GetAttackCap() / 2)
	{
		UnitToBeAttacked = GetGamePtr()->GetAlienArmy()->PickAM();
		if (UnitToBeAttacked != nullptr)
		{
<<<<<<< HEAD
			IDSNeeded.enqueue(UnitToBeAttacked);
=======
			if (!dont_Comma)
			{
				cout << ", ";
			}
			dont_Comma = false;
			cout << UnitToBeAttacked->GetID();
>>>>>>> 03547b1e026548fa59506d148de9857b80581f14
			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
			NumberUnitsToBeAttacked--;
			if (UnitToBeAttacked->IsAlive() == true)
			{
				Temp_List.enqueue(UnitToBeAttacked);
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
		GetGamePtr()->GetAlienArmy()->pickDrones(UnitToBeAttacked, UnitToBeAttacked2);
		if (UnitToBeAttacked == nullptr && UnitToBeAttacked2 == nullptr)
		{
			break;
		}
		if (UnitToBeAttacked != nullptr)
		{
<<<<<<< HEAD
			IDSNeeded.enqueue(UnitToBeAttacked);
=======
			if (!dont_Comma)
			{
				cout << ", ";
			}
			dont_Comma = false;
			cout << UnitToBeAttacked->GetID();
>>>>>>> 03547b1e026548fa59506d148de9857b80581f14
			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
			NumberUnitsToBeAttacked--;
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
<<<<<<< HEAD
			IDSNeeded.enqueue(UnitToBeAttacked);
=======
			if (!dont_Comma)
			{
				cout << ", ";
			}
			dont_Comma = false;
			cout << UnitToBeAttacked2->GetID();
>>>>>>> 03547b1e026548fa59506d148de9857b80581f14
			UnitToBeAttacked2->SetHealth(UnitToBeAttacked2->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked2->GetHealth()) ^ (1 / 2))));
			UnitToBeAttacked2->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
			NumberUnitsToBeAttacked--;
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
	while (NumberUnitsToBeAttacked > 0)
	{
		UnitToBeAttacked = GetGamePtr()->GetAlienArmy()->PickAM();
		if (UnitToBeAttacked != nullptr)
		{
<<<<<<< HEAD
			IDSNeeded.enqueue(UnitToBeAttacked);
=======
			if (!dont_Comma)
			{
				cout << ", ";
			}
			dont_Comma = false;
			cout << UnitToBeAttacked->GetID();
>>>>>>> 03547b1e026548fa59506d148de9857b80581f14
			UnitToBeAttacked->SetHealth(UnitToBeAttacked->GetHealth() - ((GetPower() * GetHealth() / 100) / ((UnitToBeAttacked->GetHealth()) ^ (1 / 2))));
			UnitToBeAttacked->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
			NumberUnitsToBeAttacked--;
			if (UnitToBeAttacked->IsAlive() == true)
			{
				Temp_List.enqueue(UnitToBeAttacked);
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