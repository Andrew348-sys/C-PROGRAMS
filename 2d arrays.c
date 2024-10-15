//2d array

#include<stdio.h>
int main (){
int i;
int b;
int marks[2][5] = {{45,55,65,75,85},{95,105,115,205,215}};
for (i=0;i<5;i++){
	for (b=0;b<5;b++){
	   printf("marks[%d][%d]= %d \n",i,b,marks[i][b]);}}	

return 0;
}