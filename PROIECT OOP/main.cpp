#include "Cappuccino.h"
#include "CommandManager.h"
#include "CommandPanel.h"
#include "Espresso.h"
#include "LatteMacchiato.h"
#include "Recipe.h"
#include "RecipeRepo.h"
#include "ResourceContainer.h"
#include "ResourceHandler.h"
int main()
{
	int k = 0;
	CommandPanel c;
	while (1)
	{
		k++;
		c.takeCommand(k);
	}
	return 0;
}