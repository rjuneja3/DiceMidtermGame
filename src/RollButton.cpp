/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/
#include "RollButton.h"
#include "Game.h"

RollButton::RollButton()
// call super constructor
	:Button(
		"../Assets/textures/rollButton.png",
		"roll",
		ROLL_BUTTON, glm::vec2(320, 400.0f)), m_isClicked(false)
{

}

RollButton::~RollButton()
{
}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			std::cout << "Plus Button Clicked!" << std::endl;
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}
int RollButton::countsClickOnce()
{
	return m_pClickFlag;
}

void RollButton::setClickOnce(int clickCount)
{
	m_pClickFlag = clickCount;
}