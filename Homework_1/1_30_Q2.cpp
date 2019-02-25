/*
Question 2:
Write a program that reads 2 integers from user and adds them. use the following as template;

Enter first integer: 12
Enter second integer: 20

Output 1: The result is 32.
Output 2: The sum of 12 and 20 is 32.

*/

#include <stdio.h>
int main(void){
	int x, y, result;
	printf("Enter first integer:");
	scanf("%d",&x);
	
	printf("Enter second integer:");
	scanf("%d",&y);
	
	result=x+y;
	printf("The result is %d\n",result);
	printf("The sum of %d and %d is %d\n",x,y,result);
}
