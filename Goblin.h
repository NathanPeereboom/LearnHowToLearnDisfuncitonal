//Nathan Peereboom
//February 28, 2020
//Start of Learn how to learn assignment

#pragma once
#include <iostream>

class Goblin
{
	std::string name;
	int health;
public:
	void set_name(std::string goblin_name);
	std::string get_name();
	void set_health(int goblin_health);
	int get_health();
	void damaged(int amount);
};

