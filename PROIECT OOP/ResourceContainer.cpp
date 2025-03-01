#include "ResourceContainer.h"

ResourceContainer::ResourceContainer(Resource res, int currentQ)
{
	this->res = res;
	this->currentQ = currentQ;
}

void ResourceContainer::changeQuantity(int a) 
{
	currentQ = currentQ - a;
}
int ResourceContainer::getQuantity()
{
	return currentQ;
}
void ResourceContainer::refill()
{
	currentQ = maxQ;
}