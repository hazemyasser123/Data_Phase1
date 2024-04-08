#include <iostream>
#include "Array_Of_Pointers.h"
#include "LinkedQueue.h"
#include "priQueue.h"
#include "StacksList.h"
#include "ArrayStack.h"
#include "DEQueue.h"
#include "Unit.h"
#include "Alien_Monster.h"
using namespace std;


ostream& operator << (ostream& out, const Unit& unit)
{
	unit.Print();
	return out;
}


int main()
{
	Alien_Monster* a1;
	a1 = new Alien_Monster(5, 2, 5, 5, 5);
	Array_Of_Pointers <Alien_Monster> p1;
	p1.insert(a1);
	p1.PrintAll();
	Unit* u;
	u = new Alien_Monster(5, 2, 5, 5, 5);
	cout << u->GetType() << endl;

	return 0;
}