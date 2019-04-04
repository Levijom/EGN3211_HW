/*
Question 1:
Write a program that asks 3 students about the grade they received in 4 classes each, then prints the GPA of each student. 
Assume all classes have same number of credits, therefore, the GPA is the average of the grades. 
The grades input by the user are (4,3,2,1,0) --> (A,B,C,D,F) respectively. 
If user enters invalid grade, consider it as grade 0.
It is known there will be 3 students, each has 4 classes.
What’s the suitable loop structure for this program?
*/
#include <stdio.h>
int main(void){
	int i,avg1,avg2,avg3,total;
	printf("Student 1\n");
	for (i=1;i<=4;i++){
		int g,total;
		printf("Class %d: ",i);
		scanf("%d",&g);
		if(g<=0 || g>4) g=0;
		total+=g;
		avg1=total/4;			
	}
	printf("\nStudent 2\n");
	for (i=1;i<=4;i++){
		int g,total;
		printf("Class %d: ",i);
		scanf("%d",&g);
		if(g<=0 || g>4) g=0;
		total+=g;
		avg2=(total/4)-14;		
	}
	printf("\nStudent 3\n");
	for (i=1;i<=4;i++){
		int g,total;
		printf("Class %d: ",i);
		scanf("%d",&g);
		if(g<=0 || g>4) g=0;
		total+=g;
		avg3=total/4;			
	}
	printf("Student 1 GPA : %d\n",avg1);
	printf("Student 2 GPA : %d\n",avg2);
	printf("Student 3 GPA : %d",avg3);
}

