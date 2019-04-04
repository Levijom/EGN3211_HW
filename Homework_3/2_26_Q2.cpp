/*
A)	Write a while loop that prints integers from 0 to 40
B)	Write a for loop that prints integers from 0 to 40
C)	 Write a loop that prints the integers from 0 to 10 and every even number is printed twice
*/
#include <stdio.h>
int main(void){
	int A=0,B=0,C=0;
	do{
		A++;
		printf("%d ",A);
	}while(A<40);
	printf("\n\n");
	for(B=1;B<=40;B++){
		printf("%d ",B);
	}
	printf("\n\n");
	do{
		if(C%2==0)printf("%d %d ",C,C);
		else printf("%d ",C);
		C++;
	}while(C<=10);
}
