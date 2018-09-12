#include <iostream>


void reverseArray(int *ptr_num, int size)
{
	//pointing to the pointer (ptrNum) which points to the address 
	//of the index of 0 and it's value is 2

	int *first = ptr_num;

	//pointing to the last address, which value is 6

	int *last = ptr_num + (size - 1);


	//temp variable to assign temp the value of *first
	//then assign *first the value of *last
	//and finally *last the value of *first

	int temp;

	for (int i = 0; i < size / 2; i++)
	{
		temp = *first;
		*first = *last;
		*last = temp;

	}
	//this works because temp is pointer first, which is index of 0 or value 2
	//then first is assigned the value of last, which is index of 3 or value 6
	//then last is assigned the value of temp, which is the index of 0 or value 2
}

bool contains(char* array, char search_value)
{
	


}

int main()
{
	int nums[6];
	int*ptr;
	
	//pointer pointing at the beginning address of the array
	ptr = &nums[0];
	for (int i = 0; i < 6; i++)
	{
		//Dereferencing the pointer and assigning a new value
		*ptr = 1;
		ptr++;
	}

	int num[3] = { 2, 4, 6 };
	int *ptrNum = &num[0];

	reverseArray(ptrNum, 3);

	//Exercises

	//6.)
	char name[255] = { "Mike" };
	char *ptrName;

	ptrName = &name[0];

	contains(name, 'M');

	system("pause");
}