/*
Question 3:
Write a program that takes two integers called ‘small’ and ‘large’ and adds all the numbers between these two values, inclusive. 
If the user enters a larger value for ‘small’, print an error message and terminate the program
*/
#include <stdio.h>
int main(void){
	int s,l,small,result=0;
	printf("Enter a small value: ");
	scanf("%d",&s);
	printf("Enter a large value: ");
	scanf("%d",&l);
	if(s>l)printf("Invalid input!");
	else{
	for(small=s;small<=l;small++){
		result+=small;
	}
	printf("The sum of integers between %d and %d is %d",s,l,result);
	}
}
