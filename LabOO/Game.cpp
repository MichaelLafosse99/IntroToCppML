#include "Game.h"

Hero Game::Battle(Hero & hero1, Hero & hero2)
{
	while (hero1.IsAlive() && hero2.IsAlive())
	{
		hero1.Fight(hero2);
		hero2.Fight(hero1);
	}

	return Hero();
}
