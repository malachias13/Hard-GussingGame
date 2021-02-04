#pragma once
#include "All.h"

class GussingGame
{
private:
	int& chances = attempts;
	enum GameState
	{
		Gussing,
		win,
		lost
	};
public:
	int attempts = 3;
	int* playerInput;
	int randomNum = NULL;
	bool hasWon = false;

	GameState gameState = Gussing;

	void RandomNumGen();
	void NumberGussed(int PlayerInputs);
};