/*
Write a function that determines if the array data is corrupt. 
The data is considered corrupt if two consecutive values differ by 1.
Apply the concept of decisive knowledge to this problem. 
Start by determining what the decisive knowledge is.
*/
#include <stdio.h>
#define SIZE 10
int main(void){
	int i,t=0,A[SIZE]={5,7,3,14,12,8,5,27,3,5};
	for(i=0;i<SIZE;i++){
		if(A[i]==(A[i+1]+1)||A[i]==(A[i+1]-1)){
			t=1;
			break;
		}
	}
	if(t==1){
		printf("This Array is corrupt!");
	}
	else printf("This array is ok!");
}
