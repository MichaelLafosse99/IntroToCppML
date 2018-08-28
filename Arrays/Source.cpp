#include <iostream>

int main()
{
	char myFirstName[] = { 'M', 'I', 'C', 'H', 'A', 'E', 'L' };
	char myLastName[] = { 'L', 'A', 'F', 'O', 'S', 'S', 'E' };
	int myFirstNumbers[7];

	for (int i = 0; i < 7; i++)
	{
		myFirstNumbers[i] = (int)myFirstName[i];

		std::cout << myFirstName[i];
		std::cout << std::endl;
		std::cout << myFirstNumbers[i] << std::endl;
	}
	
	std::cout << std::endl;

	for (int i = 0; i < 7; i++)
	{
		myFirstNumbers[i] = (int)myLastName[i];

		std::cout << myLastName[i];
		std::cout << std::endl;
		std::cout << myFirstNumbers[i] << std::endl;

	}

	//1. create myarray of size 5 with the following value (12, 21, 3, 7, 13)
	//2. Iterate over the array
	//3. compare each value to every other value to see if it's greater than or less than
	//	 the other value - if greater swap.

	int myArray[5] = { 12, 21, 3, 7, 13 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; i < 5; i++)
		{
			if (myArray[i] < myArray[j])
			{
				int temp = myArray[i];
				myArray[i] = myArray[j];
				myArray[j] = myArray[i];
				
			}
		}
	}

	//create an array of type int with a size of 10
	//create a for loop that will assign the array
	//all even numbers between 0 and 20
	//expected 0 2 4 6 8 10 12 14 16 18

	int theseNumbers[10];
	int num = 0;

	for (int i = 0; i < 20; i += 2)
	{
		theseNumbers[num] = i;
		num++;
	}

	//Initialze a 3 x 3 2d array with the values 1 - 9 then
	//print the values

	int pr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << pr[i][j] << std::endl;
		}
	}

	//Exercises

	//1.)

	/*int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; //true
	int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; //False, because the size is 5 but there are 7 values
	double radii[10] = (3.2, 4.7}; //
	int table[7] = { 2, , , 27, , 45, 39 }; //
	char codes[] = { 'A', 'X', '1', '2', 's' }; //False, because you cant mix characters and integers in the same array
	int blanks[]; //True
	int collection[-20];
	int hours[3] = 8, 12, 16;*/ //False, you need to put brackets for arrays {}

	//2.)

	//a) 10
	//b) 3
	//c) 6
	//d) 14
	//e)-858993460

	//3.)

	int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << data[i] << std::endl;
	}

	//4.)

	int numbers[5];

	std::cout << "Input Five Numbers In Order" << std::endl;
	
	for (int i = 0; i < 5; i++)
	{
		std::cin >> numbers[i];
	}

	for (int i = 4; i >=0; i--)
	{
		std::cout << numbers[i] << " ";
	}
	
	//5.)

	std::cout << "Input ten numbers" << std::endl;

	int values[10];
	for (int i = 0; i < 10; i++)
	{
		std::cin >> values[i];
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (values[i] < values[j])
			{
				
			}
		}
	}

	system ("pause");
}