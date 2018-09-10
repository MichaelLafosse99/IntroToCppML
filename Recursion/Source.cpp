#include <iostream>

//1.)

int fibSeq(int num)
{
	if (num != 1 && num != 0)
	{
		return fibSeq(num - 1) + fibSeq(num - 2);
	}

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
	//Only printing the final number
	std::cout << fibSeq(8);
	std::cout << std::endl;

	//2.)

	power(2, 5);

	system("pause");
}