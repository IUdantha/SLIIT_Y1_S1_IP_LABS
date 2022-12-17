#include <stdio.h>

//funtion declaration
float circleArea(float radius);
float circlePeri(float radius);
float recArea(float width, float length);

int main (void)
{
	float radius, height, cArea, cPeri, rArea, Area;
	
	printf("Enter the radius\t:\t");
	scanf("%f", &radius);
	
	printf("Enter the height\t:\t");
	scanf("%f", &height);
	
	//calling function
	cArea = circleArea(radius);
	cPeri = circlePeri(radius);
	rArea = recArea(height, cPeri);
	
	Area  = (2 * cArea) + rArea;
	
	printf("Area is\t:\t%.2f", Area);
	
	return 0;
}

float circleArea(float radius)
{
	float cArea;
	cArea = (22 / 7.0) * radius * radius;
	return cArea; 
}
float circlePeri(float radius)
{
	float cPeri;
	cPeri = 2 * (22.0 / 7) * radius;
	return cPeri;
}
float recArea(float width, float length)
{
	float rArea;
	rArea = width * length;
	return rArea;
}

