////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Write a program which accept number from user and return the difference between summation of 
//						even digits and summation of odd digits.	
//		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//	 Function Name 		: CountDiff
//	 Input 				: Accepts one integer
//	 Output 			: Returns integer
//	 Description 		: Finds the difference between summation of even digits and summation 
//						  of odd digits in number and returns the difference
//	 Author Name 		: Ronak Sunil Mutha
//	 Date 				: 10/05/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
	auto signed int iSumEven = 0,iSumOdd = 0,iDiff = 0;
	auto signed int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		
		if ( (iDigit % 2) == 0)
		{
			iSumEven = iSumEven + iDigit;
		}
		
		if ( (iDigit % 2) != 0)
		{
			iSumOdd = iSumOdd + iDigit;
		}
		
		iDiff = iSumEven - iSumOdd;
		
		if (iDiff < 0)
		{
			iDiff = -iDiff;
		}
		
		iNo = iNo / 10;
	}
	return iDiff;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[])
{

	auto signed int iValue = 0;
	auto signed int iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet = CountDiff(iValue);
	printf("Difference is between summation of odd and even digits is : %d \n",iRet);

	return 0;

}
