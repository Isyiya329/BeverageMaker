#pragma once
#include <vector>
#include <list>
#include <string>
#include <iostream>

using namespace std;


class Recipe
{
public:
	Recipe();
	enum Resource { COFFEE, WATER, MILK };
	vector<pair<Resource, int>> resources;
	string name;
	string getName();
	//void showRecipe(list<Recipe> recipes);
};
