//3d array

#include<stdio.h>
int main (){
int i;
int b;
int d;
int marks[3][3][5] = {{45,55,65,75,85},{95,105,115,205,215},{220,230,240,250,260}};
for (i=0;i<5;i++){
	for (b=0;b<5;b++){
		for (d=0;d<5;d++){
	   printf("marks[%d][%d][%d]= %d \n",i,b,d,marks[i][b][d]);
	   }
	   }
	   }	

return 0;
}