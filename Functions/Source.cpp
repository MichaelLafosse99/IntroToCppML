#include <iostream>
#include <string>

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

	//1.)



	system("pause");
}