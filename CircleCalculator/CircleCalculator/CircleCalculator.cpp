// CircleCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include"EnumDataType.h"
#include"UserInterface.h"
#include "SwitchStatements.h"
#include "CircleCalculationClass.h"

#pragma region Global Variabales
     // **Global variable.**

	 // User input for main menu.
int choice;
// User input for Resize menu.
int choice2;
// If user wants to exit from program.
bool exitStatus=false;
#pragma endregion



int GetUserInputMainMenue()
{
	/**
	@brief Function which gets user input in Main menue and validates.
	*return Valid user input.
	*/
	std::cin >>choice;
	while (choice > 5)
	{
		std::cout << "Please enter a valid choice number" << std::endl;
		std::cin >> choice;
	}
	return choice;
}

int GetUserInputResizeMenue()
{
	/**
	@brief Function which gets user input in Resize menue and validates.
	*return Valid user input.
	*/
	std::cin >> choice2;
	while (choice2 > 4)
	{
		std::cout << "Please enter a valid choice number" << std::endl;
		std::cin >> choice2;
	}
	return choice2;
}

bool Exit()
{
	/**
	@brief Function which checks whether user wants to exit.
	*If user selected choice 5 in main menue, this will make exitStatus true and program will exit.
	else exitStatus will be false.
	*return exitStatus
	*/
	if (choice == 5)
	{
		exitStatus = true;
	}
	else
	{
		exitStatus = false;
	}
	return exitStatus;
}

void ExecuiteResize()
{
	/*
	@brief Function which lets User to resize the circle.
	*If user selected choice 4 below functions will be executed. 
	*/
	if (choice == 4)
	{
		ResizeMenue();
		GetUserInputResizeMenue();
		UserInputSelectResizeMenue(choice2);
	}
}

int main()
{
	do
	{
		StartingMenue();
		GetUserInputMainMenue();
		UserInputSelectMainMenue(choice,choice2);
		ExecuiteResize();
	} while (Exit() == 0);
	
    return 0;
}

