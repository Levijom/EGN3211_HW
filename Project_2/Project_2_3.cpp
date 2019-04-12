#include <stdio.h>
#include <math.h>
int main(void){
	int months,term,i,j,emonth;
	float rate,monthly,interest=0,interest2=0,intsave,paid=0,loan,remaining,remaining2,moint,princ,incu=0,pcu=0,extra,eyear;
	printf("--------------------------------\n\tLOAN TERMS\n--------------------------------\nLoan Amount:\t\t");
	scanf("%f",&loan);
	printf("Interest Rate:\t\t");
	scanf("%f",&rate);
	printf("Term:\t\t\t");
	scanf("%d",&term);
	printf("Exra Monthly Capital:\t");
	scanf("%f",&extra);
	//calculations
	rate/=12;
	rate*=.01;	
	months=term*12;
	monthly=(float)((loan*rate*(pow((1+rate),months)))/((pow((1+rate),months))-1));
	remaining=loan;
	remaining2=loan;
	for(i=1;i<=months;i++){
		moint=rate*remaining;
		interest+=moint;
		remaining-=(monthly+extra-moint);
		incu+=moint;
		princ=monthly-moint;
		pcu+=princ;
		if (((i-1)%12==0)&&(remaining>0)) printf("-----------------------------------------------------------------------------------------------------------------------\nYear\tMonth\t\tInterest\tPrinciple\tBalance \t|\tInterest\tPrinciple\tExtra\n-----------------------------------------------------------------------------------------------------------------------\n%d\t%d\t\t%.2f\t\t%.2f\t\t%.2f \t|\t%.2f  \t%.2f  \t%.2f\n",(i/12),i,moint,princ,remaining,incu,pcu,extra);
		else if(remaining>0) printf("\t%d\t\t%.2f\t\t%.2f\t\t%.2f \t|\t%.2f  \t%.2f \t%.2f\n",i,moint,princ,remaining,incu,pcu,extra);
		else{
			j=i;
			break;
		}
	}
	for(i=0;i<months;i++){
		moint=rate*remaining2;
		interest2+=moint;
		remaining-=(monthly-(moint));
	}
	emonth=months-j;
	eyear=(float)emonth/12;
	intsave=interest2-incu;
	printf("\nThe payments are finished about %d months (%.1f years) earlier!\nThe interest saving is %.2f",emonth,eyear,intsave);
}
