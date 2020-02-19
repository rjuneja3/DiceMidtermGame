/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/
#include "RandomDice.h"
#include "Game.h"
#include <ctime>


RandomDice::RandomDice()
{
	//Sets it to random number according to time
	srand((int)(time(NULL)));
	//a random number
	m_dicePositionNumber = (1 + rand() % 6);

}

RandomDice::~RandomDice()
{
}

void RandomDice::draw()
{
}

void RandomDice::update()
{
}

void RandomDice::clean()
{
}

void RandomDice::spin()
{
	// set the amount of spins, spin it and set the number to the wheel slot
	int spins = (10 + rand() % 50);

	for (int i = 1; i < spins; i++) {

		m_dicePositionNumber++;
		if (m_dicePositionNumber > 6)
		{
			m_dicePositionNumber = 1;
		}
	}
}

int RandomDice::getDicePositionNumber()
{
	return m_dicePositionNumber;
}