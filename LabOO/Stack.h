#pragma once
#include "Hero.h"

class Stack
{
private:
	//mData is all of the heros
	Hero mData[6];
	int mCount;
	int numHeroes;

public:
	Stack();
	Hero& Top();
	bool Pop();
	bool Push(Hero*);
	bool IsEmpty();
	bool IsFull();
	Hero& RandHero(int num);
	bool TeamIsDead();
	void OrganizeHeroes();
	int& Count();
};