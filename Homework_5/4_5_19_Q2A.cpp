#include <stdio.h>
#define SIZE 10
int main(void){
	int A[SIZE]={5,7,3,5,6,7,8,2,1,1},i;
	for(i=0;i<SIZE;i++){
		if(A[i]%2==0){
			printf("First even value: %d",A[i]);
			return 0;
		}
	}
}
