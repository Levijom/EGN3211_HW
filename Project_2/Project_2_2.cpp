/*
The amortized schedule shows the amounts that go towards interest and principal for each month. 
Write a function that takes the loan terms as parameters and prints the amortized schedule. 
The function header and a sample output are shown below. 
The rightmost two columns (INTEREST, PRINCIPAL) are cumulative figures and show the total interest and principal paid to date. 
Like the sample below, print the year number only for the first month of the year and print the header again for each year. 
The format should be easy to read (i.e., right align the numbers and the text).
void output_amortized(double loan_amount, double interest_rate, double term_years);
- 2
*/
#include <stdio.h>
#include <math.h>
int main(void){
	int months,term,i;
	float rate,monthly,interest=0,paid=0,loan,remaining,moint,princ,incu=0,pcu=0;
	printf("--------------------------------\n\tLOAN TERMS\n--------------------------------\nLoan Amount:\t\t");
	scanf("%f",&loan);
	printf("Interest Rate:\t\t");
	scanf("%f",&rate);
	printf("Term:\t\t\t");
	scanf("%d",&term);
	//calculations
	rate/=12;
	rate*=.01;	
	months=term*12;
	monthly=(float)((loan*rate*(pow((1+rate),months)))/((pow((1+rate),months))-1));
	remaining=loan;
	for(i=1;i<=months;i++){
		moint=rate*remaining;
		interest+=moint;
		remaining-=(monthly-(moint));
		incu+=moint;
		princ=monthly-moint;
		pcu+=princ;
		if ((i-1)%12==0) printf("-----------------------------------------------------------------------------------------------------------\nYear\tMonth\t\tInterest\tPrinciple\tBalance \t|\tInterest\tPrinciple\n-----------------------------------------------------------------------------------------------------------\n%d\t%d\t\t%.2f\t\t%.2f\t\t%.2f \t|\t%.2f  \t%.2f\n",(i/12),i,moint,princ,remaining,incu,pcu);
		else printf("\t%d\t\t%.2f\t\t%.2f\t\t%.2f \t|\t%.2f  \t%.2f\n",i,moint,princ,remaining,incu,pcu);
	}
}
