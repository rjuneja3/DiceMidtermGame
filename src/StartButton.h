/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/

#pragma once
#ifndef __START_BUTTON__
#define __START_BUTTON__

#include "Button.h"

class StartButton : public Button
{
public:
	StartButton();
	~StartButton();


	bool ButtonClick() override;
private:
	bool m_isClicked;
};

#endif /* defined (__START_BUTTON__) */