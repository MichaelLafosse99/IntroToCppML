#include <iostream>

int main()
{
	int i = 1;
//The while loop will take the value of i and increment it by 1 until it is the value of 10,
//and it will also print out each number and a comma until it hits the number 10.
	while (i <= 10)
	{
		std::cout << i;
		if (i < 10)
		{
			std::cout << ", ";
		}
		i++;
	}

	std::cout << std::endl;

	char input;

	do
	{
		std::cout << "Press 'q' or 'Q' to end the application." << std::endl;
		std::cin >> input;

	} while (input != 'q' && input != 'Q');
	

	for (int i = 0; i <= 10; i +=2)
	{
		std::cout << i << std::endl;
	}

	//Exercises

	//1.) - part 1

	for (int e = 100; e >= 0; e--)
	{
		std::cout << e << std::endl;
	}

	// part 2

	for (int e = 100; e >= 0; e--)
	{
		if (e < 100)
		{
			std::cout << e << std::endl;
		}
	}

	system("pause");
}