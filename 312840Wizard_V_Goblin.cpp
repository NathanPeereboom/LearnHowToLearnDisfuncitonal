// 312840Wizard_V_Goblin.cpp : Defines the entry point for the console application.
//Nathan Peereboom
//February 28, 2020
//Start of Learn how to learn assignment

#include "stdafx.h"
#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include <vector>

Player player;
std::vector<Goblin> goblin(3);
void start_game()
{
	
	player.set_health(100);
	
	for (int i = 0; i < 3; i++) goblin[i].set_health(25);
	goblin[0].set_name("Red");
	goblin[1].set_name("Blue");
	goblin[2].set_name("Yellow");

	player_turn();
	//doesn't work
}

void player_turn()
{
	std::cout << "You have " << player.get_health() << " HP.\n";
	for (int i = 0; i < 3; i++) std::cout << goblin[i].get_name << " has" << goblin[0].get_health() << " HP.\n";
	std::cout << "Enter 0, 1 or 2 to attack your chosen goblin.";
	int attack_goblin;
	std::cin >> attack_goblin;
	goblin[attack_goblin].damaged(5);
	//temporary
	player_turn();
}

int main()
{
	start_game();
    return 0;
}