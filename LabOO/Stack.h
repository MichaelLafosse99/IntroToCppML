#pragma once
#include "Hero.h"

class Stack
{
private:
	//mData is all of the heros
	Hero mData[20];
	int mCount;
	Hero *ptr;

public:
	Hero Top();
	bool Pop();
	bool Push(Hero*);
	bool IsEmpty();
	bool IsFull();
};
