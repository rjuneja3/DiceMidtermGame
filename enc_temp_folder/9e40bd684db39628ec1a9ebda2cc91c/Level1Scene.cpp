/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/
#include "Level1Scene.h"
#include "Game.h"
#include "EndScene.h"
#include <ctime>
#include "GLM/gtx/string_cast.hpp"
#include <algorithm>
#include <iomanip>
#include<sstream>
#include <string>
#include <iostream>
using namespace std;

Level1Scene::Level1Scene()
{
	Level1Scene::start();
}

Level1Scene::~Level1Scene()
{
	
	
}

void Level1Scene::draw()
{
	m_pBackTable->draw();
	m_pFirstDice->draw(m_FirstDiceString);
	m_pSecondDice->draw(m_SecondDiceString);
	m_pRollButton->draw();
	m_pDiceOneLabel->draw();
	m_pDiceTwoLabel->draw();
	m_pDiceResultLabel->draw();
}

void Level1Scene::update()
{
	m_pRollButton->setMousePosition(m_mousePosition);
	m_pRollButton->ButtonClick();
	if (m_pRollButton->ButtonClick())
	{
		
		roll();
	}
}

void Level1Scene::clean()
{
	delete m_pRollButton;
}

void Level1Scene::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(true);
				break;
			}
		
			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(false);
				m_pRollButton->setClickOnce(0);
				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				
				break;

			case SDLK_s:
				
				break;

			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		default:
			break;
		}
	}
}

void Level1Scene::start()
{
	m_pBackTable = new BackTable(); // Adds Background
	addChild(m_pBackTable);
	
	m_pRandomDice[0] = new RandomDice();
	m_pRandomDice[1] = new RandomDice();

	m_pRollButton = new RollButton();
	m_pRollButton->setMouseButtonClicked(false);
	addChild(m_pRollButton);
	
	initializeLabels();
	m_pFirstDice= new FirstDice();
	addChild(m_pFirstDice);
	
	m_pSecondDice = new SecondDice();
	addChild(m_pSecondDice);
}
void Level1Scene::roll()
{
	m_pRandomDice[0]->spin();
	m_pRandomDice[1]->spin();

	int FirstDiceNum = m_pRandomDice[0]->getDicePositionNumber();
	int SecondDiceNum = m_pRandomDice[1]->getDicePositionNumber();
	
	std::stringstream oneStream;
	oneStream << FirstDiceNum;
	oneStream >> m_diceOneString;
	std::stringstream twoStream;
	twoStream << SecondDiceNum;
	twoStream >> m_diceTwoString;

	
	m_pDiceOneLabel->setText(m_diceOneString);
	m_pDiceTwoLabel->setText(m_diceTwoString);

	changeFirstDiceImage(FirstDiceNum);
	changeSecondDiceImage(SecondDiceNum);

	
	
	int ResultDiceNum = FirstDiceNum + SecondDiceNum;
	std::stringstream resultStream;
	resultStream << ResultDiceNum;
	resultStream >> m_resultDiceString;
	m_pDiceResultLabel->setText("Result: " + m_resultDiceString);
}

void Level1Scene::initializeLabels()
{
	//Various colour RGBA

	SDL_Color white = { 255, 255, 255, 0.3 };
	SDL_Color red = { 255, 00, 00, 255 };


	//Adding labels
	m_pDiceOneLabel = new Label("Dice: " + m_diceOneString, "Dock51", 30, white, glm::vec2(210.0f, 265.0f));
	m_pDiceOneLabel->setParent(this);
	addChild(m_pDiceOneLabel);

	m_pDiceTwoLabel = new Label("Dice: " + m_diceTwoString, "Dock51", 30, white, glm::vec2(450.0f, 265.0f));
	m_pDiceTwoLabel->setParent(this);
	addChild(m_pDiceTwoLabel);

	m_pDiceResultLabel = new Label("Result: " + m_resultDiceString, "Dock51", 30, white, glm::vec2(320.0f, 350.0f));
	m_pDiceResultLabel->setParent(this);
	addChild(m_pDiceResultLabel);


}

glm::vec2 Level1Scene::getMousePosition()
{
	return m_mousePosition;
}

void Level1Scene::changeFirstDiceImage(int diceImage)
{
	switch (diceImage)
	{
	case one:
		m_FirstDiceString = "FirstDiceOne";
		break;
	case two:
		m_FirstDiceString = "FirstDiceTwo";
		break;
	case three:
		m_FirstDiceString = "FirstDiceThree";
		break;
	case four:
		m_FirstDiceString = "FirstDiceFour";
		break;
	case five:
		m_FirstDiceString = "FirstDiceFive";
		break;
	case six:
		m_FirstDiceString = "FirstDiceSix";
		break;
	}
}


void Level1Scene::changeSecondDiceImage(int diceImage)
{
	switch (diceImage)
	{
	case one:
		m_SecondDiceString = "SecondDiceOne";
		break;
	case two:
		m_SecondDiceString = "SecondDiceTwo";
		break;
	case three:
		m_SecondDiceString = "SecondDiceThree";
		break;
	case four:
		m_SecondDiceString = "SecondDiceFour";
		break;
	case five:
		m_SecondDiceString = "SecondDiceFive";
		break;
	case six:
		m_SecondDiceString = "SecondDiceSix";
		break;
	}
}