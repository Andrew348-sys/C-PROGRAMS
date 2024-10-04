/*Author: Andrew Kamau
	Course: Computer System
	Reg No: PA107/G/25166/24 */
#include<stdio.h>
int main (){
	
	
	int age;
	float income;
	
	printf("Enter Your age: ");
	scanf("%d", &age);
	
	printf("Enter Your annual income: ");
	scanf("%f", &income);
	
	if (age>=21 && income>=21000){
		printf("congratulations you qualify for the a loan\n");
	}
	else
		printf("Unfortunately, we are unable to offer you a loan at this time\n");		
		
		return 0;	
	
}