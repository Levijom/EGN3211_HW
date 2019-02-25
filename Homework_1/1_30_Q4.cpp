/*
Write a program that reads an integer from the user and checks how many of the following criteria it meets;

The integer is positive
The integer is a multiple of 2
The integer is a multiple of 3

*/

#include <stdio.h>
int main(void){
	int x;
	
	printf("Enter an integer: ");
	scanf("%d",&x);
	
	if(x > 0)
		printf("The integer %d is positive.\n",x);
	else
		printf("The integer %d is not positive.\n",x);
		
	if(x%2 == 0)
		printf("The integer %d is divisible by two.\n",x);
	else
		printf("The integer %d is not divisible by two.\n",x);
		
	if(x%3 == 0)
		printf("The integer %d is divisible by three.\n",x);
	else
		printf("The integer %d is not divisible by three.\n",x);		
}
