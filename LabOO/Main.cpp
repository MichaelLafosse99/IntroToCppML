#include "Game.h" 

int main()
{
	srand(time(0));
	int numHeroes = 20;

	Hero* everyHero = new Hero[numHeroes]();
	Hero* iterate = &everyHero[0];

	Stack Team1;
	Stack Team2;

	iterate->ChangeHeroName("IronMan");
	Team1.Push(iterate++);
	iterate->ChangeHeroName("Capteen AmuriCA");
	Team2.Push(iterate++);
	
	Game CivilWar;
	CivilWar.Battle(iterate[0], iterate[1]);

	std::cout << "Waiting For Next Patch Release.." << std::endl;
	system("pause");
}