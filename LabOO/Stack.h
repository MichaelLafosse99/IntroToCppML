#pragma once
#include "Hero.h"

class Stack
{
private:
	//mData is all of the heros
	Hero mData[10];
	int mCount;

public:
	Stack();
	Hero Top();
	bool Pop();
	bool Push(Hero*);
	bool IsEmpty();
	bool IsFull();
	

};
