#include "Game.h"

Hero Game::Battle(Hero & hero1, Hero & hero2)
{
	while (hero1.IsAlive() && hero2.IsAlive())
	{
		hero1.Fight(hero2);
		hero2.Fight(hero1);
	}
	if (hero1.IsAlive() == false)
	{
		std::cout << &hero1 << " has been defeated!" << std::endl;
		std::cout << std::endl;
		std::cout << &hero2 << " is the winner!" << std::endl;
	}
	if (hero2.IsAlive() == false)
	{
		std::cout << &hero2 << " has been defeated!" << std::endl;
		std::cout << std::endl;
		std::cout << &hero1 << " is the winner!" << std::endl;
	}
	return Hero();
}
