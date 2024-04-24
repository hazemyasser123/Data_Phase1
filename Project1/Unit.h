#pragma once
#include <iostream>
using namespace std;
#ifndef UNIT
#define UNIT
class Game;
class Unit
{
private:
	int ID;
	string Type; // IMPORTANT : this should have a default value in each of the derived classes
	int Tj;     // Shows the timeskip when this unit joined the battle (Join Time)
	int Td;		// (Time dismissed or time of death)
	int Ta;		// (Time of the unit got the first shot by enemy)
	bool wasShot;	// if this is true the Ta won't be changed so don't screw up the inputing the first Ta & Df
					//and this won't be changed to flase again besides I made Death so that no values of D won't change only T
	int Dd;		// (Time of the unit killed compared to Ta)
	int Df;		// Ta -Tj Time taken to be spotted
	int Db;		// (Time the unit spent in battle)
	int Health;
	int Power;
	int Attack_Capacity;
	Game* PtrGame;

	void SetDf(int time);

	void SetDd(int time);

	void SetDb(int time);

	void SetTj(int time);

	void SetTd(int time);

	void SetTa(int time);

	void SetHealth(int h);

	void SetPower(int p);

	void SetAttackCap(int ac);

	void SetID(int id);

	void SetGamePtr(Game* pg);

	void DEATH(int deathtime);

public:
	Unit();

	void SetType(string t);

	Unit(int id, int tj, int h, int p, int ac, Game* Gp);

	int GetID() const;

	int GetTj() const;

	int GetTd() const;

	int GetTa() const;

	int GetDf() const;

	int GetDd() const;
	
	int GetDb() const;

	bool GetwasShot() const;

	int GetHealth() const;
	
	int GetPower() const;
	
	int GetAttackCap() const;
	
	string GetType() const;

	Game* GetGamePtr() const;
	
	bool IsAlive();
	
	void Print() const;
	
	/****************************************************************/
	virtual void Attack() = 0; // MUST BE PURE VIRTUAL LATER
	/***************************************************************/

	virtual void BeAttacked(int DAMGE, int currenttime); // I ADDED THIS FUNCTIONS BECAUSE DR.5AWAL (AKA. OMAR GAMAL) WANTS IT AND I DON'T KNOW IT'S OBJECTIVE AND HE WANTS IT TO BE 
														//  PURE VIRTUAL LATER
};


#endif

