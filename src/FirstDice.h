/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/
#pragma once
#ifndef __FIRST_DICE__
#define __FIRST_DICE__


#include "DisplayObject.h"

class FirstDice : public DisplayObject
{
public:
	FirstDice();
	~FirstDice();
	void draw() override;
	void update() override;
	void clean() override;
	void draw(std::string imageID);
};

#endif