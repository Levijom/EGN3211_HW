/*
Question 6:
Write a program that reads weight in stone, pounds, and ounce, then converts it to ounces.
1 stone = 14 pounds		1 pound = 16 ounces
*/

#include <stdio.h>

int main(void){
	int s,p,o,total;
	
	printf("Enter Stones: ");
	scanf("%d",&s);
	
	printf("Enter Pounds: ");
	scanf("%d",&p);
	
	printf("Enter Ounces: ");
	scanf("%d",&o);
	
	if(s<0 || p<0 || o<0)
		printf("THis input is invalid!");
	else{
		total=(256*s)+(16*p)+o;
		printf("The total weight is %d oz.",total);
	}
}



