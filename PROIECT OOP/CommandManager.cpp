#include "CommandManager.h"
#include <iostream>

using namespace std;

CommandManager::CommandManager() 
{
	repo = new RecipeRepo();
	handler = new ResourceHandler();
	handler->containersCreate();
}

CommandManager::~CommandManager()
{
	delete repo;
	delete handler;
}

void CommandManager::loadRecipes()
{
	repo->readRecipe();
}

void CommandManager::takeCommand(int order)
{
	int coffeeQuantity, waterQuantity, milkQuantity;
	switch (order)
	{
	case 0: 
		exit(0);
		break;
	case 1:
		repo->getRecipe("Espresso", coffeeQuantity, milkQuantity, waterQuantity);
		handler->boilWater(waterQuantity, 1);
		handler->grindCoffee(coffeeQuantity);
		cout << "\nBautura Espresso a fost preparata! Va multumim ca ati comandat!" << endl;
		break;
	case 2: 
		repo->getRecipe("DoubleEspresso", coffeeQuantity, milkQuantity, waterQuantity);
		handler->boilWater(waterQuantity, 1);
		handler->grindCoffee(coffeeQuantity);
		cout << "\nBautura Espresso a fost preparata! Va multumim ca ati comandat!" << endl;
		break;
	case 3: 
		repo->getRecipe("Cappuccino", coffeeQuantity, milkQuantity, waterQuantity);
		handler->boilWater(waterQuantity, 1);
		handler->grindCoffee(coffeeQuantity);
		handler->heatMilk(milkQuantity);
		cout << "\nBautura Cappuccino a fost preparata! Va multumim ca ati comandat!" << endl;
		break;
	case 4: 
		repo->getRecipe("LatteMacchiato", coffeeQuantity, milkQuantity, waterQuantity);
		handler->boilWater(waterQuantity, 1);
		handler->grindCoffee(coffeeQuantity);
		handler->heatMilk(milkQuantity);
		cout << "\nBautura Latte Macchiato a fost preparata! Va multumim ca ati comandat!" << endl;
		break;
	case 5: 
		repo->getRecipe("Water", coffeeQuantity, milkQuantity, waterQuantity);
		handler->boilWater(waterQuantity, 0);
		cout << "\nApa a fost preparata! Va multumim ca ati comandat!" << endl;
		break;
	case 6:
		repo->getRecipe("Tea", coffeeQuantity, milkQuantity, waterQuantity);
		handler->boilWater(waterQuantity, 1);
		cout << "\nCeaiul a fost preparat! Va multumim ca ati comandat!" << endl;
		break;
	default: cout << "Nu exista un produs cu acest numar. Va rugam sa incercati din nou!" << endl;
		break;
	}
}