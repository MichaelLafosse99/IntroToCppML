#include "Stack.h"

Stack::Stack()
{
	mCount = 0;
}
//The hero that's on the top of the stack.
Hero& Stack::Top()
{
	return mData[mCount - 1];
}
//Pop's off the dead heroes.
bool Stack::Pop()
{
	mData[mCount-- - 1];
	return false;
}
//Pushes a hero on either team, if not full.
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

Hero& Stack::RandHero(int num)
{
	return mData[num];
}

bool Stack::TeamIsDead()
{
	for (int i = 0; i < numHeroes; i++)
	{
		if (mData[i].IsAlive())
		{
			return false;
		}
	}
	return true;
}


