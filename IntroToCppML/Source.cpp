#include <iostream>
#include <string>

int main()
{
	std::string MyName = "Michael Lafosse";
	std::string MyID = "s188037";
	std::string Math = "2+2=4";
	std::string Math2 = "2x2=4";
	std::string Name1;
	std::string Name2;

	std::cout << "Name: " << MyName << std::endl;
	std::cout << std::endl;
	std::cout << "ID: " << MyID << std::endl;
	std::cout << std::endl;
	std::cout << Math << std::endl;
	std::cout << std::endl;
	std::cout << Math2 << std::endl;

	std::cout << "Please enter your first name..\n";
	std::cin >> Name1;
	std::cout << "Now please enter your last name..\n";
	std::cin >> Name2;

	std::cout << "Hello, " + Name1 + " " + Name2 + "!" + " " + "My name is Computer." << std::endl;

	system("pause");
}