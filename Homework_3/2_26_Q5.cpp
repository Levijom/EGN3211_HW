/*
Question 5:
Write a program that prints the first ‘n’ terms of the Fibonacci series where ‘n’ is an input by the user.
The first two terms of the Fibonacci series are 0 and 1. 
After that, each term is the sum of the two preceding terms.
Below is a sample output.
*/
#include <stdio.h>
int main(void){
	int input,i,f1=0,f2=1,f3;
	printf("How many Fobonacci terms? : ");
	scanf("%d",&input);
	for(i=1;i<=input;i++){
		printf("%d ",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
}
