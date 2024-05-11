#include <iostream>
#include "Game.h"
using namespace std;

int main()
{

	Game g2;
	/*for (int i = 0; i < 50; i++)
	{
		g2.print();
		g2.Test(); // because 5awal 7azem
	}*/

	for (int i = 0; i < 39; i++)
	{
		g2.print();
		g2.Attack();
	}

	while (g2.AreWeNotDoneYet())
	{
		g2.print();
		g2.Attack();
		g2.WhoWon();
	}
	g2.DisplayResult();
	return 0;
}
