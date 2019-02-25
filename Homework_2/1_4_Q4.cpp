/*
Question 4:
Part a) Declare a variable of type float and assign it the value 2.62. 
Print the variable with 20 digits of precision. 
Comment on what you observe.

Part b) Repeat the question above but use a variable of type double.
*/
#include <stdio.h>
int main(void){
	float x;
	x=2.62;
	printf("%.20f\n",x);				//prints "2.61999988555908200000"
	double y;
	y=2.62;
	printf("%.20d");					//prints 00000000000567081520
}
