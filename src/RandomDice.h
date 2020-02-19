/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/
#pragma once

#ifndef __RANDOM_DICE__
#define __RANDOM_DICE__

#include "GameObject.h"

class RandomDice : public GameObject
{

public:

	RandomDice();
	~RandomDice();

	void draw() override;
	void update() override;
	void clean() override;

	void spin();
	int getDicePositionNumber();



private:

	int m_dicePositionNumber;


};



#endif /*Defined __RANDOM_DICE__ */