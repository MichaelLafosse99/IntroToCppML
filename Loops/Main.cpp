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
	char pr;

	std::cout << "Which Number do you want to run?" << std::endl;
	std::cout << "1.) 2.) 3.) 4.)" << std::endl;
	std::cin >> pr;

	switch (pr)
	{

	case '1':
	{
		//1.) - part 1

		std::cout << std::endl;
		std::cout << "Part 1" << std::endl;
		std::cout << std::endl;

		for (int e = 100; e >= 0; e--)
		{
			std::cout << e << std::endl;
		}

		std::cout << std::endl;

		// part 2

		std::cout << std::endl;
		std::cout << "Part 2" << std::endl;
		std::cout << std::endl;

		for (int e = 100; e >= 0; e--)
		{
			if (e < 100)
			{
				std::cout << e << std::endl;
			}
		}

		std::cout << std::endl;

		// part 3

		std::cout << std::endl;
		std::cout << "Part 3" << std::endl;
		std::cout << std::endl;

		for (int e = 100; e >= 0; e--)
		{
			if (e < 100 && e > 0)
			{
				std::cout << e << std::endl;
			}
		}

		// part 4

		std::cout << std::endl;
		std::cout << "Part 4" << std::endl;
		std::cout << std::endl;

		for (int e = 100; e >= 0; e -= 2)
		{
			std::cout << e << std::endl;
		}
	}
	break;

	case '2':
	{

		//2.)

		std::cout << std::endl;
		std::cout << "2" << std::endl;
		std::cout << std::endl;

		for (int i = 0; i <= 100; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				std::cout << "FizzBuzz" << std::endl;
			}
			else if (i % 3 == 0)
			{
				std::cout << "Fizz" << std::endl;
			}
			else if (i % 5 == 0)
			{
				std::cout << "Buzz" << std::endl;
			}
			else
			{
				std::cout << i << std::endl;
			}
		}
		break;

	case '3':
	{

		//3.) - Project Eula Problem:

		std::cout << std::endl;
		std::cout << "Project Eula Problem: " << std::endl;
		std::cout << std::endl;
		
		int sum;
		sum = 0;

		for (int i = 0; i <= 1000; i++)
		{ 
			if (i % 3 == 0 || i % 5 == 0)
			{

				sum += i;
			}
		}
		std::cout << sum;
	}
	}

	}
	system("pause");
}