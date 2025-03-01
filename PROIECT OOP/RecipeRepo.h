#pragma once
#include "Recipe.h"

class RecipeRepo
{
private:
	Recipe *recipe;
	string filePath;
	list<Recipe>recipes;
public:
	RecipeRepo();
	int readRecipe();
	void getRecipe(string name, int &coffeeQuantity, int &milkQuantity, int &waterQuantity);
	Recipe::Resource getResourceName(string name);
};
