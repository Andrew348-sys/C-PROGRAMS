/*Author: Andrew Kamau
	Course: Computer System
	Reg No: PA107/G/25166/24 */
#include <stdio.h>
#include <math.h>
int main(){
	
	int radius;
	
	printf("Enter the radius: ");
	scanf("%d", &radius);
	
	float volume = (4.0/3.0) * pow(radius, 3) * M_PI;
	
	printf("Great job the Volume is: %.4f\n", volume);

	
	return 0;
	
	
}