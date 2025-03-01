#include "RecipeRepo.h"
#include <fstream>
#include <iostream>
#include <string>
#include "Cappuccino.h"
#include "LatteMacchiato.h"
#include "Espresso.h"
#include "Water.h"

using namespace std;

RecipeRepo::RecipeRepo()
{
	recipe = new Recipe();
}
int RecipeRepo::readRecipe()
{
	int i;
	ifstream in("retete.txt");
	if (!in.is_open())
	{
		cout << "Nu am putut deschide fisierul" << endl;
		return 0;
	}
	string recipeName;
	string resourceName;
	int quantity;
	while (in >> recipeName)
	{
		Recipe *recipe = new Recipe();
		recipe->name = recipeName;
		while (in >> resourceName)
		{
			if (resourceName == "--------")
				break;
			in >> quantity;
			recipe->resources.push_back(make_pair(getResourceName(resourceName), quantity));
		}
		if (recipe->name == "Cappuccino")
			Cappuccino cappuccino(recipe->resources, 20, 10);
		else if (recipe->name == "LatteMacchiato")
			LatteMacchiato latte(recipe->resources, 20, 10);
		else if (recipe->name == "Espresso")
			Espresso espresso(recipe->resources, 20);
		else if (recipe->name == "Water")
			Water water(recipe->resources);
		recipes.push_back(*recipe);
		recipe->resources.clear();
		delete recipe;
	}
	//recipe->showRecipe(recipes);
}
Recipe::Resource RecipeRepo::getResourceName(string name)
{
	if (name == "COFFEE")
		return Recipe::COFFEE;
	else if (name == "WATER")
		return Recipe::WATER;
	else if (name == "MILK")
		return Recipe::MILK;
}
void RecipeRepo::getRecipe(string name, int &coffeeQuantity, int &milkQuantity, int &waterQuantity)
{
	list<Recipe>::iterator it;
	for (it = recipes.begin(); it != recipes.end(); ++it)
	{
		if (it->getName() == name)
		{
			cout << "\nReteta pentru " << name << " este: \n" << endl;
			vector<pair<Recipe::Resource, int>>::iterator resIt;
			for (resIt = it->resources.begin(); resIt != it->resources.end(); ++resIt)
				switch (resIt->first)
				{
				case 0:
					coffeeQuantity = resIt->second;
					cout << "Cantitate de boabe de cafea: " << coffeeQuantity << endl;
					break;
				case 1:
					waterQuantity = resIt->second;
					cout << "Cantitate de lapte: " << waterQuantity << endl;
					break;
				case 2:
					milkQuantity = resIt->second;
					cout << "Cantitate de lapte: " << milkQuantity << endl;
					break;
				}
		}
	}
}