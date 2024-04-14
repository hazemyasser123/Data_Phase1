#pragma once
#include "ArrayStack.h"
#include "Unit.h"
class UnitStack :  public ArrayStack<Unit*>
{
public:
	void PrintStack()
	{
		UnitStack Scopy;
		Scopy = *this;
		Unit* x;
		cout << "[";
		int count = 0;
		while (Scopy.pop(x))
		{
			count++;
			if (count == this->gettop() + 1)
			{
				x->Print();
				cout << "]" << endl;
			}
			else
			{
				x->Print(); 
				cout << ", ";

			}
		}

		cout << endl;
	}
};

