//Ex_1
//To form a triangle, the summation of all three angles should be equal to 180.
#include <stdio.h>

int main (void)
{
	int ang_1, ang_2, ang_3, tot_ang;
	
	printf("Enter First angle\t: ");
	scanf("%d", &ang_1);
	
	printf("Enter Second angle\t: ");
	scanf("%d", &ang_2);
	
	printf("Enter third angle\t: ");
	scanf("%d", &ang_3);
	
	tot_ang = ang_1 + ang_2 + ang_3;
	
	if (tot_ang == 180)
	{	
	printf( "\n\nTriangle can be formed");
	}
	else
	{
	printf( "Triangle can't formed");
	}
		
	return 0;
}
