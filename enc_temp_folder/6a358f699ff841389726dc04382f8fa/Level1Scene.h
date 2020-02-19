/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/

#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "RollButton.h"
#include "DiceImages.h"
#include "FirstDice.h"
#include "SecondDice.h"
#include "Label.h"
#include "RandomDice.h"
#include "BackTable.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;
	void roll();

	// getters
	glm::vec2 getMousePosition();
	
	void initializeLabels();
	void changeFirstDiceImage(int diceImage);
	void changeSecondDiceImage(int diceImage);


private:
	// game objects
	int m_diceOne;
	int m_diceTwo;
	int m_resultDice;
	std::string m_diceOneString;
	std::string m_diceTwoString;
	std::string m_resultDiceString;

	Label* m_pDiceOneLabel;
	Label* m_pDiceTwoLabel;
	Label* m_pDiceResultLabel;

	//Starting images for the dice
	std::string m_FirstDiceString = "FirstDiceOne";
	std::string m_SecondDiceString = "SecondDiceOne";

	RollButton* m_pRollButton;
	BackTable* m_pBackTable;
	FirstDice* m_pFirstDice;
	SecondDice* m_pSecondDice;
	
	RandomDice* m_pRandomDice[2];

	// private data member
	glm::vec2 m_mousePosition;
	
	
};

#endif /* defined (__LEVEL_1_SCENE__) */
