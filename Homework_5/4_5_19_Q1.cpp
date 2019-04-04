/*
Write a program that declares an array of 100 integers and initializes it to the values (100, 99, ..., 2, 1). 
Then, print the array as shown below.
*/

#include <stdio.h>
int main(void){
	int A[100],i;
	for(i=0;i<100;i++){
		A[i]=(100-i);
		printf("Index %d: %d\n",i,A[i]);
	}
}
