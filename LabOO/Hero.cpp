#include "Hero.h"

//function that makes a hero take damage with calling another functio
void Hero::Fight(Hero & hero)
{
	mAttack = rand() % 101;
	hero.TakeDamage(mAttack);
}
//Function to check if hero's health is greater than 0.
bool Hero::IsAlive()
{
	return (mHealth > 0);
}
//Deals damage to a hero.
void Hero::TakeDamage(int amountD)
{
	mHealth -= amountD;
}
//Prints out a hero's name.
void Hero::PrintName()
{
	std::cout << (char*) mName;
}
//Prints out a hero's attack name, depending on their attack number.
void Hero::PrintAttack()
{
	std::cout << (char*)mNameAttack;
}
//Displays the damage done to a hero.
void Hero::PrintDamage()
{
	std::cout << "Doing " << mAttack  << " " << "Damage";
}
//Displays the hero's (who was just damaged) current health.
void Hero::PrintCurrentHealth()
{
	std::cout << "Their Current Health is: " << mHealth;
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

	if (mAttack <= 10)
	{
		
		mNameAttack = "Grazed";
	}
	if (mAttack > 10 && mAttack <= 20)
	{
		
		mNameAttack = "Shanked";
	}
	if (mAttack > 20 && mAttack <= 40)
	{
		
		mNameAttack = "Blasted";
	}
	if (mAttack > 40 && mAttack <= 60)
	{
		
		mNameAttack = "Spartan Kicked";
	}
	if (mAttack > 60 && mAttack <= 80)
	{
		
		mNameAttack = "Used A Rusty Spoon On";
	}
	if (mAttack > 80 && mAttack <= 99)
	{
		
		mNameAttack = "Threw A Car At";
	}
	if (mAttack == 100)
	{
		
		mNameAttack = "Obliterated";
	}
}
//Changes Hero Name
void Hero::ChangeHeroName(const char* name)
{
	mName = name;
}
