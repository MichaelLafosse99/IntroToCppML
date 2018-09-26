#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>

class Hero
{
private:
	int mHealth;
	int mAttack;
	const char* mName;
	const char* mNameAttack;

public:
	//Required Functions
	void Fight(Hero&);
	bool IsAlive();
	void TakeDamage(int amountD);

	//Custom Functions
	void ChangeHeroName(const char* name);
	Hero();
	Hero(const char* name)
	{
		mNameAttack = new char[255];
		mName = new char[255];
		mHealth = 100;
		mName = name;
		ChangeAttackName();
	}
	void ChangeAttackName();
	void PrintName();
	void PrintAttack();
	void PrintDamage();
	void PrintCurrentHealth();
	int GetHealth()
	{
		return mHealth;
	}

	//Operators
	bool operator != (const Hero& otherHero);
	bool operator < (const Hero& otherHero);
};