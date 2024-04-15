#include "UnitQueue.h"
#include <iostream>
#include "Node.h"
using namespace std;

void UnitQueue::PrintQueue()
{
	Unit* K;
	UnitQueue Qcopy(*this);
	Node <Unit*>* follow = frontPtr;
	cout << "[";
	while (Qcopy.dequeue(K))
	{
		if (follow->getNext() == nullptr)
		{
			K->Print();
			
		}
		else
		{
			K->Print();
			cout << ", ";

		}
		follow = follow->getNext();

	}
	cout << "]" << endl;

}
