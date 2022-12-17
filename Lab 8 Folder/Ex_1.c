#include <stdio.h>
int main (void)
{
	int numbers[5] = {0};
	int i;
	
	for (i = 0; i < 5; i++)  //store integer values within the array
	{
		printf("Enter integer value : ");
		scanf ("%d", &numbers[i]);
		
	}
	
	printf ("\nArray Elemments : ");
	
	for (i = 0; i < 5; i++)  //Display array element
	{
		printf ("%d\t",numbers[i]);
	}
	
	return 0;
}
