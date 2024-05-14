#include "HU.h"
#include "Game.h"

HU::HU() : Unit()
{
	SetType("HU");
}

HU::HU(int id, int tj, int h, int p, int ac, Game* Gp) : Unit(id, tj, h, p, ac, Gp)
{
	SetType("HU");
}

void HU::Attack(UnitQueue& Temp_List)
{
	Unit* UnitToBeHealed;
	UnitQueue IDSNeeded;
	cout << "HU " << GetID() << " Healed ";
	for (int i = 0; i < GetAttackCap(); i++) //This for loop heals earth soldiers
	{
		if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeHealed, "UML_S") == true)
		{
			int timespentinUml = GetGamePtr()->getCurrentTime() - UnitToBeHealed->GetTm();
			if (timespentinUml >= 10) //if the soldier spent more than 10 time steps in the UML
			{
				// Kill the unit
				GetGamePtr()->InsertInKilled_List(UnitToBeHealed);
				
			}
			else //Heal the Unit
			{
				UnitToBeHealed->SetHealth((UnitToBeHealed->GetHealth()) + (GetPower() * GetHealth() / 100) / ((UnitToBeHealed->GetHealth()) ^ (1 / 2)));
				UnitToBeHealed->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
				int OriginalHP = UnitToBeHealed->GetOrignalHealth();
				IDSNeeded.enqueue(UnitToBeHealed);
				if (UnitToBeHealed->GetHealth() >= 0.2 * OriginalHP) // if HP is now greater than 20% of its original
				{
					//make it join battle (not sure how that is done)
					GetGamePtr()->GetEarthArmy()->addUnit(UnitToBeHealed);
				}
				else
				{
					Temp_List.enqueue(UnitToBeHealed);
				}
			}
		}
		else if (GetGamePtr()->GetEarthArmy()->pick(UnitToBeHealed, "UML_T") == true) //TANKS
		{
			int timespentinUml = GetGamePtr()->getCurrentTime() - UnitToBeHealed->GetTm();
			if (timespentinUml >= 10)
			{
				GetGamePtr()->InsertInKilled_List(UnitToBeHealed);
			}
			else //Heal the Unit
			{
				UnitToBeHealed->SetHealth((UnitToBeHealed->GetHealth()) + (GetPower() * GetHealth() / 100) / ((UnitToBeHealed->GetHealth()) ^ (1 / 2)));
				UnitToBeHealed->BeAttacked(GetPower(), GetGamePtr()->getCurrentTime());
				int OriginalHP = UnitToBeHealed->GetOrignalHealth();
				if (UnitToBeHealed->GetHealth() >= 0.2 * OriginalHP) // if HP is now greater than 20% of its original
				{
					GetGamePtr()->GetEarthArmy()->addUnit(UnitToBeHealed);
				}
				else
				{
					Temp_List.enqueue(UnitToBeHealed);
				}
			}
		}
	}
	//Return each soldier from temp list back to UML
	for (int i = 0; i < Temp_List.getcount(); i++)
	{
		Unit* TempUnit;
		Temp_List.dequeue(TempUnit);
		if (TempUnit->GetType() == "UML_S")
		{
			GetGamePtr()->GetEarthArmy()->AddToUML_Soldiers(TempUnit);
		}
		else
		{
			GetGamePtr()->GetEarthArmy()->AddToUML_Tanks(TempUnit);
		}
	}
	GetGamePtr()->InsertInKilled_List(this);
	IDSNeeded.PrintQueue();
	// 3amalt fel army attack pop 3ashan nb2a neshelo mel army keda enta bt7ot fel killed list sa7 bas mesh btshelo mel army
	// sincerly omar to haitham
}


