#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>

class Hero
{
private:
	int mHealth;
	int mAttack;
	char* mName;
	char* mNameAttack;

public:
	//Required Functions
	void Fight(Hero&);
	bool IsAlive();
	void TakeDamage(int amountD);
	//Custom Functions
	void PrintName();
	Hero();
	void ChangeAttackName();
	void ChangeHeroName(char* name);
};