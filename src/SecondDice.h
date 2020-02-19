/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/
#pragma once
#ifndef __SECOND_DICE__
#define __SECOND_DICE__


#include "DisplayObject.h"

class SecondDice : public DisplayObject
{
public:
	SecondDice();
	~SecondDice();
	void draw() override;
	void update() override;
	void clean() override;
	void draw(std::string imageID);
};

#endif
