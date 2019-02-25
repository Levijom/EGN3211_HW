/*
Question 5:
Declare two integer variables (a=4; b=5;) and a variable of type float called average. 
Compute the average so that the computer does an integer division. 
Then, recompute the average in two ways so that the computer does a floating-point division. 
The output is shown below.
*/
#include <stdio.h>
int main(void){
	int a,b;
	a=4;
	b=5;
	float average;
	average = (a+b)/2;
	printf("Integer division result:\t\t%f\n",average);
	average = (float)(a+b)/2;
	printf("Floating-point division result:\t\t%f\n",average);
	printf("Floating-point division result:\t\t%.6f",average);
}
