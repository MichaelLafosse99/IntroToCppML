#include <iostream>

int main()

{
	//int number;
	//number = 5;

	//std::cout << number << std::endl;

	//int numA;
	//int	numB;
	//int sum;

	//numA = 18;
	//numB = 10;
	//sum = numA + numB;

	//std::cout << sum << std::endl;

	//float numC;
	//float numD;
	//float sum2;

	//numC = 2;
	//numD = 3;
	//sum2 = numC + numD;

	//std::cout << sum2 << std::endl;

	//int userinput;

	//std::cout << "Input a whole number" << std::endl;
	//std::cin >> userinput;
	//std::cout << "Your number is.." << userinput;

	//Exercises

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
	//Celsius to Fahrenheit

	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f;
	

	std::cout << "Input Celcius Degree" << std::endl;
	std::cin >> degCelsius; 
	degFahrenheit = degCelsius * 1.8f + 32;



	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius: " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	system("pause");
}