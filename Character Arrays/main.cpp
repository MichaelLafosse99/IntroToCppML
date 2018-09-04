#include <iostream>

int main()
{

	char name[] = "Michael";

	for (int i = 0; i < 7; i++)
	{
		std::cout << int(name[i]) << std::endl;
	}

	std::cout << std::endl;

	char nameTwo[] = "AIEUS";
	int count = 0;

	while (nameTwo[count] != '\0')
	{
		count++;
	}

	std::cout << count;
	std::cout << std::endl;
	char nameThree[] = "Randy";
	char nameFour[] = "Brett";

	int lenghtOne = 0;
	int lenghtTwo = 0;

	for (int i = 0; nameThree[lenghtOne] != '\0'; i++)
	{
		lenghtOne++;
	}

	for (int i = 0; nameFour[lenghtTwo] != '\0'; i++)
	{
		lenghtTwo++;
	}

	bool same = true;

	if (lenghtOne == lenghtTwo)
	{
		for (int i = 0; i < lenghtOne; i++)
		{
			if (nameThree[i] == nameFour[i])
			{
				continue;
			}
			else
			{
				same = false;
				break;
			}
		}
	}
	else
	{
		same = false;
	}

	std::cout << same << std::endl;

	//Exercises
	{
		//1.)

		char stuff[255];
		int length = 0;

		std::cout << "Enter Your Name." << std::endl;
		std::cin.getline(stuff, 255);
		std::cout << std::endl;

		//Do not need to print

		std::cout << "Your Name Is:" << std::endl;
		std::cout << stuff << std::endl;

		std::cout << std::endl;

		//2.)

		std::cout << "Your name reversed is: " << std::endl;

		for (int i = 0; stuff[length] != '\0'; i++)
		{
			length++;
		}



		for (int i = length - 1; i >= 0; i--)
		{
			std::cout << stuff[i];
		}

		std::cout << std::endl;
		std::cout << std::endl;

		//3.)
		//having trouble with this..comeback to later

		//char names[5][255];
		//int nameL = 0;

		//for (int i = 0; names[nameL][nameL] != '\0'; i++)
		//{
		//	nameL++;
		//}

		//std::cout << "Enter five first names." << std::endl;
		//std::cout << std::endl;

		//for (int i = 0; i < 5; i++)
		//{
		//	std::cin.getline(names[i], 255);
		//}

		//for (int i = nameL - 1; i >= 0; i--)
		//{
		//	std::cout << names[i];
		//}

		//4.)

		//std::cout << '\a';

		//.5)
		//Need to add way to check for special characters
		{
			char password[8];
			int length = 0;
			int count;
			bool upperCase = 0, lowerCase = 0, number = 0, special = 0;

			std::cout << "Enter a password." << std::endl;
			std::cout << "It must be 8 characters long." << std::endl;
			std::cout << "Your password must include at least one uppercase letter, " << std::endl;
			std::cout << "at least one number, and at least one special character." << std::endl;
			std::cin.getline(password, 8);

			for (int i = 0; password[length] != '\0'; i++)
			{
				length++;
			}
			if (length < 7)
			{
				std::cout << "Your password must be at least 8 characters long." << std::endl;
				std::cin.getline(password, 8);
			}

			for (count = 0; count < length; count++)
			{
				if (isupper(password[count]))
				{
					upperCase = 1;
				}
				else if (islower(password[count]))
				{
					lowerCase = 1;
				}
				else if (isdigit(password[count]))
				{
					number = 1;
				}
			}
				if (!upperCase)
				{
					std::cout << "The password doesn't have a uppercase letter." << std::endl;
				}
				if (!lowerCase)
				{
					std::cout << "The password doesn't have a lowercase letter." << std::endl;
				}
				if (!number)
				{
					std::cout << "The password doesn't have a number." << std::endl;
				}
		}

		//6.)



		//7.)

		//char name[4] = "John";
		//it's trying to assign name[4] to John
		//the array is too small.
		//it needs to change the size to five instead of 4

		//char name[32];
		//cout << name;
		//it wants to print out the array
		//nothing is in it
		//either put something in the array, or it something

		//char name[7] = "Donald";
		//char surname[7] = "Knuth";

		//strcat(name, surname);
		//I think it wants to concatenate the string name
		//the second array is not needed
		//make the first array concatenate into Knuth

		//char errorMsg[5] = "Stop";
		//errorMsg[strlen(errorMsg)] = "!";

		//std::cout << errorMsg;
		//it's trying to assign a new value to char errorMsg
		//the problem is that you assign it a new value like that

		//8.)

	}
	system("pause");
}