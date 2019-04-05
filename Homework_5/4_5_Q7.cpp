/*
Write a function that takes an array of integers and its size as parameters and prints the two largest values in the array. 
In this question, the largest value and the second largest value cannot be the same, even if the largest value occurs multiple times.
Array data1 2 4 5 3 2 1 5 6 4 
After processing 1 2 4 5 3 -1 -1 -1 6 -1
Original data-------------Array: 10 4 7 4 2 7 10 4 4 0 4 Value 10:  2 timesValue 4: 5 timesValue 7: 2 timesValue 2: 1 time Value 0: 1 time - 3 - 
In the first sample, the two largest values are 9 and 8 (even though the value 9 appears twice). 
In the second sample, all the values are equal and the program recognizes this by printing a special message.
*/
#include <stdio.h>
#define SIZE 10
int main(void){
	int i,first,second,n=0,A[SIZE]={1,2,3,4,6,7,8,6,4,8};
	first=A[0];
	for(i=0;i<SIZE;i++){
		if(A[i]>first){
			second=first;
			first=A[i];
		}
		if(A[i]==A[i-1])
			n++;
	}
	printf("Max value:  %d\n",first);
	if(n==SIZE-1) printf("All the values are equal.");
	else printf("Second largest value:  %d",second);
}
