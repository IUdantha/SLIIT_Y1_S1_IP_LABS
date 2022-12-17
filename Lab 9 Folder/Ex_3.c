#include <stdio.h>

int main (void)
{
	int mark [3][3] = {0};
	int i, j, temp, total; 
	float avg = 0;
	
	for (i = 0; i < 3; i++)  //get user input
	{
		printf ("Student no : %d\n", i + 1);
		
		for (j = 0; j < 3; j++)
		{
			printf ("Score %d: ", j + 1);
			scanf ("%d", &mark [i][j]);
		}
		
		printf ("\n");
	}
	
	//print output
	printf ("Student No\t\tExam Score\t\t\tAverage\n\n");
	for (i = 0; i < 3; i++)
	{
		printf ("%d\t\t", i + 1);
		total = 0;

		for (j = 0; j < 3; j++)
		{
			printf ("\t%2d", mark[i][j]);
			
			temp = mark [i][j];
			total = total + temp;
		}
		
		avg = total / 3.0;
		printf ("\t\t%.2f", avg);
		printf ("\n");
	}
	
	return 0;
}
