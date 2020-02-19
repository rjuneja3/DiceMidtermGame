/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020
* Created on : Feb 15, 2020
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