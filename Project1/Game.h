#pragma once
class Game
{
private:
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
public:
	Game();
	void ReadParameters();
};

