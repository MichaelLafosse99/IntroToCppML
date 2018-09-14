#include <iostream>
int main()
{
	//b.)
	int intVar = 10;
	std::cout << intVar << std::endl;
	std::cout << std::endl;

	//d.)
	int& refToIntVar = intVar;
	std::cout << refToIntVar << std::endl;
	std::cout << std::endl;

	//f.)
	intVar = 20;
	std::cout << refToIntVar << std::endl;
	std::cout << std::endl;

	//g.)
	int& anotherRef = intVar;
	std::cout << "Reference 1: " << refToIntVar << " " << "Reference 2: " << anotherRef << std::endl;
	std::cout << std::endl;

	//h.)
	//int& refToNothing;
	int intVar2 = 99;
	anotherRef = intVar2;
	std::cout << "Making an existing reference refer to somthing else: " << anotherRef << std::endl;
	std::cout << std::endl;


	system("pause");
}