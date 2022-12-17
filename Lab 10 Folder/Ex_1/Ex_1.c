#include <stdio.h>

int main (void)
{
	int i, no;
	
	FILE * cfPtr;  //Create file pointer
	
	cfPtr = fopen ("numbers.txt", "w");  //create and file for writing
	
	if (cfPtr == NULL)
	{
		printf ("Fail  to create file\n");
		return -1;
	}
	
	for (i = 1; i <= 5; i++)
	{
		printf ("Enter integer number : ");
		scanf ("%d", &no);  //writing numbers to the file
		fprintf (cfPtr, "%d\n", no);  //write numbers to the file
	}
	
	fclose (cfPtr);
	
	cfPtr = fopen ("numbers.txt", "r");  //open file for reading
	
	fscanf (cfPtr, "%d", &no);  //read numbers from the file
	while (!feof (cfPtr))
	{
		printf ("%d\t", no);
		fscanf (cfPtr, "%d", &no);  //read numbers from the file
	}
	
	fclose (cfPtr);
	
	return 0;
}

