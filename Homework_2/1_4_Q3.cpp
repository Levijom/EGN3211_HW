/*
Question 3:
Write a program that reads a character and prints it ASCII number. 
Produce the exact output format shown below.

Write a program that reads an ASCII character from the user and 
prints out the category the character belongs to, based on the list below
Uppercase letter
Lowercase letter
Digit (0 to 9)
Not alphanumeric (neither a digit nor a letter)
*/

#include <stdio.h>
int main(void){
	char inpt;
	printf("Enter a character: ");
	scanf("%c",&inpt);
	printf("The ASCII number is %u\n",inpt);
	//Category the character belongs to
	if(inpt>='A' && inpt<='Z')
		printf("The character %c is Upper Case.",inpt);
	else if(inpt>='a' && inpt<='z')
		printf("The character %c is Lower Case",inpt);
	else if(inpt>='0' && inpt<='9')
		printf("The character %c is an integer",inpt);
	else printf("The character %c is not alphanumeric.",inpt);	
}
