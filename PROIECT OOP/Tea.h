#pragma once
#include "Recipe.h"
#include <vector>

class Tea : public Recipe
{
private:
	int waterQuantity;
public:
	Tea(vector<pair<Resource, int>> resources);
	int getWaterQuantity();
	void showInfo();
};
