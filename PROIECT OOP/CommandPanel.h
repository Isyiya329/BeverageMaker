#pragma once
#include "CommandManager.h"
#include <iostream>

using namespace std;

class CommandPanel 
{
private:
	CommandManager *manager;
public: 
    CommandPanel();
	~CommandPanel();
    void showMenu();
	void takeCommand(int k);
};