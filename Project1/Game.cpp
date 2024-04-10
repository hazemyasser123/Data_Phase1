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
