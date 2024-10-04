/*Author: Andrew Kamau
	Course: Computer System
	Reg No: PA107/G/25166/24 */

#include <stdio.h>
int main(){
	
	int book_ID;
	int due_date;
	int return_date;
	
	printf("Enter the book ID: ");
	scanf("%d", &book_ID);
	
	printf("Enter the due_date: ");
	scanf("%d", &due_date);
	
	printf("Enter the return_date: ");
	scanf("%d", &return_date);
	
	int Overduedays=return_date-due_date;
	printf("Over due day: %d \n", Overduedays);
	
	if (Overduedays<=7 && Overduedays>0){
		printf("Fine Rate= Ksh.20 \n");
	}
	else if (Overduedays>7 && Overduedays<=14){
		printf("Fine Rate= Ksh.50 \n");
		
	}
	else if (Overduedays>14){
	printf("Fine Rate= Ksh.100 \n");
		
	}
	else printf("Invalid input\n");

return 0;
	
	
	
	
	
	
}