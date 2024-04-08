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

Unit::Unit(int id, double tj, int h, int p, int ac)
{
	SetID(id);
	SetTj(tj);
	SetHealth(h);
	SetPower(p);
	SetAttackCap(ac);
}

void Unit::SetID(int id)
{
	ID = id;
}

void Unit::SetType(string t)
{
	Type = t;
}

void Unit::SetTj(double tj)
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

double Unit::GetTj() const
{
	return Tj;
}

string Unit::GetType() const
{
	return Type;
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

