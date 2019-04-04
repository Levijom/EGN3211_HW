/*
Question 4:
Write a program that computes the total weight of a cargo. 
The user has many types of boxes (numbered 1 to n). 
For each box type, the program asks the user about the weight and quantity. 
The program then computes and prints the total cargo weight.
In the output sample below, the user has three box types..
*/
#include <stdio.h>
int main(void){
	int box=1,qty,weight,total=0;
	while(weight!=-1){
		printf("Enter weight (lbs) of Type %d box: ",box);
		scanf("%d",&weight);
		if(weight==-1)break;
		printf("Enter quantity: ");
		scanf("%d",&qty);
		total=total+(weight*qty);
		box++;
	}
	printf("The total weight is %d lbs.",total);
}


