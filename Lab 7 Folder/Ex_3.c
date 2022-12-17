#include <stdio.h>
#include <assert.h>
#include <math.h>

 //Function declaration
float calpayment (char packageType);
float caldiscount (char age, float payment);
void testdiscount ();

int main(void)
{
	char pType;
	int age;
	float discount, netAmount, payment;
	
	printf ("Enter the package type : ");
	scanf ("%c", &pType);
	
	printf ("Enter patient age : ");
	scanf ("%d", &age);
	
	payment = calpayment (pType);
	discount = caldiscount (age, payment);
	netAmount = payment - discount;
	
	printf ("Net amount : %.2f\n",netAmount);
	
	return 0;
}

float calpayment (char packageType)
{
	float D;
	if (packageType == 'S')
	{
		D = 15000.00;
		return D;
	} 
	else if (packageType == 'C')
	{
		D = 50000.00;
		return D;
	} 
	else if (packageType == 'H')
	{
		D = 30000.00;
		return D;
	}
	else
		return	printf ("\n\nInvalid Input");
	
}

float caldiscount (char age, float payment)
{
	if (age >= 60)
	return 	payment * 0.1;
	
	else
	return 0;
}


