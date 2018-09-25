#include "Game.h" 

int main()
{
	srand(time(0));
	int numHeroes = 12;
	int randHero = rand() % 6;

	std::cout << "Incoming signal..." << "\a" << std::endl;
	std::cout << std::endl;
	std::cout << "A fight has broken out between the heroes of our nation...." << std::endl;
	std::cout << "To resolve their issues and save mankind, they must fight TO THE DEATH!" << std::endl;
	std::cout << "Press 'ENTER' to see them fight." << std::endl;
	std::cout << std::endl;
	system("pause");
	system("cls");

	//This is what makes the new heroes, assigning their names.
	Hero* everyHero = new Hero[numHeroes]();
	Hero* iterate = &everyHero[0];

	//Both teams.
	Stack Team1;
	Stack Team2;

	//Actually assigning the heroes their names, and which team they are apart of:

	//Team1
	iterate->ChangeHeroName("Ironman");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Spider-Man");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Thor");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Hulk");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Doctor Strange");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Black Widow");
	Team1.Push(iterate++);

	//Team2
	iterate->ChangeHeroName("Captain America");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("Deadpool");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("Luke Cage");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("The Punisher");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("Daredevil");
	Team2.Push(iterate++);
	iterate->ChangeHeroName("Thanos");
	Team2.Push(iterate++);


	//if (*(iterate) != *(iterate + 1))
	//{
	//	std::cout << "they not be da same";
	//}

	Game CivilWar;
	//Taking the top hero from each team and making them fight a random
	//hero from the opposite team.
	while (Team1.TeamIsDead() && Team2.TeamIsDead())
	{
		CivilWar.Battle(Team1.Top(), Team2.RandHero(randHero));
		CivilWar.Battle(Team2.Top(), Team1.RandHero(randHero));
	}
	std::cout << std::endl;
	std::cout << "Waiting For Next Patch Release.." << std::endl;
	system("pause");
}