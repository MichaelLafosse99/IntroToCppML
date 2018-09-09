#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int print(std::string words)
{
	std::cout << words;
	return 0;
}

int printLetters(std::string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		std::cout << "Letters: " << input[i] << std::endl;
	}
	return 0;
}

bool IsMultipleOfThree(int value)
{
	return value % 3 == 0;
}

void PrintValuesTo10()
{
	for (int i = 0; i <=10; i++)
	{
		if (i < 10)
		{
			std::cout << i << ", ";
		}
		if (i == 10)
		{
			std::cout << i;
		}
	}
}

void PrintValuesBetween(int low, int high)
{
	for (int i = low + 1; i < high; i++)
	{
		std::cout << i << ", ";
	}	
}

int ArraySum(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}

void RevArray(int arr[], int size)
{
	int temp;

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[(size -1) - i];
		arr[size - 1 - i] = temp;
	}
	
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
}

// 5.)
//Need Help On
int cointToss()
{
	int input = 0;
	int num;
	
	num = rand() % 2 + 1;

	std::cout << "How many times do you want to flip the coin?" << std::endl;
	std::cin >> input;
	
	input = input * num;

	if (num == 1)
	{
		std::cout << "Heads" << std::endl;
	}
	else
	{
		std::cout << "Tails" << std::endl;
	}
	return 0;
}

//10.)

//int MultiplyByIndex(int inputArray[], int outputArray[], int size)
//{
//	outputArray[1] = inputArray[1] * 1;
//	outputArray[2] = inputArray[2] * 2;
//	outputArray[3] = inputArray[3] * 3;
//	outputArray[4] = inputArray[4] * 4;
//	outputArray[5] = inputArray[5] * 5;
//	outputArray[6] = inputArray[6] * 6;
//	outputArray[7] = inputArray[7] * 7;
//	return 0;
//}

//15.)

int power(int x, int y)
{
	int num;
	num = 1;
	for (int i = 0; i < y; i++)
	{
		num *= x;
	}
	std::cout << x << "^" << y << " = " << num;
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}

//16.)

//int lookSay(int arr[], int size)
//{
//
//}

//17.)

int playerChoice = 0;
int computerChoice = 0;

int inputChoice()
{
	int input;

	std::cout << "Rock, Paper, or Scissors?" << std::endl;
	std::cout << "1.), 2.), 3.)" << std::endl;
	std::cin >> input;
	std::cout << std::endl;
	return input;
}

int gameover()
{
	if (playerChoice == 1)
	{
		if (computerChoice == 1)
		{
			std::cout << "You both chose rock.. DRAW!" << std::endl;
		}
		if (computerChoice == 2)
		{
			std::cout << "Paper beats rock.. Computer Wins!" << std::endl;
		}
		if (computerChoice == 3)
		{
			std::cout << "Rock beats scissors.. You Win!" << std::endl;
		}
	}

	if (playerChoice == 2)
	{
		if (computerChoice == 1)
		{
			std::cout << "Paper beats rock.. You Win!" << std::endl;
		}
		if (computerChoice == 2)
		{
			std::cout << "You both chose paper.. DRAW!" << std::endl;
		}
		if (computerChoice == 3)
		{
			std::cout << "Scissors beats paper.. Computer Wins!" << std::endl;
		}
	}

	if (playerChoice == 3)
	{
		if (computerChoice == 1)
		{
			std::cout << "Rock beats scissors.. Computer Wins!" << std::endl;
		}
		if (computerChoice == 2)
		{
			std::cout << "Scissors beats paper.. You Win!" << std::endl;
		}
		if (computerChoice == 3)
		{
			std::cout << "You both chose scissors.. DRAW!" << std::endl;
		}
	}
	std::cout << std::endl;
	return 0;
}

int main()
{
	print("This \n");
	print("is \n");
	print("my \n");
	print("function.. \n");
	print("\n");

	printLetters("Hello");
	std::cout << std::endl;

	bool test = IsMultipleOfThree(6);

	PrintValuesTo10();

	std::cout << std::endl;

	PrintValuesBetween(10, 15);

	std::cout << std::endl;
	int myArray[4] = { 4, 3, 2, 1 };
	
	std::cout << ArraySum(myArray, 4);
	std::cout << std::endl;

	RevArray(myArray, 4);

	//Homework

	//5.)

	//cointToss();

	//10.)

	//int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	//int output_array[7] = {};
	//MultiplyByIndex(integer_array, output_array, 7);
	
	//15.)

	power(2, 4);

	//16.)


	//17.)

		std::cout << "Can you beat the computer at Rock, Paper, Scissors?" << std::endl;
		std::cout << std::endl;

		srand(time(NULL));
		computerChoice = rand() % 3 + 1;
		playerChoice = inputChoice();

		std::cout << "The computer chose " << computerChoice << std::endl;
		std::cout << std::endl;

		gameover();


	system("pause");
}