#include "DoubleEspresso.h"

DoubleEspresso::DoubleEspresso(vector<pair<Resource, int>> resources, int grindDuration)
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
int DoubleEspresso::getGrindDuration()
{
	return grindDuration;
}
int DoubleEspresso::getCoffeeQuantity()
{
	return coffeeQuantity;
}
int DoubleEspresso::getWaterQuantity()
{
	return waterQuantity;
}
void DoubleEspresso::showInfo()
{
	cout << "\nReteta Double Espresso:" << endl;
	cout << "Cantitate de boabe de cafea: " << coffeeQuantity << endl;
	cout << "Cantitate de apa: " << waterQuantity << endl;
}