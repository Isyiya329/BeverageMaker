#include "Water.h"
#include <iostream>

using namespace std;

Water::Water(vector<pair<Resource, int>> resources)
{
	vector<pair<Resource, int>>::iterator resIt;
	for (resIt = resources.begin(); resIt != resources.end(); ++resIt)
		waterQuantity = resIt->second;
}
int Water::getWaterQuantity()
{
	return waterQuantity;
}
void Water::showInfo()
{
	cout << "\nReteta Apa:" << endl;
	cout << "Cantitate de apa: " << waterQuantity << endl;
}