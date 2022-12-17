#include <stdio.h>

int main (void)
{
	float data[12] = {0};
	float max, min;
	int i, maxMonth, minMonth;
	
	for (i = 0; i < 12; i++)
	{
		printf ("Enter month %d average rainfall : ", i + 1);
		scanf ("%f",&data[i]);
		
		if (data[i] > max)
		{
			max = data [i];
			maxMonth = i + 1;
		}
			
		if (data[i] < min)
		{
			min = data [i];
			minMonth = i + 1;	
		}
	}
	max = data[0];
	min = data[0];
	
	for (i = 0; i < 12; i++)
	{
		if (data[i] > max)
		{
			max = data [i];
			maxMonth = i + 1;
		}
			
		if (data[i] < min)
		{
			min = data [i];
			minMonth = i + 1;	
		}
	}
	
	printf ("\n\nThe month with maximum rainfall : month %d\n", maxMonth);
	printf ("The month with minimum rainfall : month %d\n", minMonth);
	
	return 0;
	
}
