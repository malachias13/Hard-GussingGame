#include "All.h"
#include "GussingGame.h"
#include <iostream>

using namespace std;
void GussingGame::RandomNumGen()
{
	srand(time(NULL));
	unsigned int randomNumber = rand() % 10;
	randomNum = randomNumber;
}

void GussingGame::NumberGussed(int playerInputs)
{

	//GameState gameState = Gussing;
		if(playerInputs != randomNum)
		{
			chances -= 1;
			if (attempts == 0)
			{
			gameState =  lost;

			}
			
			
		}
		else if(playerInputs == randomNum)
		{
			gameState = win;
			hasWon = true;
		}




		// Handle games states and printing to console

		switch (gameState)
		{
		case win:
			printf("Correct");
			break;
		case Gussing:
			cout << playerInputs<<" was Incorrect."<<endl<< " You have "<< attempts<<" attemps"<<endl ;
			//cout <<endl<< "Number is: "<<randomNum<<endl;
			break;
		case lost:
			printf("You lose value was %i", randomNum);
			break;
		default:
			printf("Something is broking");
			break;
		}
}

