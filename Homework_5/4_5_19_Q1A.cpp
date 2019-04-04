#include <stdio.h>
int main(void){
	int i,A[100];
	for(i=0;i<100;i++){
		A[i]=(100-i);
		printf("index %d: %d\n",i,A[i]);
	}
}
