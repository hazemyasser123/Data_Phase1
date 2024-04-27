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

Game::~Game()
{
	delete g2;
}

void Game::InsertInKilled_List(Unit* ToBeInserted)
{
	KilledList.enqueue(ToBeInserted);
}

void Game::ReadParameters()
{
	ifstream infile;
	string line;
	infile.open("Input.txt");
	int N;
	int ESper;
	int ETper;
	int EGper;
	int ASper;
	int AMper;
	int ADper;
	int Prob;
	int PowerMinE;
	int PowerMaxE;
	int HealthMinE;
	int HealthMaxE;
	int AttackCapMinE;
	int AttackCapMaxE;
	int PowerMinA;
	int PowerMaxA;
	int HealthMinA;
	int HealthMaxA;
	int AttackCapMinA;
	int AttackCapMaxA;

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

	g2->setN(N);
	g2->setESper(ESper);
	g2->setETper(ETper);
	g2->setEGper(EGper);
	g2-> setASper(ASper);
	g2-> setAMper(AMper);
	g2-> setADper(ADper);
	g2-> setProb(Prob);
	g2-> setPowerMinE(PowerMinE);
	g2-> setPowerMaxE(PowerMaxE);
	g2-> SetHealthMinE(HealthMinE);
	g2-> SetHealthMaxE(HealthMaxE);
	g2-> SetAttackCapMinE(AttackCapMinE);
	g2-> SetAttackCapMaxE(AttackCapMaxE);
	g2-> SetPowerMinA(PowerMinA);
	g2-> SetPowerMaxA(PowerMaxA);
	g2-> SetHealthMinA(HealthMinA);
	g2-> SetHealthMaxA(HealthMaxA);
	g2-> SetAttackCapMinA(AttackCapMinA);
	g2-> SetAttackCapMaxA(AttackCapMaxA);
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
		Unit* EARTHSOILDER = nullptr;
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
				/*EG->SetHealth(EG->GetHealth() / 2);*/
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
					/*AlienSolider->SetHealth(AlienSolider->GetHealth() / 2);*/
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

void Game::Attack()
{
	UnitQueue TempList;
	
	// This TempList will be passed to the alienarmy and eartharmy attack functions  
}

int Game::getCurrentTime()
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




