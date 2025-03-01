#include "ResourceHandler.h"
#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

void ResourceHandler::containersCreate()
{
	int i;
	for (i = 0; i < 3; i++)
		containers.push_back(ResourceContainer((ResourceContainer::Resource)i, 100));
}

void ResourceHandler::boilWater(int quantity, int i) 
{
	list<ResourceContainer>::iterator it;
	for (it = containers.begin(); it != containers.end(); ++it)
	{
		if (it->res == 1)
		{
			if ((it->getQuantity()-quantity)<=0 || it->getQuantity()<=20)
			{
				cout << "\nNu este destula apa! Containerul trebuie reincarcat!" << endl;
				it->refill();
				cout << "Containerul a fost reincarcat cu success!" << endl;
			}
			it->changeQuantity(quantity);
			if (i == 1)
			{
				cout << "\nSe fierbe apa..." << endl;
				std::this_thread::sleep_for(std::chrono::seconds(3));
				cout << "Apa a fost fiarta!" << endl;
			}
		}
	}
}

void ResourceHandler::grindCoffee(int quantity)
{
	list<ResourceContainer>::iterator it;
	for (it = containers.begin(); it != containers.end(); ++it)
	{
		if (it->res == 0)
		{
			if ((it->getQuantity() - quantity) <= 0 || it->getQuantity() <= 20)
			{
				cout << "\nNu sunt destule boabe de cafea! Containerul trebuie reincarcat!" << endl;
				it->refill();
				cout << "Containerul a fost reincarcat cu success!" << endl;
			}
			it->changeQuantity(quantity);
			cout << "\nSe macina boabele de cafea..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			cout << "Boabele de cafea au fost macinate!" << endl;
		}
	}
}


void ResourceHandler::heatMilk(int quantity) 
{
	list<ResourceContainer>::iterator it;
	for (it = containers.begin(); it != containers.end(); ++it)
	{
		if (it->res == 2)
		{
			if ((it->getQuantity() - quantity) <= 0 || it->getQuantity() <= 20)
			{
				cout << "\nNu este destul lapte! Containerul trebuie reincarcat!" << endl;
				it->refill();
				cout << "Containerul a fost reincarcat cu success!" << endl;
			}
			it->changeQuantity(quantity);
			cout << "\nSe incalzeste laptele..." << endl;
			std::this_thread::sleep_for(std::chrono::seconds(2));
			cout << "Laptele a fost incalzit!" << endl;
		}
	}
}