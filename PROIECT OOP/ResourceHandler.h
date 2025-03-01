#pragma once
#include "ResourceContainer.h"
#include <list>
using namespace std;

class ResourceHandler 
{
private:
	list<ResourceContainer>containers;
public: 
	void boilWater(int quantity, int i);
	void grindCoffee(int quantity);
	void heatMilk(int quantity);
	void containersCreate();
};