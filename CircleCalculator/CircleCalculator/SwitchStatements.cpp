#include "SwitchStatements.h"
#include "EnumDataType.h"
#include "CircleCalculationClass.h"
#include "stdafx.h"
#include"UserInterface.h"
#include <iostream>

//varibale using to get user input
double number = 10;


void UserInputSelectResizeMenue(int choice2)
{
	switch (choice2)
	{
	case 1:
		choice2 = Circumference;
		std::cout << " " << std::endl;
		std::cout << "Please enter Circumference value:" << std::endl;
		std::cin >> number;
		break;
	case 2:
		choice2 = Area;
		std::cout << " " << std::endl;
		std::cout << "Please enter Area value:" << std::endl;
		std::cin >> number;
		break;
	case 3:
		choice2 = Radius;
		std::cout << " " << std::endl;
		std::cout << "Please enter Radius value:" << std::endl;
		std::cin >> number;
		break;
	case 4:
		break;
	default:
		std::cout << " " << std::endl;
	}
}

void UserInputSelectMainMenue(int choice, int choice2)
{
	/*
	@brief Switch statement to executes Main menu commands.
	*This will use class functions to do calculations according to user choice.
	And wll display the result.
	*/
	CircleCalculation c1;
	switch (choice)
	{
	case 1:
		choice = Circumference;
		if (choice2 == 1)
		{
			std::cout << " " << std::endl;
			std::cout<<"\t Circumference: " << number << std::endl;
			std::cout << " " << std::endl;
			system("pause");
			break;
		}
		else if (choice2 == 2)
		{
			c1.CalculateCircumWithArea(number);
			std::cout << " " << std::endl;
			std::cout << "\t Circumference: " << c1.CalculateCircumWithArea(number) << std::endl;
			std::cout << " " << std::endl;
			system("pause");
			break;
		}
		else
		{
			c1.CalculateCircumWithRadius(number);
			std::cout << " " << std::endl;
			std::cout << "\t Circumference: " << c1.CalculateCircumWithRadius(number) << std::endl;
			std::cout << " " << std::endl;
			system("pause");
			break;
		}
	case 2:
		choice = Area;
		if (choice2 == 1)
		{
			c1.CalculateAreaWithCircum(number);
			std::cout << " " << std::endl;
			std::cout << "\t Area: "<< c1.CalculateAreaWithCircum(number) << std::endl;
			std::cout << " " << std::endl;
			system("pause");
			break;
		}
		else if (choice2 == 2)
		{
			std::cout << " " << std::endl;
			std::cout << "\t Area: " << number << std::endl;
			std::cout << " " << std::endl;
			system("pause");
			break;
		}
		else
		{
			c1.CalculateAreaWithRadius(number);
			std::cout << " " << std::endl;
			std::cout << "\t Area: " << c1.CalculateAreaWithRadius(number) << std::endl;
			std::cout << " " << std::endl;
			system("pause");
			break;
		}
	case 3:
		choice = Radius;
		if (choice2 == 1)
		{
			c1.CalculateRadiusWithCircum(number);
			std::cout << " " << std::endl;
			std::cout <<"\t Radius:"<<c1.CalculateRadiusWithCircum(number) << std::endl;
			std::cout << " " << std::endl;
			system("pause");
			break;
		}
		else if (choice2 == 2)
		{
			c1.CalculateRadiusWithArea(number);
			std::cout << " " << std::endl;
			std::cout <<"\t Radius:"<< c1.CalculateRadiusWithArea(number) << std::endl;
			std::cout << " " << std::endl;
			system("pause");
			break;
		}
		else
		{
			std::cout << " " << std::endl;
			std::cout <<"\t Radius:"<< number << std::endl;
			std::cout << " " << std::endl;
			system("pause");
			break;
		}
	case 4:
		choice = Resize;
		break;
	case 5:
		choice = Quit;
		break;
	default:
		std::cout << " " << std::endl;
	}
}