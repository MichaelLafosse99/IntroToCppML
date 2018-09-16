#include <iostream>

//2.)

void func(int& one, int& two)
{
	one = 2;
	two = 1;
}

//3.)

struct change
{
	int change1;
	int change2;
};

void function(change& one, change& two)
{
	one.change1 = 3;
	two.change2 = 4;
}

int main()
{
	//1.)

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

	//2.)
	
	int value = 1;
	int valueTwo = 2;

	std::cout << value << " " << valueTwo << std::endl;

	func(value, valueTwo);


	std::cout << value << " " << valueTwo << std::endl;
	std::cout << std::endl;

	//3.)

	//int values = 1;
	//int valuesTwo = 2;


	//std::cout << values << " " << valuesTwo << std::endl;

	//function(&values, &valuesTwo);


	//std::cout << values << " " << valuesTwo << std::endl;


	system("pause");
}