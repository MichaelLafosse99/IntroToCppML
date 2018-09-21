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
	if (IsEmpty())
	{
		mCount = 0;
	}
	return false;
}

bool Stack::IsFull()
{
	if (IsFull())
	{
		mCount = 20;
	}
	return false;
}
