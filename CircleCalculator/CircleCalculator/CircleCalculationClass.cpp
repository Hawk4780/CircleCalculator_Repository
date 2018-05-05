#include "CircleCalculationClass.h"
#include<cmath>

// Constructor Function.
CircleCalculation::CircleCalculation()
{/*
 @brief When member function is called this will set pi value to 3.14.
 */
	pi = 3.14;
}
// Destructor Function.
CircleCalculation::~CircleCalculation()
{

}

#pragma region Area Calculations

double CircleCalculation::CalculateAreaWithRadius(float radius)
{
	/**
	@brief Function which calculates Area when radius is given.
	*returns Area.
	*/
	area = pi*radius*radius;
	return area;
}

double CircleCalculation::CalculateAreaWithCircum(double circumference)
{
	/**
	@brief Function which calulates Area when Circumference is given.
	*returns Area.
	*/
	area = (circumference*circumference) / (4 * pi);
	return area;
}
#pragma endregion

#pragma region Radius Calculations

float CircleCalculation::CalculateRadiusWithCircum(double circumference)
{
	/**
	@brief Function which calculates Radius when Circumfernce is given.
	*returns Radius.
	*/
	radius = circumference / (2 * pi);
	return radius;
}

float CircleCalculation::CalculateRadiusWithArea(double area)
{
	/**
	@brief Function which calculates Radius when Area is given.
	*returns Radius.
	*/
	radius = sqrt(area / pi);
	return radius;
}

#pragma endregion

#pragma region Circumference Calculations

double CircleCalculation::CalculateCircumWithRadius(float radius)
{
	/**
	@brief Function which calculates Circumference when Radius is given.
	*returns Circumference.
	*/
	circumference = 2 * pi*radius;
	return circumference;
}

double CircleCalculation::CalculateCircumWithArea(double area)
{
	/**
	@breif Function which calculates Circumference when Area is given.
	*returns Circumference.
	*/
	circumference = 2 * sqrt(area*pi);
	return circumference;
}

#pragma endregion