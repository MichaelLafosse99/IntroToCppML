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
		hero1.PrintName();
		std::cout << " has been defeated!" << std::endl;
		std::cout << std::endl;
		hero1.PrintName();
		std::cout << " is the winner!" << std::endl;
		return hero1;
	}
	if (hero2.IsAlive() == false)
	{
		hero1.PrintName();
		std::cout << " has been defeated!" << std::endl;
		std::cout << std::endl;
		hero1.PrintName();
		std::cout << " is the winner!" << std::endl;
		return hero2;
	}
	return Hero();
}
