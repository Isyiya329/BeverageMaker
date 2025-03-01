#pragma once
#include "Recipe.h"
#include <vector>

class Water : public Recipe
{
private:
	int grindDuration;
	int boilMilk;
	int coffeeQuantity;
	int milkQuantity;
	int waterQuantity;
public:
	Water(vector<pair<Resource, int>> resources);
	int getWaterQuantity();
	void showInfo();
};
