#include "CommandPanel.h"

CommandPanel::CommandPanel() 
{
	manager = new CommandManager();
	manager->loadRecipes();
}

CommandPanel::~CommandPanel()
{
	delete manager;
}

void CommandPanel::showMenu()
{
	cout << "0. Iesire" << endl;
	cout << "1. Cafea espresso" << endl;
	cout << "2. Cafea lunga (espresso dublu)" << endl;
	cout << "3. Cappuccino" << endl;
	cout << "4. Latte Macchiato" << endl;
	cout << "5. Apa" << endl;
	cout << "6. Ceai" << endl;
}

void CommandPanel::takeCommand(int k)
{
	int order;
	showMenu();
	cout << "Introduceti numarul corespunzator produsului dorit din meniu: ";
	cin >> order;
	manager->takeCommand(order);
}