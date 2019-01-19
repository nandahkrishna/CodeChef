#include<stdio.h>
int main()
{
    float balance_amt;
	  int withdraw_amt;
    scanf("%d %f",&withdraw_amt,&balance_amt);
    if(withdraw_amt%5 == 0)
    {    if(balance_amt > withdraw_amt + 0.5)
    	   {
				    balance_amt = balance_amt - withdraw_amt - 0.5;
    	   }
		}
		printf("%.2f",balance_amt);
    return 0;  
}
