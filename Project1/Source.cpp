#include <iostream>
#include "Array_Of_Pointers.h"
#include "LinkedQueue.h"
#include "priQueue.h"
#include "StacksList.h"
#include "ArrayStack.h"
#include "DEQueue.h"
#include "Unit.h"
using namespace std;


ostream& operator << (ostream& os, const Unit& unit)
{
	unit.Print();
	return os;
}


int main()
{
	//cout << "Edited by zuma beeh el gamed neek" << endl;
	/*Unit * u1 = new Unit(5, "zuma", 5.2, 2, 45, 84);
	Array_Of_Pointers <Unit> a1;
	a1.insert(u1);
	ArrayStack <int> s1;
	LinkedQueue <int> q1;
	
	q1.enqueue(5);
	q1.enqueue(5);
	q1.enqueue(5);
	q1.enqueue(5);
	q1.enqueue(5);
	q1.enqueue(5);
	q1.PrintQueue();*/

	/*cout << "Edited by Omar Gamal" << endl;
	DEQueue <int> x;
	int y = 0;
	for (int i = 0; i < 7; i++)
	{
		x.enqueue(i);
	}
	
	for (int i = 0; i < 7; i++)
	{
		x.dequeue(y);
	}

	for (int i = 0; i < 7; i++)
	{
		x.enqueue(i);
	}
	x.peekback(y);
	cout << endl << y << endl;
	x.peek(y);
	cout << endl << y << endl;*/


	return 0;
}