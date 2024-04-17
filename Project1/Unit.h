#pragma once
//#include "Game.h"
#include <iostream>
using namespace std;
class Game;
class Unit
{
private:
	// TO DO : there will be a pointer to class game here (IN PHASE 2)
	int ID;
	string Type; // IMPORTANT : this should have a default value in each of the derived classes
	int Tj; // Shows the timeskip when this unit joined the battle (Join Time)
	int Health;
	int Power;
	int Attack_Capacity;
	Game* PtrGame;
public:
	Unit();

	Unit(int id, int tj, int h, int p, int ac);
	
	void SetID(int id);
	
	void SetType(string t);
	
	void SetTj(int tj);
	
	void SetHealth(int h);
	
	void SetPower(int p);
	
	void SetAttackCap(int ac);
	
	int GetID() const;
	
	int GetHealth() const;
	
	int GetPower() const;
	
	int GetAttackCap() const;
	
	int GetTj() const;
	
	string GetType() const;

	void SetGamePtr(Game* pg);

	Game* GetGamePtr() const;
	
	bool IsAlive();
	
	void Print() const; 
	
	/****************************************************************/
	virtual void Attack() = 0; // MUST BE PURE VIRTUAL LATER
	/***************************************************************/
};


