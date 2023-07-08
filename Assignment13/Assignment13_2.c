///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Design application for income tax department to calculate tax amount.
//				According to the income tax department there is no income tax for
//				the income less than 5 lakhs.
//				If the income is in between 5 to 10 lakhs then there will be 10% tax.
//				If the income is in between 10 to 20 lakhs then there will be 20% tax.
//				And for more than 20 lakhs there will be 30% tax .				
//				We have to accpet gross income from user and return the tax amount.
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define INCOME1 500000
#define INCOME2 1000000
#define INCOME3 2000000

float IncomeTax(int iAmount)
{
	auto int iTax = 0;
	
	if(iAmount < INCOME1)
	{
		return iAmount;
	}
	
	else if( (iAmount >= INCOME1) || (iAmount < INCOME2))
	{
		iTax = ( (iAmount) + ((iAmount)*(0.10)) );
		return iTax;
	}
	
	else if( (iAmount >= INCOME2) || (iAmount < INCOME3) )
	{
		iTax = ( (iAmount) + ((iAmount)*(0.20)) );
		return iTax;
	}
	
	else
	{
		iTax =( (iAmount) + ((iAmount)*(0.30)) );
		return iTax;
	}
}

int main(int argc,char *argv[])
{

	auto unsigned int iIncome = 0;
	auto float fRet = 0.0f;
	
	printf("\nPlease enter your gross income : ");
	scanf("%d",&iIncome);
	
	fRet = IncomeTax(iIncome);
	
	if(fRet < 500000)
	{
		printf("\nThere is no tax for the income below 5 lakhs\n");
	}
	else
	{
		printf("\nTax on %d income is : %f\n",iIncome,fRet);
	}
		
	return 0;
	
}
