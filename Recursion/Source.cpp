#include <iostream>

//1.)

int fibSeq(int number)
{
	int num1 = 0;
	int num2 = 1;

	for (int i = 0; i < number; i++)
	{
		if (i == 0)
		{
			std::cout << num2 << " ";
		}
		else
		{
			int num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
			std::cout << num3 << " ";
		}
	}
	return 0;
}

//2.)

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

int main()
{

	//1.)

	fibSeq(8);
	std::cout << std::endl;
	std::cout << std::endl;

	//2.)

	power(2, 5);

	system("pause");
}