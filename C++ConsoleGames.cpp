#include <iostream>

#include "GussingGame.h"

using namespace std;
int main()
{
	GussingGame gussingGame;
	int input;

	cout << "welcome Gusst the number."<<endl;
   // gussingGame.GetPlayerInput();
    
	while (gussingGame.attempts > 0)
	{
		// Get player console input
		cin>> input;
		gussingGame.playerInput = &input;

		// This check to see if there is a randomnumber if not get one. 
		if (gussingGame.randomNum == NULL)
			gussingGame.RandomNumGen();

		// The Gussing game
		gussingGame.NumberGussed(*gussingGame.playerInput);

		// Stop the game when the player gusses correcly
		if (gussingGame.hasWon)
			break;
	}
}
