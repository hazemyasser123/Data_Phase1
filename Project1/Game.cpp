#include "Game.h"
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function
#include <random>
using namespace std;

Game::Game()
{
	g2 = new randGen(this);
	ReadParameters();
	CurrentTime = 1;

}

void Game::ReadParameters()
{
	ifstream infile;
	string line;
	infile.open("Input.txt");
	if (infile.is_open() == true)
	{
		infile >> N;
		getline(infile, line);
		infile >> ESper >> ETper >> EGper;
		getline(infile, line);
		infile >> ASper >> AMper >> ADper;
		getline(infile, line);
		infile >> Prob;
		getline(infile, line);
		getline(infile, line);
		infile >> PowerMinE >> PowerMaxE >> HealthMinE >> HealthMaxE >> AttackCapMinE >> AttackCapMaxE;
		getline(infile, line);
		infile >> PowerMinA >> PowerMaxA >> HealthMinA >> HealthMaxA >> AttackCapMinA >> AttackCapMaxA;
	}
	infile.close();
	PowerMaxE = -PowerMaxE;
	HealthMaxE = -HealthMaxE;
	AttackCapMaxE = -AttackCapMaxE;
	PowerMaxA = -PowerMaxA;
	HealthMaxA = -HealthMaxA;
	AttackCapMaxA = -AttackCapMaxA;
}

void Game::print()
{

	g2->CreateUnits();
	cout << "Current Timestep " << CurrentTime << endl;
	EarthArmy.Print();
	cout << endl;
	AlienArmy.Print();
	cout << endl;

	cout << "============== Killed/Destructed Units ==============" << endl;
	cout<< KilledList.getcount() << " units ";
	KilledList.PrintQueue();
	cout << endl << endl;
	CurrentTime++;
}

void Game::Test()
{
	int A = rand() % 100 + 1;
	if (A <= 10)
	{
		Unit* EARTHSOILDER =nullptr;
		EarthArmy.pick(EARTHSOILDER,"ES");
		EarthArmy.addUnit(EARTHSOILDER);
	}
	else
		if (A <= 20)
		{
			Unit* TANK = nullptr;
			EarthArmy.pick(TANK, "ET");
			if (TANK != nullptr)
			{
				KilledList.enqueue(TANK);
			}
		}
		else if (A <= 30)
		{
			Unit* EG = nullptr;
			EarthArmy.pick(EG, "Earth_Gunnery");
			if (EG)
			{
				EG->SetHealth(EG->GetHealth() / 2);
				EarthArmy.addUnit(EG);
			}
		}
		else if(A <= 40)
		{
			LinkedQueue<Unit*> AlienSoliderlist;
			Unit* AlienSolider;
			for (int i = 0; i < 5; i++)
			{
				AlienSolider = AlienArmy.PickAS();
				if (AlienSolider)
				{
					AlienSoliderlist.enqueue(AlienSolider);
					AlienSolider->SetHealth(AlienSolider->GetHealth() / 2);
				}
			}
			for (int i = 0; i < 5; i++)
			{
				AlienSoliderlist.dequeue(AlienSolider);
				AlienArmy.addUnit(AlienSolider);
			}
		}
		else if (A <= 50)
		{
			Unit* Monster1;
			Unit* Monster2;
			Unit* Monster3;
			Unit* Monster4;
			Unit* Monster5;
			Monster1 = AlienArmy.PickAM();
			Monster2 = AlienArmy.PickAM();
			Monster3 = AlienArmy.PickAM();
			Monster4 = AlienArmy.PickAM();
			Monster5 = AlienArmy.PickAM();
			AlienArmy.addUnit(Monster1);
			AlienArmy.addUnit(Monster2);
			AlienArmy.addUnit(Monster3);
			AlienArmy.addUnit(Monster4);
			AlienArmy.addUnit(Monster5);
		}
		else if (A <= 60)
		{
			Unit* Drone1 = nullptr;
			Unit* Drone2 = nullptr;
			Unit* Drone3 = nullptr;
			Unit* Drone4 = nullptr;
			Unit* Drone5 = nullptr;
			Unit* Drone6 = nullptr;
			AlienArmy.pickDrones(Drone1, Drone2);
			if (!Drone1)
			{
				return;
			}
			AlienArmy.pickDrones(Drone3, Drone4);
			if (!Drone3)
			{
				KilledList.enqueue(Drone1);
				KilledList.enqueue(Drone2);
				return;
			}
			AlienArmy.pickDrones(Drone5, Drone6);


			if (!Drone5)
			{
				KilledList.enqueue(Drone1);
				KilledList.enqueue(Drone2);
				KilledList.enqueue(Drone3);
				KilledList.enqueue(Drone4);
				return;
			}
			else
			{
				if (!Drone6)
				{
					KilledList.enqueue(Drone1);
					KilledList.enqueue(Drone2);
					KilledList.enqueue(Drone3);
					KilledList.enqueue(Drone4);
					KilledList.enqueue(Drone5);
				}
				else
				{
					KilledList.enqueue(Drone1);
					KilledList.enqueue(Drone2);
					KilledList.enqueue(Drone3);
					KilledList.enqueue(Drone4);
					KilledList.enqueue(Drone5);
					KilledList.enqueue(Drone6);
				}
			}
		}
}

int Game::getN()
{
	return N;
}

int Game::getESper()
{
	return ESper;
}

int Game::getETper()
{
	return ETper;
}

int Game::getEGper()
{
	return EGper;
}

int Game::getASper()
{
	return ASper;
}

int Game::getAMper()
{
	return AMper;
}

int Game::getADper()
{
	return ADper;
}

int Game::getProb()
{
	return Prob;
}

int Game::getPowerMinE()
{
	return PowerMinE;
}

int Game::getPowerMaxE()
{
	return PowerMaxE;
}

int Game::getHealthMinE()
{
	return HealthMinE;
}

int Game::getHealthMaxE()
{
	return HealthMaxE;
}

int Game::getAttackCapMinE()
{
	return AttackCapMinE;
}

int Game::getAttackCapMaxE()
{
	return AttackCapMaxE;
}

int Game::getPowerMinA()
{
	return PowerMinA;
}

int Game::getPowerMaxA()
{
	return PowerMaxA;
}

int Game::getHealthMinA()
{
	return HealthMinA;
}

int Game::getHealthMaxA()
{
	return HealthMaxA;
}

int Game::getAttackCapMinA()
{
	return AttackCapMinA;
}

int Game::getAttackCapMaxA()
{
	return AttackCapMaxA;
}
double Game::getCurrentTime()
{
	return CurrentTime;
}

alienArmy* Game::GetAlienArmy()
{
	alienArmy* Aptr;
	Aptr = &AlienArmy;
	return Aptr;
}

earthArmy* Game::GetEarthArmy()
{
	earthArmy* Eptr;
	Eptr = &EarthArmy;
	return Eptr;
}




