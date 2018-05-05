#pragma once

class CircleCalculation
{
private:
 //Local variables.
	    float pi;
		float radius;
		double circumference;
		double area;
	
public:
	//This will calculate Radius when Circumference is given.
	float CalculateRadiusWithCircum(double circumference);
	//This will calculate Radius when Area is given.
	float CalculateRadiusWithArea(double area);
	//This will calculate Area when Radius is given.
	double CalculateAreaWithRadius(float radius);
	//This will calculate Area when Circumference is given.
	double CalculateAreaWithCircum(double circumference);
	//This will calculate Circumference when Radius is given.
	double CalculateCircumWithRadius(float radius);
	//This will calculate Circumference when Area is given.
	double CalculateCircumWithArea(double area);
	
public:
	// Constructor.
	CircleCalculation();
	// Destructor.
	~CircleCalculation();
};
