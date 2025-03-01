#pragma once
#include "Recipe.h"


class Espresso: public Recipe 
{
private:
	int grindDuration;
	int coffeeQuantity;
	int waterQuantity;
public: 
	Espresso(vector<pair<Resource, int>> resources, int grindDuration);
    int getGrindDuration();
    int getCoffeeQuantity();
    int getWaterQuantity();
	void showInfo();
};
