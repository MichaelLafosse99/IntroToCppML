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

		std::cout << "Enter Your Name." << std::endl;
		std::cin.getline(stuff, 255);

		//Do not need to print

		std::cout << "Your Name Is:" << std::endl;
		std::cout << stuff << std::endl;

		//2.)
		int count = 0;

		for (int i = 0; i < 255; i++)
		{

		}

	}

	system("pause");
}