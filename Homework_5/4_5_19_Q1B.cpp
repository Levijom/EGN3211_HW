#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main(void){
	int i,A[SIZE],r;
	for(i=0;i<SIZE;i++){
		r=(rand()%100)+1;
		A[i]=r;
		printf("%d\n",A[i]);
	}
}
