#include <stdio.h>

int main (void)
{
	int type, no_head; 
	
	printf("Enter the package type\t:\t");
	scanf("%d", &type);
	
	printf("Enter the no of people\t:\t");
	scanf("%d", &no_head);
	
	if (type == 1)
	{
		float payment;
		payment = (no_head*2000.00);
		
		printf("Payment is\t\t:\t%.2f",payment);
	}
	else if (type == 2)
	{
		float payment;
		payment = (no_head*5000.00);
		
		printf("Payment is\t\t:\t%.2f",payment);
	}
	else if (type == 3)
	{
		float payment;
		payment = (no_head*7000.00);
		
		printf("Payment is\t\t:\t%.2f",payment);
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}
