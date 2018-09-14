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
	stock stockTres;
};

struct player
{
	int gold;
	stock stockA;
	stock stockB;
	stock stockC;

	void sellItems(stock &stockOne, int quantity, shop &Myshop, stock &stockTwo)
	{
		if  (Myshop.gold >= stockOne.itemOne.cost *quantity && quantity >= stockTwo.quantity)
		{
			stockOne.quantity -= quantity;
			gold += stockOne.itemOne.cost *quantity;

			stockTwo.quantity += quantity;
			Myshop.gold -= stockOne.itemOne.cost *quantity;
		}
	}

	void buyItems(stock &stockOne, int quantity, shop &Myshop, stock &stockTwo)
	{
		if (gold >= stockOne.itemOne.cost *quantity && quantity >= stockTwo.quantity)
		{
			stockOne.quantity += quantity;
			gold -= stockOne.itemOne.cost *quantity;

			stockTwo.quantity -= quantity;
			Myshop.gold += stockOne.itemOne.cost *quantity;
		}
	}
};

int main()
{

	//The store's sell price
	item sword = { 50 };
	item sheild = { 100 };
	item food = { 10 };

	//The player's sell price
	item playerSword = { 10 };
	item playerSheild = { 20 };
	item playersFood = { 5 };

	//stock of the shop
	stock shopSwords = { sword, 10 };
	stock shopSheilds = { sheild, 10 };
	stock shopFood = { food, 30 };

	//stock of the player
	stock playerSwords = { playerSword, 1 };
	stock playerSheilds = { playerSheild, 1 };
	stock playerFood = { playersFood, 0 };

	//The shop's gold amount and what items are in the shop's stocks
	shop Myshop = { 1000, shopSwords, shopSheilds, shopFood };
	Myshop.stockUno = shopSwords;

	//The player's gold amount and what items are in the player's stocks
	player Me = {100, playerSwords, playerSheilds, playerFood};
	Me.stockA = playerSwords;
	Me.stockB = playerSheilds;

	//The store's item name
	sword.name = "Excalibur";
	sheild.name = "Big Sheild";
	food.name = "Potato";

	//The player's item name
	playerSword.name = "Rusty old sword";
	playerSheild.name = "Wooden Log";
	playersFood.name = "Carrot";

	//Calling the function for the player to sell itmes to the shop
	Me.sellItems(Me.stockA, 1, Myshop, Myshop.stockUno);
	Me.sellItems(Me.stockB, 1, Myshop, Myshop.stockDos);
	Me.sellItems(Me.stockC, 1, Myshop, Myshop.stockTres);

	//Calling the function for the player to buy items from the shop
	Me.buyItems(Me.stockA, 1, Myshop, Myshop.stockUno);
	Me.buyItems(Me.stockB, 1, Myshop, Myshop.stockDos);
	Me.buyItems(Me.stockC, 1, Myshop, Myshop.stockTres);

	system("pause");
}