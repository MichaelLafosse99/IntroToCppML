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
	void ChangeAttackName();
	void PrintName();
	void PrintAttack();
	void PrintDamage();
	void PrintCurrentHealth();
	//Operator
	bool operator != (const Hero& otherHero);
};