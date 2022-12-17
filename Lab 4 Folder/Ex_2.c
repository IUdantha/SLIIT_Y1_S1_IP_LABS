/* Write a C program to input the first character of the shape 
(R – Rectangle, Triangle – T, Circle – C) and calculate the area.*/

#include<stdio.h>

int main (void)
{
	char shep;
	float width, length, Rec_area;
	float base, height, Tri_area ; 
	float radius, Cir_area, pi = 22/7.0;
	
	printf("Enter the first character of the shape (R, T, C) : ");
	scanf("%c", &shep);
	
	if (shep == 'R')
	{
		printf("Enter Width\t:\t");
		scanf("%f", &width);
		
		printf("Enter Length\t:\t");
		scanf("%f", &length);
		
		Rec_area = width * length;
		
		printf("The ractangle area is\t:\t%.1f", Rec_area);	
	}
	else if (shep == 'T')
	{
		printf("Enter base\t:\t");
		scanf("%f", &base);
		
		printf("Enter Height\t:\t");
		scanf("%f", &height);
		
		Tri_area = ( base * height ) / 2.0 ;
		
		printf("The triangle area is\t:\t%.1f", Tri_area);
	}
	else if (shep == 'C')
	{
		printf("Enter radius\t:\t");
		scanf("%f", &radius);
		
		Cir_area = pi * radius * radius;
		
		printf("The Circle area is\t:\t%.1f", Cir_area);
	}
	else 
	{
		printf("Input is incorrect");
	}
	return 0;
}
