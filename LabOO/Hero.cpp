#include "Hero.h"
//function that makes a hero take damage with calling another function

void Hero::Fight(Hero & hero)
{
	hero.TakeDamage(mAttack);
}

bool Hero::IsAlive()
{
	return (mHealth > 0);
}

void Hero::TakeDamage(int amountD)
{
	mHealth -= amountD;
}

void Hero::PrintName()
{
	std::cout << (char*) mName;
}
//What each hero has
Hero::Hero()
{
	mNameAttack = new char[255];
	mName = new char[255];
	mHealth = 100;
	ChangeAttackName();
	
}
//Changes the attack power, and name based on that power.
void Hero::ChangeAttackName()
{
	
	mAttack = rand() % 101;

	if (mAttack < 5)
	{
		mNameAttack = "Grazed";
	}
	if (mAttack > 5)
	{
		mNameAttack = "Whooped dat ass";
		
	}
}
//Changes Hero Name
void Hero::ChangeHeroName(const char* name)
{
	mName = name;
}
