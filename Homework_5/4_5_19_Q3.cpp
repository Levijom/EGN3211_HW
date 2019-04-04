#include <stdio.h>
#define SIZE 10
int main(void){
	int i,j,k,t=0,counter=0,A[SIZE]={1,2,3,4,5,6,5,4,3,2},inpt;
	printf("Enter the key: ");
	scanf("%d",&inpt);
	for(i=0;i<SIZE;i++){
		if(A[i]==inpt){
			printf("First occurrnece at index: %d\n",i);
			t=1;
			break;
		}
	}
	if(t==0){
		printf("First occurrence at index: -1\n");
		printf("Last occurrence at index: -1\n");
	}
	for(j=SIZE-1;j>0;j--){
		if(A[j]==inpt){
			printf("Last occurrnece at index: %d\n",j);
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
