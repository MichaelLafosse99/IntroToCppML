#include <iostream>
int main()

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

	float numC;
	float numD;
	float sum2;

	numC = 2;
	numD = 3;
	sum2 = numC + numD;

	std::cout << sum2 << std::endl;

	int userinput;

	std::cout << "Input a whole number" << std::endl;
	std::cin >> userinput;
	std::cout << "Your number is.." << userinput;

	std::cout << "Put in your second number" << std::endl;
	std::cin >> userinput;
	
	std::cout << userinput + userinput << std::endl;


	system("pause");
}