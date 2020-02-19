
/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: Simple Slot Machine Game made in C++. The user has to mak ebets and it's his luck if he wins or loses his money.
* Last Revision date: Feb 17, 2020
* Created on : Feb 15, 2020
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