#include <iostream>

int main()

{
	char pr;
	std::cout << "Which program do you want to run?" << std::endl;
	std::cin >> pr;

	switch (pr)
	{
	case '1':
	{
		int grade = 90;
		char gradeLetter = 'A';

		std::cout << "Input Your Grade: " << std::endl;
		std::cin >> grade;
		//The if (grade) is giving a function depending on the input. Ex: Input is 73, the output would be a C.
		if (grade >= 90)
		{
			gradeLetter = 'A';
		}
		else if (grade >= 80 && grade < 90)
		{
			gradeLetter = 'B';
		}
		else if (grade >= 70 && grade < 80)
		{
			gradeLetter = 'C';
		}
		else if (grade >= 60 && grade < 70)
		{
			gradeLetter = 'D';
		}
		else
		{
			gradeLetter = 'F';
		}

		std::cout << "Your Grade Letter Is: " << std::endl;
		std::cout << gradeLetter << std::endl;
	}
	break;

	case '2':
	{
		int input = 0;
		std::cout << "Enter a number." << std::endl;
		std::cin >> input;
		//This if statement is having the user input a number, if it's a multiple of 3, 5, or both
		//it will output a phrase, if it's not a multiple of either, it will output the number they entered.
		if (input % 3 == 0 && input % 5 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (input % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (input % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << input << std::endl;
		}
	}
	break;

	case '3':
	{
		float lhs = 0.0f;
		float rhs = 0.0f;
		char op;
		std::cout << "Input Two Numbers: " << std::endl;
		std::cin >> lhs >> rhs;
		std::cout << "Do You want to Add Or Subtract?" << std::endl;
		std::cin >> op;
		//The switch is allowing the program to break off and continue to the function depending on the
		//user's input, + or -.
		switch (op)
		{
		case '+':
			std::cout << lhs + rhs << std::endl;
			break;
		case '-':
			std::cout << lhs - rhs << std::endl;
			break;
		default:
			std::cout << "Invalid math operation" << std::endl;
			break;
		}
	}
	break;

	case '4':
	{
		int health = 0;
		std::cout << "Input your health.." << std::endl;
		std::cin >> health;
		std::cout << std::endl;
		//The if statement is giving different outcomes depending on the input
		//being either > than 0, = to 0, < than 25 but > than 0, or > than 25.
		if (health > 0)
		{
			std::cout << "You are alive..\n";
			std::cout << std::endl;
			if (health < 25)
			{
				std::cout << "You are low on health, you need to heal." << std::endl;
				std::cout << std::endl;
			}
			std::cout << "Your health is: " << health << std::endl;
		}
		else
		{
			std::cout << "You are dead..." << std::endl;
		}
	}
	break;

	case '5':
	{
		//1.)

		int x;
		int y = 0;


		if (y == 0)
		{
			x = 100;
		}
		std::cout << "X is: " << x << std::endl;
		std::cout << std::endl;
		std::cout << "Y is: " << y << std::endl;

		//2.)

		float lhs = 0.0f;
		float rhs = 0.0f;

		std::cout << "Enter two numbers: " << std::endl;
		std::cin >> lhs >> rhs;

		if (lhs < rhs)
		{
			std::cout << "The larger number is: " << std::endl;
			std::cout << rhs << std::endl;
		}
		else
		{
			std::cout << "The larger number is: " << std::endl;
			std::cout << lhs << std::endl;
		}
		system("pause");
	}
	}
}