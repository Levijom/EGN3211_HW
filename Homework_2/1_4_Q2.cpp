/*
Question 2:
Write a program that creates an overflow for 8-bit variables, signed and unsigned. 
For each type (signed and unsigned), declare a variable and store in it the largest possible value. 
Then, increment the variable by 1 and print it again. 
You should observe a wrong result.

Hints: Declare your variables as ‘unsigned char’ and ‘signed char’ since ‘char’ could be vague whether it’s signed or unsigned.
Think about what conversion specifier to use when printing the variables (%c, %d, %u, …).
The test should look like below. 
You should have numbers printed in place of the text in red
*/

#include <stdio.h>
int main(void){
	unsigned int x;
	x = 2147483647;
	printf("Testing Unsigned Char... \n--------------------------------\n");
	printf("Largest Value: 	%d\n",x);
	x = x+1;
	printf("After Adding: 	%d\n",x);
	signed int y;
	y = 2147483647;
	printf("--------------------------------\nTesting Signed Char... \n--------------------------------\n");
	printf("Original: 	%d\n",y);
	y = y+1;
	printf("After Adding: 	%d\n",y);
}

