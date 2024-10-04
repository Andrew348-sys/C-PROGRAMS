/*Author: Andrew Kamau
	Course: Computer System
	Reg No: PA107/G/25166/24 */
#include <stdio.h>
#include <math.h>
int main (){
	
    float principle_amount, rate, compounding_years, total_years;
    printf("Enter the principle amount: ");
    scanf ("%f", &principle_amount);

    printf("Enter the rate: ");
    scanf ("%f", &rate);

    printf("Enter the compounding years: ");
    scanf ("%f", &compounding_years);

    printf("Enter the total years: ");
    scanf ("%f", &total_years);

    float amount= principle_amount*pow((1+ rate/compounding_years),compounding_years*total_years);
    printf("Amount: %.4f", amount);

    return 0;

}
