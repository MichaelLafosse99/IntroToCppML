#include "Stack.h"

Stack::Stack()
{
	mCount = 0;
}

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
	if (IsFull() == false)
	{
		mData[mCount++] = *ptr;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::IsEmpty()
{
	return (mCount == 0);
}

bool Stack::IsFull()
{
	return (mCount == 10);
}


