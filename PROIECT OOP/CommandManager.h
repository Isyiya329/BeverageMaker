#pragma once
#include "RecipeRepo.h"
#include "ResourceHandler.h"
class CommandManager 
{
private:
	RecipeRepo *repo;
	ResourceHandler *handler;
	bool canWork;
public: 
    CommandManager();
	~CommandManager();
	void loadRecipes();
	void takeCommand(int order);
};