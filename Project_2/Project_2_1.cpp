/*
The nominal interest rate, 4% in the example, is a yearly interest rate. 
This rate is divided by 12 to obtain the monthly interest rate. 
The monthly interest rate is 4/12 = 0.33%. 
This means the bank charges 0.33% on the outstanding capital amount each month. 
For the first month, the outstanding amount is $150,000. 
Therefore, the borrower is charged 0.33% * $150,000 = $495. 
In later months, the remaining capital goes down. 
Let’s say after a few years of paying, the outstanding capital is $100,000. 
For that month, the borrower is charged 0.33% * $100,000 = $330 of interest. 
We can see that the amount of interest paid goes down as the borrower progresses in making payments. 
The magic of loan arithmetic is to have the borrower pay a fixed monthly amount over the lifetime of the loan. 
This amount is derived by the equation below. The term L is the total loan amount. 
The term m_rate is the monthly interest rate (0.33% in our example). 
The term months is the total loan duration in months (180 months in our example).

P = L * m_rate * (1+m_rate)^months /  [ ((1+m_rate)^months) - 1 ]  

Plugging the numbers of our example gives a monthly payment amount of $1,109.53. 
In the first month, we already computed that the interest payment is $495. 
The remaining ($1,109.53 - $495) = $614.53 applies to the loan capital. 
After this payment is made, the borrower owes the bank ($150,000 - $614.53) = $149,385.47. 
At a later time, let’s say the borrower still owes $100,000. 
We computed above that the interest would be $330. 
Accordingly, in that month, an amount of ($1,109.53 - $330) = $779.53 is applied to the loan capital. 
Moving forward, the borrower owes $100,000 - $779.53 = $99,220.47. 
From these two examples, we can see that the user pays a fixed monthly amount over the lifetime of the loan. 
However, as the loan payment progresses, the portion applied to interest decreases and the portion applied to the capital increases. 
The magic of the formula is that the bank keeps charging the interest rate on the outstanding capital each month and the loan is 
fully paid off by the end of the term while the borrower pays a fixed amount. 
*/
#include <stdio.h>
int main(void){
	int loan,rate,term,monthly,interest,paid,months;
	printf({"--------------------------------\n\tLOAN TERMS\n--------------------------------\nLoan Amount:\t\t"});
	scanf("%d",&loan);
	printf("Interest Rate:\t\t");
	scanf("%d",&rate);
	printf("Term:\t\t\t");
	scanf("%d",&term);
	
	rate*=.12;
	months=term*12;
	monthly=loan*rate*(1+rate)^months /(((1+rate)^months)-1);
	
	printf("--------------------------------\n\nMonthly payment is: \t%d\nTotal interest is:\t%d\nTotal amount paid is\t%d",monthly,interest,paid);
}
