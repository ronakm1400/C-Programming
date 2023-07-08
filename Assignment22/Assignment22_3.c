/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement : Write a program which accept string from user and return difference between 
//					frequency of small characters and capital characters 
//
//		Input		  : "Marvellous Multi OS"
//		Output		  :  11 (4 - 13)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	  : CountCapital
//		Input		  : Character array (string)
//		Output		  : returns integer
//		Description	  : This function accepts string from user and returns the difference
//		Author		  : Ronak Sunil Mutha
//		Date		  : 20/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *Str)
{
	auto signed int iFreqSmall = 0,iFreqCap = 0,iDiff = 0;
	
	while (*Str != '\0')
	{
		if ( (*Str >= 'A') && (*Str <= 'Z') )
		{
			iFreqCap = iFreqCap + 1;
		}
		
		else if ( (*Str >= 'a') && (*Str <= 'z') )
		{
			iFreqSmall =iFreqSmall + 1;
		}
		Str = Str + 1;
	}
	
	iDiff = iFreqSmall - iFreqCap;
	if (iDiff<0)
	{
		iDiff = -iDiff;
	}
	
	return iDiff;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv)
{

	auto char cArr[25] = {'\0'};
	auto signed int iRet = 0;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",cArr);
	
	iRet = Difference(cArr);
	printf("Difference in between frequency of capital and small letters is : %d\n",iRet);

	return 0;

}
