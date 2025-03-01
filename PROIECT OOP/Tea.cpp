#include "Tea.h"
#include <iostream>

using namespace std;

Tea::Tea(vector<pair<Resource, int>> resources)
{
	vector<pair<Resource, int>>::iterator resIt;
	for (resIt = resources.begin(); resIt != resources.end(); ++resIt)
		waterQuantity = resIt->second;
}
int Tea::getWaterQuantity()
{
	return waterQuantity;
}
void Tea::showInfo()
{
	cout << "\nReteta Ceai:" << endl;
	cout << "Cantitate de apa: " << waterQuantity << endl;
}