#include <iostream>
#include "Array_Of_Pointers.h"
#include "LinkedQueue.h"
#include "Node.h"
#include "priNode.h"
#include "priQueue.h"
#include "QueueADT.h"
#include "StacksList.h"
using namespace std;

int main()
{
	Array_Of_Pointers <int> a1;
	int* p = nullptr;
	int x = 5;
	int y = 6;
	int* q = nullptr;
	p = &x;
	q = &y;
	a1.insert(p);
	a1.insert(q);
	a1.Delete(1);
	a1.ChangeVal(q , 0);
	cout << a1.GetCount() << endl;
	a1.clear();
	cout << a1.GetCount() << endl;
	a1.PrintAll();
	return 0;
}