/*
Part b) Write a program that declares an array of 10 integers and fills each element with a random value between 0 and 100, inclusive. 
Then, print the array. 
Write your program in terms of a symbolic constant SIZE so that you can change the array to any size simply by modifying the symbolic constant.
*/

#include <stdio.h>
#define SIZE 10
int main(void){
	int i,A[SIZE],ran,rand();
	for(i=0;i,SIZE;i++){
		ran=rand()%101+1;
		A[1]=ran;
	}
}
