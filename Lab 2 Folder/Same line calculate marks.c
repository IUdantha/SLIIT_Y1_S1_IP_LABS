#include<stdio.h>

int main (void){
	
	
	int value1,value2;
	float answer;
	
    printf ("Enter the value1 and value2 :");
    scanf("%d,%d", &value1,&value2);
    answer = (value1*(50/100.0))+(value2*(50/100.0));
    
    printf ("answer is %.2f",answer);
    
    return 0;
}
 
 
    
