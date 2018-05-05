#include "stdafx.h"
#include <iostream>
#include"EnumDataType.h"


void StartingMenue()
{
	//Displays Starting Menu

	system("CLS");
	std::cout << "\t \t \t \t \t Welcome to Circle Calculator" << std::endl;
	std::cout << " " << std::endl;
	std::cout <<"\t \t \t \t \t \t  ***Menu***" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "\t \t Default Radius:- 10" << std::endl;
	std::cout << " " << std::endl;
	std::cout <<"\t \t \t \t ( 1 ) Circumference " << std::endl;
	std::cout << " " << std::endl;
	std::cout<<"\t \t \t \t ( 2 ) Area"<<std::endl;
	std::cout << " " << std::endl;
	std::cout <<"\t \t \t \t ( 3 ) Radius " << std::endl;
	std::cout << " " << std::endl;
	std::cout <<"\t \t \t \t ( 4 ) Resize "<<std::endl;
	std::cout << " " << std::endl;
	std::cout << "\t \t \t \t ( 5 ) Quit" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Please enter your choice:" << std::endl;
}

void ResizeMenue()
{
	// Displys Resize option menu.

	system("CLS");
	std::cout << "\t \t \t \t \t \t  ***Resize Menu***" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "\t \t \t \t ( 1 ) Circumference " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "\t \t \t \t ( 2 ) Area" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "\t \t \t \t ( 3 ) Radius " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "\t \t \t \t ( 4 ) Back" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Please enter your choice: " << std::endl;
}