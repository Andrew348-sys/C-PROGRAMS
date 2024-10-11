//For loop
/* Author: Andrew Kamau
Reg no. PA107/G/25166/24
Course: Computer System Engineering*/
#include <stdio.h>
int main (){
	int Customer_ID;
	char Customer_name[50];
	int unit_consumed, i;
	float charges_rate;
	float total_charges;
	
	printf("Enter the customer ID: ");
	scanf("%d", &Customer_ID);
	
	printf("Enter your name: ");
	scanf(" %s", Customer_name);
	
	printf("Enter the amount of units consumed: ");
	scanf("%d", &unit_consumed);
	
	for (i=0; i<=unit_consumed; i++ ){
		if (i<=199){
			charges_rate = 1.20;
		}
		else if (i>199 && i<=400){
			charges_rate =1.50;
		}
		else if (i>=400 && i<=600){
			charges_rate =1.80;
		}
		else{
			charges_rate =2.00;
		}
		
		
	}
	total_charges = charges_rate * unit_consumed;
	

		if (total_charges>400){
			total_charges+= total_charges * 0.15;
		}
		if (total_charges<100)
		{total_charges=100;}
		
	
	
	printf("Customer ID: %d\n", &Customer_ID);
	printf("Customer name: %s\n", &Customer_name);
	printf("Units consumed: %d\n", &unit_consumed);
	printf("Charge rate: %.2f\n", &charges_rate);
	printf("Total charges: %.2f\n", &total_charges);
	
	


return 0;
	
	
}