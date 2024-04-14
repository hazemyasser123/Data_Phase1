#pragma once
class Game
{
private:
	double CurrentTime;
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
	int getN();
	int getESper();
	int getETper();
	int getEGper();
	int getASper();
	int getAMper();
	int getADper();
	int getProb();
	int getPowerMinE();
	int getPowerMaxE();
	int getHealthMinE();
	int getHealthMaxE();
	int getAttackCapMinE();
	int getAttackCapMaxE();
	int getPowerMinA();
	int getPowerMaxA();
	int getHealthMinA();
	int getHealthMaxA();
	int getAttackCapMinA();
	int getAttackCapMaxA();
	double getCurrentTime();
};

