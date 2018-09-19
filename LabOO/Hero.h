#pragma once
#include <iostream>

class Hero
{
private:
	int mHealth;
	int mPower;

public:
	void Fight(Hero&);
	bool IsAlive();
	void TakeDamage(int);
};