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

//A.

void RevString(char* array)
{
	for (int i = 5 - 1; i >= 0; i--)
	{
		array[i];
	}
}

//B.

int CountEven(int* array, int array_len)
{
	for (int i = 0; i < array_len; i++)
	{
		int count = 0;

		if (i % 2)
		{
			count++;
			return count;
		}
	}
}

//C.

//int Maximum(double* array, int array_size)
//{
//	double *maximum = array;
//
//	for (int i = 0; i < array_size; i++)
//	{
//		if (array[i] > *maximum)
//		{
//			return *array;
//		}
//		else if (array[i] = 0)
//		{
//			return; *nullptr;
//		}
//	}
//}

//D.
bool contains(char* array, char search_value)
{
	if (array == &search_value)
	{
		return 1;
	}
	else
	{
		return 0;
	}
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

	int num[4] = { 2, 4, 6 };
	int *ptrNum = &num[0];

	reverseArray(ptrNum, 3);

	//Exercises

	//6.)

	//A.

	char string[5] = { "Mike" };
	char *ptrString = &string[0];

	RevString(ptrString);

	//B.

	int even[4] = { 1, 2, 3, 4 };
	int *ptrEven = &even[0];

	CountEven(ptrEven, 4);

	//C.
	//Need Help On
	//double numb[3] = { 2, 5, 1 };
	//double*ptrNumb = numb;

	//Maximum(ptrNumb, 3);

	//D.
	char name[255] = { "Mike" };
	char *ptrName = &name[0];

	contains(ptrName, 'M');

	system("pause");
}