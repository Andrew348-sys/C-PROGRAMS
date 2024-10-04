/*Author: Andrew Kamau
	Course: Computer System
	Reg No: PA107/G/25166/24 */
#include <stdio.h>
int main(){
	
	char grade;
	int score;
	
	printf("Enter the score: ");
	scanf("%d", &score);
	
	if (score>=70 && score<100){
	printf("Congratulations your grade is: A");

	}
	else if(score>=60 && score<70){
	printf("Congratulations your grade is: B");
	}
	else if (score>=50 && score<60){
	printf("Congratulations your grade is: c");
	
	} 
	else if (score>=40 && score<50){
	printf("Nice trial your grade is: D");
			
	}
	else if(score<39){
	printf("Work harder your grade is: E");}
	
	
	return 0;
}