//Nathan Peereboom
//February 28, 2020
//Start of Learn how to learn assignment

#include "stdafx.h"
#include "Goblin.h"

void Goblin::set_name(std::string goblin_name)
{
	name = goblin_name;
}

std::string Goblin::get_name()
{
	return name;
}

void Goblin::set_health(int goblin_health)
{
	health = goblin_health;
}

int Goblin::get_health()
{
	return health;
}

void Goblin::damaged(int amount)
{
	health -= amount;
}
