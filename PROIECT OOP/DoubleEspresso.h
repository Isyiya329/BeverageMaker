#pragma once
#include "Recipe.h"


class DoubleEspresso : public Recipe
{
private:
	int grindDuration;
	int coffeeQuantity;
	int waterQuantity;
public:
	DoubleEspresso(vector<pair<Resource, int>> resources, int grindDuration);
	int getGrindDuration();
	int getCoffeeQuantity();
	int getWaterQuantity();
	void showInfo();
};
