#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
	
	cout << "Zuma beeh" << endl;
	cout << "Doc/Omar" << endl;
	cout << "M. Tamer" << endl;
	cout << "Haitham" << endl;
	Game g2;
	for (int i = 0; i < 50; i++)
	{
		g2.print();
		g2.Test();
	}
	return 0;

}
