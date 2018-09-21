#include "Game.h" 

int main()
{
	srand(time(0));
	Hero *IronMan = new Hero();
	IronMan->ChangeHeroName((char*)"IronMan");
	Stack Team1;
	Stack Team2;

	std::cout << "Waiting For Next Patch Release.." << std::endl;
	system("pause");
}