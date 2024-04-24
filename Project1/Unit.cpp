#include "Unit.h"
#include <iostream>
using namespace std;

Unit::Unit()
{
	SetID(0);
	SetTj(0);
	SetHealth(0);
	SetPower(0);
	SetAttackCap(0);
}

Unit::Unit(int id, int tj, int h, int p, int ac,Game* Gp)
{
	SetID(id);
	SetTj(tj);
	SetHealth(h);
	SetPower(p);
	SetAttackCap(ac);
	PtrGame = Gp;
}


void Unit::SetID(int id)
{
	ID = id;
}

void Unit::SetType(string t)
{
	Type = t;
}

void Unit::SetTj(int tj)
{
	Tj = tj;
}

void Unit::SetHealth(int h)
{
	Health = h;
}

void Unit::SetPower(int p)
{
	Power = p;
}

void Unit::SetAttackCap(int ac)
{
	Attack_Capacity = ac;
}

int Unit::GetID() const
{
	return ID;
}

int Unit::GetHealth() const
{
	return Health;
}

int Unit::GetPower() const
{
	return Power;
}

int Unit::GetAttackCap() const
{
	return Attack_Capacity;
}

int Unit::GetTj() const
{
	return Tj;
}

string Unit::GetType() const
{
	return Type;
}

void Unit::SetGamePtr(Game* pg)
{
	PtrGame = pg;
}

Game* Unit::GetGamePtr() const
{
	return PtrGame;
}

bool Unit::IsAlive()
{
	return (Health <= 0);
}
	
void Unit::Print() const
{
	cout << ID;
}

void Unit::Attack()
{
	//MUST BE PURE VIRTUAL LATER 
}
//nothing
