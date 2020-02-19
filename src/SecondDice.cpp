/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/


#include "Game.h"
#include "SecondDice.h"

SecondDice::SecondDice()
{
	//Loading all textures
	TheTextureManager::Instance()->load("../Assets/textures/1.png",
		"SecondDiceOne", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/2.png",
		"SecondDiceTwo", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/3.png",
		"SecondDiceThree", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/4.png",
		"SecondDiceFour", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/5.png",
		"SecondDiceFive", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/6.png",
		"SecondDiceSix", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("SecondDiceOne");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(450, 140));
	setType(SECOND_DICE);
}

SecondDice::~SecondDice()
{
}

void SecondDice::draw()
{

}

void SecondDice::draw(std::string imageID)
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw(imageID, xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void SecondDice::update()
{
}

void SecondDice::clean()
{
}