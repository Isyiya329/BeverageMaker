#include "LatteMacchiato.h"

LatteMacchiato::LatteMacchiato(vector<pair<Resource, int>> resources, int grindDuration, int boilMilk)
{
	this->grindDuration = grindDuration;
	this->boilMilk = boilMilk;
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
		case 2:
			milkQuantity = resIt->second;
			break;
		}
}
int LatteMacchiato::getGrindDuration() 
{
	return grindDuration;
}

int LatteMacchiato::getHeatMilkDuration() 
{
	return boilMilk;
}

int LatteMacchiato::getCoffeeQuantity() 
{
	return coffeeQuantity;
}

int LatteMacchiato::getMilkQuantity() 
{
	return milkQuantity;
}

int LatteMacchiato::getWaterQuantity() 
{
	return waterQuantity;
}
void LatteMacchiato::showInfo()
{
	cout << "\nReteta Latte Macchiato:" << endl;
	cout << "Cantitate de boabe de cafea: " << coffeeQuantity << endl;
	cout << "Cantitate de apa: " << waterQuantity << endl;
	cout << "Cantitate de lapte: " << milkQuantity << endl;
}