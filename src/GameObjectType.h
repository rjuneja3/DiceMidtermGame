
/*
* Author name: Rohan Juneja
* Student ID: 300987725
* Game Description: MidTermTest - Web Game Programming - Dice Game. Press the Roll button to roll the dices and display the result.
* Last Revision date: Feb 18, 2020
* Created on : Feb 18, 2020
*/

#pragma once
#ifndef __GAME_OBJECT_TYPE__
#define __GAME_OBJECT_TYPE__
enum GameObjectType {
	NONE = -1,
	ISLAND,
	PLAYER,
	CLOUD,
	BULLET,
	ENEMY,
	OCEAN,
	PLANE,
	START_BUTTON,
	NUM_OF_TYPES,
	ROLL_BUTTON,
	FIRST_DICE,
	SECOND_DICE,
	BACK_TABLE
};

#endif /* defined (__GAME_OBJECT_TYPE__)*/