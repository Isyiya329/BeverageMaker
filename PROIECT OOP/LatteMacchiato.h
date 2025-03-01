#pragma once
#include "Recipe.h"

class LatteMacchiato : public Recipe
{
private:
	int grindDuration;
	int boilMilk;
	int coffeeQuantity;
	int milkQuantity;
	int waterQuantity;

public:
	LatteMacchiato(vector<pair<Resource, int>> resources, int grindDuration, int boilMilk);
	int getGrindDuration();
	int getHeatMilkDuration();
	int getCoffeeQuantity();
	int getMilkQuantity();
	int getWaterQuantity();
	void showInfo();
};