#include<stdio.h>
//program to calculation the summation of two integer values that input from the keyboard
int main (void){
	
	
	//declare three int variables
	int value1, value2;
	int answer;
	
	
	//take user inputs
	printf("Enter first value : ");
	scanf("%d",&value1);
	
	printf("Enter second value : ");
	scanf("%d",&value2);
	
	//show the answer
	answer = value1+value2;
	
	printf ("Answer is : %d",answer);
	
return 0;
	
	
}
