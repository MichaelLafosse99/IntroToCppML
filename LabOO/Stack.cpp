#include "Stack.h"

Hero Stack::Top()
{
	mData[mCount].PrintName();
	return Hero();
}

bool Stack::Pop()
{
	mData[mCount-- - 1];
	return false;
}

bool Stack::Push(Hero * ptr)
{
	mData[mCount++] = *ptr;
	return false;
}

bool Stack::IsEmpty()
{
	return (mCount == 0);
}

bool Stack::IsFull()
{
	return (mCount == 10);
}

Stack::Stack()
{
	mCount = 0;
}


