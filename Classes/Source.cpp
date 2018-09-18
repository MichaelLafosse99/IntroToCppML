#include <iostream>

class Stack
{
private:
	int values[20];
	int count = 0;

public:
	int top()
	{
		std::cout << values[count - 1] << std::endl;
		return values[count];
	}
	void pop()
	{
		values[count - 1] = -1;
		count--;
	}
	void push(int value)
	{
		if (value <= 9 && value >= 0)
		{
			if (count < 19)
			{
				values[count] = value;
				count++;
			}
		}
		if (value == 43)
		{
			values[count - 2] += values[count - 1];
			pop();
			std::cout << "worked";
		}
		if (value == 45)
		{
			values[count -1] - values[count - 2];
			pop();
		}
	}
};

int main()
{
	int input;
	bool keepPlaying = true;
	Stack stack;
	while (keepPlaying)
	{
		std::cin >> input;		
		if(std::cin.fail())
			do
			{ 
				std::cin.clear();
				std::cin.ignore();
				char op;
				std::cin >> op;
				input = op;
			} while (std::cin.fail());
		if (char(input) == 'q')
		{
			keepPlaying = false;
			continue;
		}
		stack.push(input);
	}
	system("pause");
}