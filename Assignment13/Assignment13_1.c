//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Design application for hotel.According to the management team of hotel
//			            they are giving discount on total bill amount of customer.	
//			            If bill amount is less than 500 then there is no discount,if bill 	
//			            amount is less than 1500 they'll give 10% discount.
//			            And if the bill amount is more than 1500 then they will give 15% discount.        			    
//			            Our application should accept the total bill amount depends on the
//			            discount policy we have to return the amount after applying discount.  
//	
//	Input    	     : 1200 			Output : 1080
//	Input 		     : 290			 	Output : 290
//	Input 		     : 3700			    Output : 3145   
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define BILL1 500
#define BILL2 1500

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name 	 : CalculateBill
//	Input 			 : integer	
//	Output		 	 : return type float
//	Description	 	 : This function returns the amount after discount applied on the bill
//						if the amount is less than or equal to 1500 there is 10% discount
//				    	and if the amount is greater than 1500 then there is 15% discount on bill 
//				    	and if the amount is less than 500 then there is no discount
//						for example if the bill is 1200 it returns the 10% discount on 1200
//	Author 		 	 : Ronak Sunil Mutha			
//	Date 		 	 : 19/05/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float CalculateBill(int iAmount)
{
	if(iAmount < 0)
	{
		iAmount = -iAmount;
	}

	if ( (iAmount <= BILL1) || (iAmount <= BILL2) )
	{
		iAmount = (iAmount - (iAmount)*(0.10));
		return iAmount;	
	}
	else
	{
		iAmount = (iAmount - (iAmount)*(0.15));
		return iAmount;
	}

}

////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{
	printf("\n\t\t-*-*-*-*-*-*-*-*-*-* Welcome to hotel Marvellous *-*-*-*-*-*-*-*-*-*-\n");
	
	auto signed int iValue = 0;
	auto float fRet = 0.0f;
	
	printf("\nPlease enter the total bill amount : ");
	scanf("%d",&iValue);
	
	fRet = CalculateBill(iValue);
	if(fRet <= BILL1)
	{
		printf("\nYour bill amount is %d there is no discount on amount below or equal to 500 you have to pay the full amount\n",iValue);

	}
	else
	{
		printf("\nYour amount to pay after discount is : %f\n",fRet);
	}
	
	printf("\nDo visit again!\n");	
		
	return 0;
}
