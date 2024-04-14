#include "UnitAOP.h"
#include <iostream>
using namespace std;

void UnitAOP::PrintAll()
{
	cout << "[";
	for (int i = 0; i < count; i++)
	{
		if (i != count - 1)
		{
			items[i]->Print();
			cout << ", ";
		}
		else
		{
			items[i]->Print();
		}
	}
	cout << "]" << endl;
}
