/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/
#include "Game.h"
#include "FirstDice.h"

FirstDice::FirstDice()
{
	//Loading all textures
	TheTextureManager::Instance()->load("../Assets/textures/1.png",
		"FirstDiceOne", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/2.png",
		"FirstDiceTwo", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/3.png",
		"FirstDiceThree", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/4.png",
		"FirstDiceFour", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/5.png",
		"FirstDiceFive", TheGame::Instance()->getRenderer());
	TheTextureManager::Instance()->load("../Assets/textures/6.png",
		"FirstDiceSix", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("FirstDiceOne");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(210, 140));
	setType(FIRST_DICE);
}

FirstDice::~FirstDice()
{
}

void FirstDice::draw()
{

}

void FirstDice::draw(std::string imageID)
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;


	TheTextureManager::Instance()->draw(imageID, xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void FirstDice::update()
{
}

void FirstDice::clean()
{
}