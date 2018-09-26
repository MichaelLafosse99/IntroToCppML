#include "Game.h"
#include "Hero.h"

Hero Game::Battle(Hero & hero1, Hero & hero2)
{
	while (hero1.IsAlive() && hero2.IsAlive())
	{
		hero1.Fight(hero2);
		//If hero2 is alive it prints out the following:
		if (hero2.IsAlive() == false && hero1.IsAlive())
		{
			DisplayTeams();

			std::cout << "+==================+==================+" << std::endl;
			hero2.PrintName();
			std::cout << " has been defeated!" << std::endl;
			std::cout << std::endl;
			hero1.PrintName();
			std::cout << " is the winner!" << std::endl;
			std::cout << "+==================+==================+" << std::endl;

			system("pause");
			system("cls");
			return hero1;
		}

		hero2.Fight(hero1);
		//If hero1 is alive it prints out the following:
		if (hero1.IsAlive() == false && hero2.IsAlive())
		{
			DisplayTeams();

			std::cout << "+==================+==================+" << std::endl;
			hero1.PrintName();
			std::cout << " has been defeated!" << std::endl;
			std::cout << std::endl;
			hero2.PrintName();
			std::cout << " is the winner!" << std::endl;
			std::cout << "+==================+==================+" << std::endl;

			system("pause");
			system("cls");
			return hero2;
		}
		
		//InCase of fuck up use this:
		/*if (hero1.IsAlive() && hero2.IsAlive())
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
		}

		std::cout << std::endl;
		std::cout << std::endl;
		system("pause");
		system("cls");

		if (hero2.IsAlive() && hero1.IsAlive())
		{
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
		}

		std::cout << std::endl;
		std::cout << std::endl;
		system("pause");
		system("cls");
	}*/

	}
		return Hero();
}

void Game::DisplayTeams()
{
	std::cout << "+==================+==================+" << std::endl;
	std::cout << "	    Teams:" << std::endl;
	std::cout << "Team 1:" << "			" << "Team 2:" << std::endl;
	std::cout << "-------" << "			" << "-------" << std::endl;
	std::cout << std::endl;
	std::cout << "Ironman" << "			" << "Captain America" << std::endl;
	std::cout << "Spider-Man" << "		" << "Deadpool" << std::endl;
	std::cout << "Thor" << "			" << "Luke Cage" << std::endl;
	std::cout << "Groot" << "			" << "The Punisher" << std::endl;
	std::cout << "Doctor Strange" << "		Daredevil" << std::endl;
	std::cout << "Black Widow" << "		Hulk" << std::endl;
	std::cout << "+==================+==================+" << std::endl;
	std::cout << std::endl;
}
