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

	//In this do-while loop, the application runs in a loop, until the user presses q or Q.

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
	std::cout << "1.) - 100 to 0's 2.) - FizzBuzz 3.) - Project Eula Problem 4.) - Repeat" << std::endl;
	std::cin >> pr;

	switch (pr)
	{

	case '1':
	{

		//In all of the parts below, the loops count down from 100 to 0
		// and either print both 100 and 0, just 0, neither, or count down by 2.

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

		//2.) FizzBuzz

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

		//The reason why this loop works is becuase,
		//everytime a number is a multiple of 3 or 5,
		//it takes that value, and adds it with all of the other
		//multiple numbers. (sum)

		for (int i = 0; i <= 1000; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
			}
			
		}
		std::cout << sum << std::endl;
	}
	break;

	case '4':
	{

		//The problems below are the same exercises from before,
		//except they're done with just "while" loops.

		//4.)

		std::cout << std::endl;
		std::cout << "Repeat Exercises 1-3 with only using 'While' loops." << std::endl;
		std::cout << std::endl;

		char pe;

		std::cout << "Which part do you want to run?" << std::endl;
		std::cout << "1.) - Ex 4/1, 2.) - Ex 4/2, 3.) - Ex 4/3" << std::endl;
		std::cin >> pe;

		switch (pe)
		{

		case '1':
		{
			//part 1

			std::cout << std::endl;
			std::cout << "Including 100 and 0" << std::endl;
			std::cout << std::endl;

			int i = 100;

			while (i >=0)
			{
				std::cout << i << std::endl;
				i--;
			}

			//part 2

			std::cout << std::endl;
			std::cout << "Not including 100" << std::endl;
			std::cout << std::endl;

			int e = 100;

			while (e >= 0)
			{
				if (e < 100)
				{
					std::cout << e << std::endl;
				}
				e--;
			}

			//part 3

			std::cout << std::endl;
			std::cout << "Not including 100 or 0" << std::endl;
			std::cout << std::endl;

			int w = 100;

			while (w >= 0)
			{
				if (w < 100 && w > 0)
				{
					std::cout << w << std::endl;
				}
				w--;
			}

			//part 4

			std::cout << std::endl;
			std::cout << "Decrement by 2" << std::endl;
			std::cout << std::endl;

			int r = 100;

			while (r >= 0)
			{
				std::cout << r << std::endl;
				r -= 2;
			}
		}
		break;

		case '2':
		{
			int i = 0;

			while (i <= 100)
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
				i++;
			}
		}
		break;

		case '3':
		{
			int sum;
			sum = 0;
			int i = 0;

			while (i <= 1000)
			{
				if (i % 3 == 0 || i % 5 == 0)
				{

					sum += i;
				}
				i++;
			}
			std::cout << sum << std::endl;
		}
		}
	}
	}
	system("pause");
}