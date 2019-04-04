/*
Question 1:
Write a program that reads the temperature and unit from the user and prints a message indicating if it’s hot, cool or cold. 
The user may enter the temperature either in Fahrenheit or in Celsius.
Your program should use nested if-else statements.
Farenheight:	T	>=	80		HOT
				65 <= T < 80	Cool
				T < 65			Cold			
Celsius:		T	>=	27		Hot
				18 <= T < 27	Cool
				T < 18			Cold
*/
#include <stdio.h>
int main(void){
	int T,unit;
	printf("Enter unit (1:Farenheit, 2:Celsius) : ");
	scanf("%d",&unit);
	printf("Enter tepmerature: ",&T);
	scanf("%d",&T);
	if(unit==1){											//Farenheit
		if(T>135)printf("Invalid input!");					//Hottest temperature ever recorded is 134
		else if(T>=80)printf("The temperature is Hot!");
		else if(T>=65)printf("The temperature is Cool!");
		else printf("The temperature is Cold!");
	}
	else if(unit==2){										//Celsius
		if(T>57)printf("Invalid input!");
		else if(T>=27)printf("The temperature is Hot!");
		else if(T>=18)printf("The temperature is Cool!");
		else printf("The temperature is Cold!");
	}
	else printf("Invalid input!");
}





