#include "Recipe.h"
#include <iostream>

using namespace std;
Recipe::Recipe()
{

}
string Recipe::getName()
{
	return name;
}
/*
void Recipe::showRecipe(list<Recipe>recipes)
{
	list<Recipe>::iterator it;
	for (it = recipes.begin(); it != recipes.end(); ++it)
	{
		cout << "Nume reteta: " << it->getName() << endl;
		vector<pair<Resource, int>>::iterator resIt;
		for (resIt = it->resources.begin(); resIt != it->resources.end(); ++resIt)
			cout << resIt->first << " " << resIt->second << endl;
		cout << "-------------" << endl;
	}
}
*/