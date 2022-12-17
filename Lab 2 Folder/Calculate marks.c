#include<stdio.h>

int main(void){
	
	int examscore, homeworkscore;
	float score1, score2, overallscore;
	
	printf ("Enter Exam Score = ");
	scanf ("%d", &examscore);
	
	printf ("Enter Homework Score = ");
	scanf ("%d", &homeworkscore);
	
	score1 = examscore*(50/100.0);
	score2 = homeworkscore*(50/100.0);
	overallscore = (score1+score2);
	
	printf("\nOverrall course score is %.2f",overallscore);
	
	return 0;
	
	
	
	
	
}
