/*
Question 3:
Write a program that reads 2 integers from the user and computes their addition, subtraction, multiplication, division, and modulo result.
*/

#include <stdio.h>
int main(void){
	int a, b, result;
	printf("Enter first integer a:");
	scanf("%d",&a);
	
	printf("Enter second integer b:");
	scanf("%d",&b);
	
	result=a+b;
	printf("a + b = %d + %d = %d\n",a,b,result);
	
	result=a-b;
	printf("a - b = %d - %d = %d\n",a,b,result);
	
	result=a*b;
	printf("a * b = %d * %d = %d\n",a,b,result);
	
	if(b==0){
		printf("a / b = Divide by Zero error: See https://en.wikipedia.org/wiki/Division_by_zero\n");
		printf("a %% b = Divide by Zero error: See https://en.wikipedia.org/wiki/Division_by_zero");
	}
	else{
		result=a/b;
		printf("a / b = %d / %d = %d\n",a,b,result);
		result=a%b;
		printf("a %% b = %d %% %d = %d\n",a,b,result);
	}
}
