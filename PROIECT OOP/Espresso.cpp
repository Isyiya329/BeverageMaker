#include "Espresso.h"

Espresso::Espresso(vector<pair<Resource, int>> resources, int grindDuration)
{
	this->grindDuration = grindDuration;
	vector<pair<Resource, int>>::iterator resIt;
	for (resIt = resources.begin(); resIt != resources.end(); ++resIt)
		switch (resIt->first)
		{
		case 0:
			coffeeQuantity = resIt->second;
			break;
		case 1:
			waterQuantity = resIt->second;
			break;
		}
}
int Espresso::getGrindDuration() 
{
	return grindDuration;
}
int Espresso::getCoffeeQuantity() 
{
	return coffeeQuantity;
}
int Espresso::getWaterQuantity() 
{
	return waterQuantity;
}
void Espresso::showInfo()
{
	cout << "\nReteta Espresso:" << endl;
	cout << "Cantitate de boabe de cafea: " << coffeeQuantity << endl;
	cout << "Cantitate de apa: " << waterQuantity << endl;
}