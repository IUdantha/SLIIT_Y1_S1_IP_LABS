#include <stdio.h>
#include <strings.h>
int main (void)
{
	int length, i;
	char name[20];

	printf ("Enter the name : ");
	scanf ("%s", name);
	
	length = strlen (name);
	length = length - 1;  //remove null
	
	for (i = length; i >= 0; i--)
	{
		printf ("%c", name[i]);
	}
	
	return 0;
}
