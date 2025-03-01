#pragma once
#include "Recipe.h"
#include <vector>

class Cappuccino: public Recipe 
{
private:
	int grindDuration;
	int boilMilk;
	int coffeeQuantity;
	int milkQuantity;
	int waterQuantity;
public: 
	Cappuccino(vector<pair<Resource, int>> resources, int grindDuration, int boilMilk);
    int getGrindDuration();
    int getHeatMilkDuration();
    int getCoffeeQuantity();
    int getMilkQuantity();
	int getWaterQuantity();
	void showInfo();
};
