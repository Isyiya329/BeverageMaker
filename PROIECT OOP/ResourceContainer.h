#pragma once

class ResourceContainer 
{
private:
	int lowQ = 20;
	int maxQ = 100;
	int currentQ;
public: 
	enum Resource { COFFEE, WATER, MILK }res;
	int ingredientNumber;
	ResourceContainer(Resource res, int currentQ);
	int getQuantity();
	void changeQuantity(int a);
	void refill();
};