/*
Write a function that takes an array of integers and its size as parameters and changes all the duplicate values to -1. 
As the sample below shows, the first occurrence of each value is left unchanged whereas later occurrences are changed to -1. 
Use a symbolic constant for the array size.
*/
#include <stdio.h>
#define SIZE 10
int main(void){
	int i,j,A[SIZE]={1,2,3,4,5,6,7,2,8,6};
	printf("Arragy data: \n");
	for(i=0;i<SIZE;i++){
		printf("%d ",A[i]);
	}
	for(i=0;i<SIZE;i++){
		for(j=i-1;j>0;j--){
			if(A[i]==A[j]){
				A[i]=-1;
			}
		}
	}
	printf("\nAfter Processing: \n");
	for(i=0;i<SIZE;i++){
		printf("%d ",A[i]);
	}
}
