////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											  	
//	Problem Statement : Write a program which accepts number from user and check whether it contains 0 in it or not	  	  		
// 											  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////////////
//											  
//		Function Name 		: CheckZero						  	
//		Input 				: Accepts one integer						  
//		Output 				: Returns boolean value  					  
//		Description 		: Checks whether if there is 0 present in number 		  	
//		Author Name 		: Ronak Sunil Mutha						  
//		Date 				: 10/05/2023							  	
//											  						  
////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckZero(int iNo)
{
	auto signed int iDigit = 0;
	auto BOOL bFlag = FALSE;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
		
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit == 0)
		{
			bFlag = TRUE;
		}		
		
		iNo = iNo / 10;
	
	}
	return bFlag;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	auto signed int iValue = 0;
	auto BOOL bRet = FALSE;
		
	printf("Enter Number : ");
	scanf("%d",&iValue);

	bRet = CheckZero(iValue);
	
	if(bRet == TRUE)
	{
		printf("0 is present in %d \n",iValue);
	}
	else
	{
		printf("0 is not present in %d \n",iValue);
	}
	return 0;
	
}
