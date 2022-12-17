#include <stdio.h>

int main (void)
{
	int range[9] = {1000, 900, 800, 700, 600, 500, 400, 300, 200};
	int i, salary, count[9] = {0};
	
	printf ("Enter employee salary : ");
	scanf ("%d", &salary);
	
	while (salary != -1)
	{

		for (i = 0; i < 9; i++)
		{
			if (salary >= range[i])
			{
				count[i] = count[i] + 1;
				break;
			}
		}
		
		printf ("Enter employee salary : ");
		scanf ("%d", &salary);	
	}

	printf ("\nSummary\n");
	for (i = 8; i >= 0; i--)
	{
		printf ("range $%d00 - $%d99 : %d\n", 10 - i, 10 - i, count[i]);
	}
	
	return 0;
}
