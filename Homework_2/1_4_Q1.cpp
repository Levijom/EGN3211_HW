/*
Qustion 1:
Write a program that finds out the sizes of the data types on your computer. Show the size in Byte and in
bits. Your program should compute all the numbers, i.e., don’t put any hard number in the printf
statements. We want the program to work on any computer
*/

#include <stdio.h>
int main(void){
	printf("char: \t\t\t %d-Byte  (%d-bit)\n",sizeof(char),(sizeof(char)*8));
	printf("unsigned char: \t\t %d-Byte  (%d-bit)\n\n",sizeof(unsigned char),sizeof(unsigned char)*8);
	printf("short int: \t\t %d-Byte  (%d-bit)\n",sizeof(short int),sizeof(short int)*8);
	printf("unsigned short int: \t %d-Byte  (%d-bit)\n\n",sizeof(unsigned short int),sizeof(unsigned short int)*8);
	printf("int: \t\t\t %d-Byte  (%d-bit)\n",sizeof(int),sizeof(int)*8);
	printf("unsigned int: \t\t %d-Byte  (%d-bit)\n\n",sizeof(unsigned int),sizeof(unsigned int)*8);
	printf("long int: \t\t %d-Byte  (%d-bit)\n",sizeof(long int),sizeof(long int)*8);
	printf("unsigned long int: \t %d-Byte  (%d-bit)\n\n",sizeof(unsigned long int),sizeof(unsigned long int)*8);
	printf("long long int: \t\t %d-Byte  (%d-bit)\n",sizeof(long long int),sizeof(long long int)*8);
	printf("unsigned long long int:  %d-Byte  (%d-bit)\n\n",sizeof(unsigned long long int),sizeof(unsigned long long int)*8);
	printf("float: \t\t\t %d-Byte  (%d-bit)\n",sizeof(float),sizeof(float)*8);
	printf("double: \t\t %d-Byte  (%d-bit)\n",sizeof(double),sizeof(double)*8);
}
