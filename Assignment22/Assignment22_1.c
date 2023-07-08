/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement : Write a program which accept string from user and count number of capital characters
//		Input		  : "Marvellous Multi OS"
//		Output		  :  4
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	  : CountCapital
//		Input		  : Character array (string)
//		Output		  : returns integer
//		Description	  : This function accepts string from user and count number of capital letters in string
//		Author		  : Ronak Sunil Mutha
//		Date		  : 20/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *Str)
{
	auto signed int iCount = 0;
	
	while (*Str != '\0')
	{
		if ( (*Str >= 'A') && (*Str <= 'Z') )
		{
			iCount = iCount + 1;
		}
		Str = Str + 1;

	}
	return iCount;

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
	
	iRet = CountCapital(cArr);
	printf("Capital letters in '%s' string are : %d\n",cArr,iRet);

	return 0;

}