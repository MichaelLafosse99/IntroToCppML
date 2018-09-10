#include <iostream>
#include <string>

struct item
{
	int cost;
	std::string name;
};

struct stock
{
	item itemOne;
	int quantity;
};

struct shop
{
	int gold;
	stock stockUno;
	stock stockDos;
};

struct player
{
	int gold;
	stock stockA;
	stock stockB;

	void sellItems(stock &stockOne, int quantity, shop &Myshop, stock &stockTwo)
	{
		stockOne.quantity -= quantity;
		gold += stockOne.itemOne.cost *quantity;

		stockTwo.quantity += quantity;
		Myshop.gold-= stockOne.itemOne.cost *quantity;
	}

	void buyItems(stock &stockOne, int quantity, shop &Myshop, stock &stockTwo)
	{
		stockOne.quantity += quantity;
		gold -= stockOne.itemOne.cost *quantity;

		stockTwo.quantity -= quantity;
		Myshop.gold += stockOne.itemOne.cost *quantity;
	}
};

int main()
{
	//stock of the shop
	stock shopSwords = { 10 };
	stock shopSheilds = { 10 };
	stock shopFood = { 30 };

	//stock of the player
	stock playerSwords = { 1 };
	stock playerSheilds = { 1 };
	stock playerFood = { 0 };

	//The shop's gold amount and what items are in the shop's stocks
	shop Myshop;
	Myshop.gold = 1000;
	Myshop.stockUno = shopSwords;

	//The player's gold amount and what items are in the player's stocks
	player Me;
	Me.gold = 100;
	Me.stockA = playerSwords;
	Me.stockB = playerSheilds;
	
	//The store's sell price
	item sword = { 50 };
	item sheild = { 100 };
	item food = { 10 };

	//The player's sell price
	item playerSword = { 10 };
	item playerSheild = { 20 };
	item playersFood = { 5 };

	//The store's item name
	sword.name = "Excalibur";
	sheild.name = "Big Ass Sheild";
	food.name = "Potatoe";

	//The player's item name
	playerSword.name = "Rusty old sword";
	playerSheild.name = "Wooden Log";
	playersFood.name = "Carrot";

	Me.sellItems(Me.stockA, 1, Myshop, Myshop.stockUno);
	Me.sellItems(Me.stockB, 1, Myshop, Myshop.stockDos);

	system("pause");
}