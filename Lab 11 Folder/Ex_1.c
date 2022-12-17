#include <stdio.h>

int main (void)
{
	int num, answer = 1;
	
	printf ("Enter the value : ");
	scanf ("%d", &num);
	
	while (num < 0)
	{
		printf ("Invalid number!! Enter the value : ");
		scanf ("%d", &num);
	}

	if (num == 0)
	{
		answer = 0;
	}
	
	while (num != 0)
	{
		answer = answer * num;
		num = num - 1;
	}
	printf ("Answer : %d", answer);
	
	return 0;
}

