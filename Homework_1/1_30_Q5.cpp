/*
Question 5:
Write a program that reads a pollution scale value fro mthe user and prints the corresponding pollution level;
High		>=80
Medium		>=70
Moderate	>=50
Low			<50
*/

#include <stdio.h>
int main(void){
	int x;
	
	printf("Enter the pollution scale value: ");
	scanf("%d",&x);
	
	if(x<0 || x>100)
		printf("Invalid input! Valid range is (0-100)");
	else{
		if(x>=80)
			printf("The pollution level is High");
		else if(x>=70)
			printf("The pollution level is Medium");
		else if(x>=50)
			printf("The pollution level is Moderate");
		else
			printf("The pollution level is Low");
	}
}
