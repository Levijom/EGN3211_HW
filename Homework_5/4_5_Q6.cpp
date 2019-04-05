/*
Write a function that takes an array of integers and its size as parameters and prints all the values that occur in the array and 
the number of times each value occurs. 
The array should not be modified.
Use a symbolic constant for the array size. 
Fill the array with random values between 0 and 10 using the rand() function. 
Below is a sample output.
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main(void){
	int i,n,j,A[SIZE]={};
	printf("Original data\n----------------\nArray: ");
	for(i=0;i<SIZE;i++){
		A[i]=rand()%11;
		printf("%d ",A[i]);
	}
	for(j=0;j<=10;j++){
		n=0;
		for(i=0;i<SIZE;i++){
			if(A[i]==j){
				n++;
			}
		}
		if(n==1) printf("\nvalue %d:\t%d time",j,n);
		if(n>1) printf("\nvalue %d:\t%d times",j,n);
	}
}
