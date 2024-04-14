#include "Unit_Generator.h"

Unit_Generator::Unit_Generator(Game* GamePtr)
{
	
	srand(time(0));
	
	//For Earth Army
	for (int i = 0; i < GamePtr->getN(); i++)
	{
		int A = rand() % 100 + 1; //To get chance between 1 and 100
		if (A <= GamePtr->getProb())
		{
			int B = rand() % 100 + 1; //To determine which type of unit 
			//This section checks for value of B to determine its type.
			if (B <= GamePtr->getESper())
			{
				// Generate Earth Soldier
				
				//Generate its hp
				int SoldierHP = GamePtr->getHealthMinE() + rand() % (GamePtr->getHealthMaxE()- GamePtr->getHealthMinE()+1);
				//Generate its power
				int SoldierPower = GamePtr->getPowerMinE() + rand() % (GamePtr->getPowerMaxE() - GamePtr->getPowerMinE() + 1);
				//Generate its capcity
				int SoldierCapacity = GamePtr->getAttackCapMinE() + rand() % (GamePtr->getAttackCapMaxE() - GamePtr->getAttackCapMinE() + 1);
				//Generate its ID
				int ID = 1 + rand() % 999;
				GeneratedUnits[0] = Unit(ID, GamePtr->getCurrentTime(), SoldierHP, SoldierPower, SoldierCapacity);
				
				
			}
			else if (B <= (GamePtr->getETper() + GamePtr->getESper()))
			{
				// Generate Earth Tank
				
				//Generate its hp
				int TankHP = GamePtr->getHealthMinE() + rand() % (GamePtr->getHealthMaxE() - GamePtr->getHealthMinE() + 1);
				//Generate its power
				int TankPower = GamePtr->getPowerMinE() + rand() % (GamePtr->getPowerMaxE() - GamePtr->getPowerMinE() + 1);
				//Generate its capcity
				int TankCapacity = GamePtr->getAttackCapMinE() + rand() % (GamePtr->getAttackCapMaxE() - GamePtr->getAttackCapMinE() + 1);
				//Generate its ID
				int ID = 1 + rand() % 999;
				GeneratedUnits[0] = Unit(ID, GamePtr->getCurrentTime(), TankHP, TankPower, TankCapacity);

			}
			else
			{
				// Generate Earth Gunnery
				
				//Generate its hp
				int GunneryHP = GamePtr->getHealthMinE() + rand() % (GamePtr->getHealthMaxE() - GamePtr->getHealthMinE() + 1);
				//Generate its power
				int GunneryPower = GamePtr->getPowerMinE() + rand() % (GamePtr->getPowerMaxE() - GamePtr->getPowerMinE() + 1);
				//Generate its capcity
				int GunneryCapacity = GamePtr->getAttackCapMinE() + rand() % (GamePtr->getAttackCapMaxE() - GamePtr->getAttackCapMinE() + 1);
				//Generate its ID
				int ID = 1 + rand() % 999;
				GeneratedUnits[0] = Unit(ID, GamePtr->getCurrentTime(), GunneryHP, GunneryPower, GunneryCapacity);

			}
		}
		else
		{
			GeneratedUnits[0] = Unit(); //PLACEHOLDER until I know what to do
		}
	}
	//For Alien Army
	for (int i = 0; i < GamePtr->getN(); i++)
	{
		int A = rand() % 100 + 1; //To get chance between 1 and 100
		if (A <= GamePtr->getProb())
		{
			int B = rand() % 100 + 1; //To determine which type of unit 
			//This section checks for value of B to determine its type.
			if (B <= GamePtr->getASper())
			{
				// Generate Alien Soldier
				
				//Generate its hp
				int SoldierHP = GamePtr->getHealthMinA() + rand() % (GamePtr->getHealthMaxA() - GamePtr->getHealthMinA() + 1);
				//Generate its power
				int SoldierPower = GamePtr->getPowerMinA() + rand() % (GamePtr->getPowerMaxA() - GamePtr->getPowerMinA() + 1);
				//Generate its capcity
				int SoldierCapacity = GamePtr->getAttackCapMinA() + rand() % (GamePtr->getAttackCapMaxA() - GamePtr->getAttackCapMinA() + 1);
				//Generate its ID
				int ID = 2000 + rand() % 1000;
				GeneratedUnits[1] = Unit(ID, GamePtr->getCurrentTime(), SoldierHP, SoldierPower, SoldierCapacity);

			}
			else if (B <= (GamePtr->getAMper() + GamePtr->getASper()))
			{
				// Generate Alien Monster
			
				//Generate its hp
				int MonsterHP = GamePtr->getHealthMinA() + rand() % (GamePtr->getHealthMaxA() - GamePtr->getHealthMinA() + 1);
				//Generate its power
				int MonsterPower = GamePtr->getPowerMinA() + rand() % (GamePtr->getPowerMaxA() - GamePtr->getPowerMinA() + 1);
				//Generate its capcity
				int MonsterCapacity = GamePtr->getAttackCapMinA() + rand() % (GamePtr->getAttackCapMaxA() - GamePtr->getAttackCapMinA() + 1);
				//Generate its ID
				int ID = 1 + rand() % 999;
				GeneratedUnits[1] = Unit(ID, GamePtr->getCurrentTime(), MonsterHP, MonsterPower, MonsterCapacity);

			}
			else
			{
				// Generate Alien Drone

				//Generate its hp
				int DroneHP = GamePtr->getHealthMinA() + rand() % (GamePtr->getHealthMaxA() - GamePtr->getHealthMinA() + 1);
				//Generate its power
				int DronePower = GamePtr->getPowerMinA() + rand() % (GamePtr->getPowerMaxA() - GamePtr->getPowerMinA() + 1);
				//Generate its capcity
				int DroneCapacity = GamePtr->getAttackCapMinA() + rand() % (GamePtr->getAttackCapMaxA() - GamePtr->getAttackCapMinA() + 1);
				//Generate its ID
				int ID = 1 + rand() % 999;
				GeneratedUnits[1] = Unit(ID, GamePtr->getCurrentTime(), DroneHP, DronePower, DroneCapacity);	
			}
		}
		else
		{
			GeneratedUnits[1] = Unit(); //PLACEHOLDER until I know what to do
		}
	}
}

Unit* Unit_Generator::GetGeneratedUnits()
{
	return GeneratedUnits;
}
