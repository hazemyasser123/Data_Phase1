#include <iostream>
#include "Array_Of_Pointers.h"
#include "LinkedQueue.h"
#include "priQueue.h"
#include "StacksList.h"
#include "ArrayStack.h"
using namespace std;



int main()
{
	/*ArrayStack<int> s1;
	s1.push(7);
	s1.push(2);
	s1.push(8);
	s1.push(9);
	s1.push(4);
	s1.push(13);
	s1.push(7);
	s1.push(1);
	s1.push(9);
	s1.push(10);
	s1.PrintStack();
	s1.PrintStack();*/

	LinkedQueue <int> Q1;
	Q1.enqueue(5);
	Q1.enqueue(212);
	Q1.enqueue(1);
	Q1.enqueue(54);
	Q1.enqueue(41);
	Q1.enqueue(156);
	Q1.enqueue(15);
	Q1.enqueue(8);
	Q1.PrintQueue();
	Q1.PrintQueue();
	return 0;
}