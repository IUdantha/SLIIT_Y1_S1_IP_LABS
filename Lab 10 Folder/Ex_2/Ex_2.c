#include <stdio.h>

int main (void)
{
	char itmID[5], name[10];
	int qty, price;
	int i;
	int subPrice = 0, totPrice = 0;
	
	FILE * cfPtr;
	
	cfPtr = fopen ("purchase.txt", "w");
	
	if (cfPtr == NULL)
	{
		printf ("The file is not found.");
		return -1;
	}
	
	for (i = 0; i < 4; i++)
	{
		printf ("Enter Item ID : ");
		scanf ("%s", itmID);
		
		printf ("Enter Name : ");
		scanf ("%s", name);
		
		printf ("Enter Quantity(kg) : ");
		scanf ("%d", &qty);
		
		printf ("Enter Price for 1kg : ");
		scanf ("%d", &price);
		
		fprintf (cfPtr, "%s\t\t%s\t\t%d\t\t%d\n", itmID, name, qty, price);
		
		printf ("\n");
	}
	
	fclose(cfPtr);
	
	cfPtr = fopen ("purchase.txt", "r");
	
	if (cfPtr == NULL)
	{
		printf ("The file is not found.");
		return -1;
	}
	
	fscanf (cfPtr, "%s %s %d %d", itmID, name, &qty, &price);
	
	printf ("ItemID\t\tName\t\tQunatity\tPrice for 1kg\tSub price\n");
	while (!feof(cfPtr))
	{
		subPrice = qty * price;
		
		printf ("%s\t\t%s\t\t%d\t\t%d\t\t%d\n",itmID, name, qty, price, subPrice);
		fscanf (cfPtr, "%s %s %d %d", itmID, name, &qty, &price);
		
		totPrice = totPrice + subPrice;
	}
	
	printf ("\nThe total price is : %d\n", totPrice);
	
	return 0;
}
