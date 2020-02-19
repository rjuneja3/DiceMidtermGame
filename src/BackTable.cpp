/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/
#include "BackTable.h"
#include "Game.h"

BackTable::BackTable()
{
	//Loading all textures
	TheTextureManager::Instance()->load("../Assets/textures/background.png",
		"BackTable", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("BackTable");
	setWidth(size.x);
	setHeight(size.y);
	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5, Config::SCREEN_HEIGHT * 0.5));
	setType(BACK_TABLE);
}

BackTable::~BackTable()
{
}

void BackTable::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;



	TheTextureManager::Instance()->draw("BackTable", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, true);

}

void BackTable::update()
{
}

void BackTable::clean()
{
}