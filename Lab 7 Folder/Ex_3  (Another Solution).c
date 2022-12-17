#include <stdio.h>
#include <assert.h>

int calPayment (char pType);
float calDiscount (int age, char pType);
void testDiscount ();

int main (void)
{
	testDiscount ();
	
	int age;
	char pType;
	
	
	printf ("Enter pakage type : ");
	scanf (" %c", &pType);
	
	printf ("Enter your age : ");
	scanf ("%d", &age);
	
	if (pType == 'S' || pType == 'C' || pType == 'H')
		printf ("You have to pay : %.2f/=", calPayment(pType) - calDiscount(age, pType));
	else
		printf ("Invalid Input");
		
	return 0;
}

int calPayment (char pType)
{
	if (pType ==  'S')
		return 15000;
	else if (pType == 'C')
		return 50000;
	else if (pType == 'H')
		return 30000;
	else
		return 0;
}

float calDiscount (int age, char pType)
{
	float discount;
	if (age >= 60)
		discount = calPayment(pType) * (10.0 / 100);
	else
		discount = 0;
		
	return discount;
}

void testDiscount ()
{
	assert(calDiscount(65, 'C') == 5000);
	assert(calDiscount(45, 'S') == 0);
	printf ("The textDiscount function is passed\n");
}


