#include "UnitpriQueue.h"
#include "Unit.h"
#include <iostream>
using namespace std;
void UnitpriQueue::PrintPriQueue()
{
    Unit* K;
    int dummy;
    priQueue <Unit*> Qcopy(*this);
    while (Qcopy.dequeue(K, dummy))
    {
        K->Print();
        cout << " ";
    }
    cout << endl;
}
