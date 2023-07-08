/////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Write a program which accept number from user and return
//			    the count of Odd digits.	
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//	 Function Name 	: CountOdd
//	 Input 			: Accepts one integer
//	 Output 		: Returns integer
//	 Description 	: Counts Odd digits in number and returns the count
//	 Author Name 	: Ronak Sunil Mutha
//	 Date 			: 10/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
	
	auto signed int iDigit = 0;
	auto int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while (iNo != 0)
	{
		iDigit = iNo % 10;
		
		if ((iDigit % 2) != 0)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;

}

/////////////////////////////////////////////////////////////////////////////////////////
//
//		Entry Point Function Main
//
/////////////////////////////////////////////////////////////////////////////////////////


int main(int argc, char *argv[])
{

	auto signed int iValue = 0;
	auto signed int iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);

	iRet = CountOdd(iValue);
	printf("Odd digits in %d is : %d \n",iValue,iRet);

	return 0;

}
