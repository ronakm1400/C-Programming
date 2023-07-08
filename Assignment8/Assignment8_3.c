/////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Write a program which accept number from user and return
//			    the count of digits in between 3 and 7.	
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//	 Function Name 	: CountRange
//	 Input 			: Accepts one integer
//	 Output 		: Returns integer
//	 Description	: Counts digits in between 3 and 7 in number and returns the count
//	 Author Name 	: Ronak Sunil Mutha
//	 Date 			: 10/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
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
		
		if ( (iDigit > 3) && (iDigit < 7) )
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

	iRet = CountRange(iValue);
	printf("Count of digits in between 3 and 7 is : %d \n",iRet);

	return 0;

}
