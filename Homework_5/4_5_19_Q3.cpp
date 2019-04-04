#include <stdio.h>
#define SIZE 10
int main(void){
	int i,j,k,counter=0,A[SIZE]={1,2,3,4,5,6,5,4,3,2},inpt;
	printf("Enter the key: ");
	scanf("%d",&inpt);
	for(i=0;i<SIZE;i++){
		if(A[i]==inpt){
			printf("First occurnece at index: %d\n",i);
			break;
		}
	}
	for(j=SIZE;j>0;j--){
		if(A[j]==inpt){
			printf("Last occurnece at index: %d\n",j);
			break;
		}
	}
	for(k=0;k<SIZE;k++){
		if(A[k]==inpt){
			counter++;
		}
	}
	printf("Total number of occurrences: %d",counter);
}
