#include "Game.h"
#include "Hero.h"

Hero Game::Battle(Hero & hero1, Hero & hero2)
{
	while (hero1.IsAlive() && hero2.IsAlive())
	{
		//Prints out hero1's name
		hero1.PrintName();
		std::cout << " ";
		//Prints out the fight function then the name of hero1's attack
		hero1.Fight(hero2);
		hero1.PrintAttack();
		std::cout << " ";
		//Prints hero2's name then the amount of damage taken and amount of current health.
		hero2.PrintName();
		std::cout << std::endl;
		hero1.PrintDamage();
		std::cout << std::endl;
		hero2.PrintCurrentHealth();
		

		std::cout << std::endl;
		std::cout << std::endl;
		system("pause");
		system("cls");

		//Prints hero2's name
		hero2.PrintName();
		std::cout << " ";
		//Prints fight function, the name of hero2's attack.
		hero2.Fight(hero1);
		hero2.PrintAttack();
		std::cout << " ";
		//Prints hero2's name then the amount of damage taken and amount of current health.
		hero1.PrintName();
		std::cout << std::endl;
		hero2.PrintDamage();
		std::cout << std::endl;
		hero1.PrintCurrentHealth();

		std::cout << std::endl;
		std::cout << std::endl;
		system("pause");
		system("cls");
	}
	//If hero1 is alive it prints out the following:
	if (hero1.IsAlive() == false)
	{
		//Had to reverse the name printed due to small bug:
		//It really means, hero2 wins and hero1 has died.
		hero1.PrintName();
		std::cout << " has been defeated!" << std::endl;
		std::cout << std::endl;
		hero2.PrintName();
		std::cout << " is the winner!" << std::endl;
		std::cout << std::endl;
		return hero1;
	}
	//If hero2 is alive it prints out the following:
	if (hero2.IsAlive() == false)
	{
		//Had to reverse the name printed due to small bug:
		//It really means, hero2 wins and hero1 has died.
		hero2.PrintName();
		std::cout << " has been defeated!" << std::endl;
		std::cout << std::endl;
		hero1.PrintName();
		std::cout << " is the winner!" << std::endl;
		std::cout << std::endl;
		return hero2;
	}
	return Hero();
}