#include <iostream>

int main()

{
	char pr;
	std::cout << "Which program do you want to run?" << std::endl;
	std::cout << " 1.) 2.) 3.) 4.) 5.)" << std::endl;
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
		std::cout << "FizzBuzz" << std::endl;
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
		std::cout << "Add or Subtract" << std::endl;
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

		//3.)
		//Not finished need more help
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		int e = 0;
		int sum = (a + b + c + d + e);

		std::cout << "Enter five different numbers: " << std::endl;
		std::cin >> a >> b >> c >> d >> e;

		if (a > b && a > c && a > d && a > e && sum > 0)
		{
			std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
		}

		//4.)

		char pe;

		std::cout << "Enter a number of your choice that is smaller than 10: " << std::endl;
		std::cin >> pe;

		switch (pe)
		{
		case '1':
			std::cout << "1" << std::endl;
			break;
		case '2':
			std::cout << "2 or 3" << std::endl;
			break;
		case '3':
			std::cout << "2 or 3" << std::endl;
			break;
		case '4':
			std::cout << "4" << std::endl;
			break;
		default:
			std::cout << "Invalid" << std::endl;
			break;
		}

		//5.)
		
		std::cout << "Input a value for X: " << std::endl;
		std::cin >> x;

		x = (x == 0) ? y = 0 : y = 10 / x;

		std::cout << "Y is: " << std::endl;
		std::cout << y << std::endl;

		//6.)

		float l = 0.0f;
		float r = 0.0f;
		/*int rs = 0;
		int ls = 0;*/
		char op;
		std::cout << "Input Two Numbers: " << std::endl;
		std::cin >> l >> r; /*|| ls >> rs;*/
		std::cout << "Do You want to Add, Subtract, Multiply, Divide, or Mod?" << std::endl;
		std::cin >> op;
		//The switch is allowing the program to break off and continue to the function depending on the
		//user's input, +, -, *, or /.
		switch (op)
		{
		case '+':
			std::cout << l + r << std::endl;
			break;
		case '-':
			std::cout << l - r << std::endl;
			break;
		case '*':
			std::cout << l * r << std::endl;
			break;
		case '/':
			std::cout << l / r << std::endl;
			break;
		/*case '%':
			std::cout << ls % rs << std::endl;
			break;*/
		default:
			std::cout << "Invalid math operation" << std::endl;
			break;
		}

		//7.)

		int cal;

		std::cout << "Enter a number that represetns a month. 1-12: " << std::endl;
		std::cin >> cal;

		if (cal == 1 || cal == 3 || cal == 5 || cal == 7 || cal == 8 || cal == 10 || cal == 12)
		{
			std::cout << "There are 31 days in this month." << std::endl;
		}
		else if (cal == 2)
		{
			std::cout << "There are 28 days in this month." << std::endl;
		}
		else if (cal == 4 || cal == 6 || cal == 9 || cal == 11)
		{
			std::cout << "There are 30 days in this month." << std::endl;
		}
		else
		{
			std::cout << "That isn't a month." << std::endl;
		}

		//8.)

		//bool flag = true;
		//int numPos = 35, numNeg = -55;
		//char frstChar = 'J', scndChar = 'O';
		//double frstPrice = 5.60;

		//a. numPos > numNeg - (true)
		//b. frstChar > scndChar - (true)
		//c. !(numPos + numNeg) - (false)
		//d. (numPos == -30) || (numNeg == -55) - (true)
		//e. (frstPrice >= 4.1) && (frstPrice <= 9.9) - (true)
		//f. !flag && (scndChar <= ‘R’) - (false)
		//g. (numPos < 66) || (flag && numPos > 35) - (true)
		//h. ++numPos == 36 - (true)
		//i. numPos++ == 36 - (true)
		//j. (frstChar == ‘j’) || (frstChar == ‘J’) - (true)

		//9.)

		//a. (a || b) || (a && b) - (true)
		//b. !((!a) && (a)) || (a && b) - (true)
		//c. !((5 || a) || (!b)) && (!(a) && b) - (false)
		//d. a || b && a - (true)
		//e. !a&&b - (false)
	}
	}
	system("pause");
}