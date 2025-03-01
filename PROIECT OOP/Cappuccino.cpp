#include "Cappuccino.h"

Cappuccino::Cappuccino(vector<pair<Resource, int>> resources, int grindDuration, int boilMilk)
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
int Cappuccino::getGrindDuration() 
{
	return grindDuration;
}

int Cappuccino::getHeatMilkDuration() 
{
	return boilMilk;
}

int Cappuccino::getCoffeeQuantity() 
{
	return coffeeQuantity;
}

int Cappuccino::getMilkQuantity() 
{
	return milkQuantity;
}

int Cappuccino::getWaterQuantity() 
{
	return waterQuantity;
}
void Cappuccino::showInfo()
{
	cout << "\nReteta Cappuccino:" << endl;
	cout << "Cantitate de boabe de cafea: " << coffeeQuantity << endl;
	cout << "Cantitate de apa: " << waterQuantity << endl;
	cout << "Cantitate de lapte: " << milkQuantity << endl;
}