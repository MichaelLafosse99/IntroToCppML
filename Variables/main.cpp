#include <iostream>

int main()

{
	std::cout << "Assignment to make terminal put out numbers even with userinput: " << std::endl;
	std::cout << std::endl;
	{
		int number;
		number = 5;

		std::cout << number << std::endl;

		int numA;
		int	numB;
		int sum;

		numA = 18;
		numB = 10;
		sum = numA + numB;

		std::cout << sum << std::endl;
	}
	{
		float numC;
		float numD;
		float sum2;

		numC = 2;
		numD = 3;
		sum2 = numC + numD;

		std::cout << sum2 << std::endl;
		std::cout << std::endl;
	}
	{
		int userinput;

		std::cout << "Input a whole number" << std::endl;
		std::cin >> userinput;
		std::cout << "Your number is.." << userinput;
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		//Exercises

		std::cout << "Exercises: " << std::endl;
		std::cout << std::endl;

		//A) Expected: 14 Actual: 14

		int numberA = 5;

		numberA = 9;
		numberA = 11;
		numberA = 14;
		std::cout << "A) " << numberA << std::endl;

		//B Expected: 9 Actual: 9

		int numberB = 10;
		numberB = 9;
		int thingB = 55;
		thingB = 22;
		std::cout << "B) " << numberB << std::endl;
	
		//C Expected: 21 Actual: 21

		int numberC = 3;
		numberC = 7;
		numberC = 1;
		int somethingC = 23;
		somethingC = 21;
		numberC = somethingC;
		std::cout << "C) " << numberC << std::endl;

		//D Expected: 3 Actual: 3

		int numberD = 1;
		int somethingD = 3;
		numberD = somethingD;
		std::cout << "D) " << somethingD << std::endl;

		//E Expected: 6 Actual: 6

		int x = 13;
		x = x / 2;
		std::cout << "E) " << x << std::endl;

		//F Expected: 6.5 Actual: 6.5

		float y = 13;
		y = y / 2;
		std::cout << "F)" << y << std::endl;
	}
	//Celsius to Fahrenheit
	{
		float degCelsius = 78.0f;
		float degFahrenheit = 0.0f;

		std::cout << "Input Celcius Degree" << std::endl;
		std::cin >> degCelsius;
		degFahrenheit = degCelsius * 1.8f + 32;

		//Creating a variable for the formula for Celsius to Fahrenheit

		std::cout << "Celsius to Fahrenheit)" << std::endl;
		std::cout << "Celsius: " << degCelsius << std::endl;
		std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
		std::cout << std::endl;
	}
	//Area of a Rectangle)
	{
		float rectWidth = 0.0f; // Modify this variable below.
		float rectHeight = 0.0f; // Modify this variable below.
		float rectArea = 0.0f; // Modify this variable below.

		std::cout << "Enter the Width of the Rectangle." << std::endl;
		std::cin >> rectWidth;
		std::cout << "You entered " << rectWidth << " as the Width of the Rectangle." << std::endl;
		std::cout << "Now enter the Height of the Rectangle." << std::endl;
		std::cout << std::endl;
		std::cin >> rectHeight;
		std::cout << "You entered " << rectHeight << " as the Height of the Rectangle.";
		rectArea = rectWidth * rectHeight;

		// Making the user's input for width mutliply by the user's iput for height, to get the area of the Rectangle.

		std::cout << std::endl;
		std::cout << "Area of a Rectangle)" << std::endl;
		std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
		std::cout << "Area: " << rectArea << std::endl;
		std::cout << std::endl;
	}
	//Average of Five
	{
		float a, b, c, d, e;	// Modify these variables below.
		float avg;				// Modify this variable below.
		avg = a = b = c = d = e = 0.0f; // Initialize all to zero.

		//Don't forget about Order of Operations, (PEMDAS).

		std::cout << "Enter Five Numbers To Get Their Average.\n";
		std::cin >> a >> b >> c >> d >> e;
		avg = (a + b + c + d + e) / 5.0f;

		std::cout << "Average of Five)" << std::endl;
		std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
		std::cout << "avg: " << avg << std::endl;
		std::cout << std::endl;
	}
	//Number Swap
	{
		int x1 = 13;
		int y1 = 24;
		int temp = x1;

		// adding a temp variable makes it easier to switch the values of x1 and y1, by temporarily creating a new
		// "shoebox to hold x1," before it gets it's erased.

		x1 = y1;
		y1 = temp;

		std::cout << "Number Swap)" << std::endl;
		std::cout << "x is " << x1 << std::endl;
		std::cout << "y is " << y1 << std::endl;
		std::cout << std::endl;
	}
	//Fun Facts for Your Age
	{
		int age = 0;
		int months = age;

		std::cout << "Please input your age.." << std::endl;
		std::cin >> age;
		months = age * 12;

		//You Must Add More Lines to Output to the Terminal
		std::cout << "Howdy! Your are " << age << " years old!" << std::endl;
		std::cout << "You are " << months << " months old!" << std::endl;
		std::cout << std::endl;
	}
	//1. Conforming to Conventions
	{
		int age;
		int bullet_count;
		float dog_years;
		int qty;
		float sheild_value;
		float defense_matrix_cooldown;
		int red_armor_value;
		int happiness;
		int gandhi_aggression;
	}
	//2. The Right Tool for the Job
	{
		int num;		//integer
		float num2;		//single precision floating point
		bool num3;		//true or false
		signed char num4;		//signed character representation
		unsigned char num5;		//unsined character representation
		void;		//without any value
		long int num7;	//long integer
		short int num8;	//short integer
		double num9;	//double precision floating point
		long double num10;	//long double precision floating point
	}
	//3. Number Swap (Difficulty Up)
	{
		int x = 100;
		int y = 70;

		//This basically means that 100 - 70 = 30, then 30 + 70 = 100, and finally 100 - 30 = 70. 
		//Making the two values switch.

		x = (x - y);
		y = (y + x);
		x = (y - x);

		std::cout << "Number Swap)" << std::endl;
		std::cout << "x is " << x << std::endl;
		std::cout << "y is " << y << std::endl;
	}
	system("pause");
}