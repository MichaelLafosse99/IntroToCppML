#include <iostream>

class Stack
{
private:
	int values[20];
	int count = 0;

public:

	//Top value in the stack
	int top()
	{
		std::cout << values[count - 1] << std::endl;
		return values[count];
	}

	//function that changes the value, "pops", to -1.
	void pop()
	{
		values[count - 1] = -1;
		count--;
	}
	//function that pushes a value between 0-9 onto the stack,
	//if count is less than 19 then count increments, basically
	//pointing to the next index.
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
		//if the value is 43, "+", the top of the stack and the index right before it,
		//add up and print out the combined value
		if (value == 43)
		{
			values[count - 2] += values[count - 1];
			pop();
			std::cout << "Result: " << std::endl;
			std::cout << values[count - 1];
			
		}
		//if the value is 45, "-", the top of the stack and the index right before it,
		//are subtracted and print out the result.
		if (value == 45)
		{
			values[count - 2] -= values[count - 1];
			pop();
			std::cout << "Result: " << std::endl;
			std::cout << values[count - 1];
			
		}
	}
};

//Function that is supposed to convert char to int.
int convert(char input)
{
	char op = input;
	input = '+';

	input = (int)op;
	return (int)op;
}

int main()
{
	int input;
	bool keepPlaying = true;
	Stack stack;

	std::cout << "How to use this program: " << std::endl;
	std::cout << std::endl;

	std::cout << "Input as many numbers as you want (preferably two numbers)." << std::endl;
	std::cout << "After you have entered two numbers, input either a + or a - to add or subtract the two numbers." << std::endl;
	std::cout << "Once inputting either + or - you have to input them again." << std::endl;
	std::cout << "The same thing applies if you input 'q' or 'Q'.." << std::endl;
	std::cout << std::endl;

	std::cout << "Input: " << std::endl;

	//The loop keeps going as long as the user doesn't input 'q' or 'Q',
	//if 'q' or 'Q' is inputted, it sets the loop as false, ending the program.
	while (keepPlaying)
	{
		std::cin >> input;	

		//Basically if the input fails, it puts it through this "do while" loop,
		//which makes the user input the + or - a second time.
		if (std::cin.fail())
			do
			{
				std::cin.clear();
				std::cin.ignore();
				char op;
				std::cin >> op;
				std::cout << std::endl;
				input = op;
			} while (std::cin.fail());

		if (char(input) == 'q' || char(input) == 'Q')
		{
			keepPlaying = false;
			continue;
		}
		stack.push(input);
	}
	system("pause");
}