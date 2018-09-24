#include "Game.h" 

int main()
{
	srand(time(0));
	int numHeroes = 20;

	std::cout << "Incoming signal..." << "\a" << std::endl;
	std::cout << std::endl;
	std::cout << "A fight has broken out between the heroes of our nation...." << std::endl;
	std::cout << "To resolve their issues and save mankind, they must fight TO THE DEATH!" << std::endl;
	std::cout << "Press 'ENTER' to see them fight."  << std::endl;
	std::cout << std::endl;
	system("pause");
	system("cls");

	//This is what makes the new heroes, assigning their names.
	Hero* everyHero = new Hero[numHeroes]();
	Hero* iterate = &everyHero[0];

	//Both team.
	Stack Team1;
	Stack Team2;

	//Actually assigning the heroes their names, and which team they are apart of.
	iterate->ChangeHeroName("Ironman");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Capteen AmuriCA");
	Team2.Push(iterate++);
	
	//if (*(iterate) != *(iterate + 1))
	//{
	//	std::cout << "they not be da same";
	Game CivilWar;
	CivilWar.Battle(everyHero[0], everyHero[1]);

	std::cout << std::endl;
	std::cout << "Waiting For Next Patch Release.." << std::endl;
	system("pause");
}