#include "UnitStack.h"

void UnitStack::PrintStack()
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
