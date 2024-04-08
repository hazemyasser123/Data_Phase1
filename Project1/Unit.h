#pragma once
#include <iostream>
using namespace std;
class Unit
{
protected:
	// TO DO : there will be a pointer to class game here (when class game is made)
	int ID;
	string Type; // IMPORTANT : this should have a default value in each of the derived classes
	double Tj; // Shows the timeskip when this unit joined the battle (Join Time)
	int Health;
	int Power;
	int Attack_Capacity;
	
public:
	Unit();

	Unit(int id, double tj, int h, int p, int ac);
	
	void SetID(int id);
	
	void SetType(string t);
	
	void SetTj(double tj);
	
	void SetHealth(int h);
	
	void SetPower(int p);
	
	void SetAttackCap(int ac);
	
	int GetID() const;
	
	int GetHealth() const;
	
	int GetPower() const;
	
	int GetAttackCap() const;
	
	double GetTj() const;
	
	string GetType() const;
	
	bool IsAlive();
	
	void Print() const; 
	
	/****************************************************************/
	virtual void Attack(); // MUST BE PURE VIRTUAL LATER
	/***************************************************************/
};


