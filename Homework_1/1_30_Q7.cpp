/*
Question 7:
Write one if statement for each of the following;
*/

#include <stdio.h>
int main(void){
	int a,b,x,y,z;
//a)	Write an if statement that's true when a is either equal to either x,y,or z;
if(a==x || a==y || a==z)
	condition;

//b)	Write an if statement that's true when a is equal to all x,y,and z;
if(a==x && a==y && a==z)
	condition;
	
//c)	Write an if statement that's true when a is between 90 and 100 inclusive;
if(a>=90 && a<=100 )
	condition;
	
//d)	Write an if statement that's true opposite of part c;
if(a<=90 || a>=100 )
	condition;
	
//e)	Write an if statement that's true when a is 1 and b is between 10 and 20 inclusive;
if(a==1 && b>=10 && b<=20 )
	condition;

//f)	Write an if statement that's true when a is between 30 and 40 exclusive or b is between 80 and 90 exclusive;
if((a>30 && a<40) || (b>=80 && b<=90 )
	condition;


}
