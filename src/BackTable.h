/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/
#pragma once
#ifndef __BACK_TABLE__
#define __BACK_TABLE__
#include "DisplayObject.h"

class BackTable : public DisplayObject
{
public:
	BackTable();
	~BackTable();

	void draw() override;
	void update() override;
	void clean() override;
};

#endif /* defined (__BACK_TABLE__) */