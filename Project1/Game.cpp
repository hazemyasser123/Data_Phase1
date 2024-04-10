#include "Game.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

Game::Game()
{
	ReadParameters();
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

int Game::getN()
{
	return N;
}

int Game::getESper()
{
	return 0;
}

int Game::getETper()
{
	return ESper;
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
	return 0;
}

int Game::getProb()
{
	return ADper;
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


