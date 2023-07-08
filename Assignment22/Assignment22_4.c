/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement : Write a program which accept string from user and check whether it contains 
//					vowels in it or not
//		Input		  : "Marvellous"		Input		: "Demo"
//		Output		  : TRUE			Output		: TRUE
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name	  : CheckVowel
//		Input		  : Character array (string)
//		Output		  : returns boolean value
//		Description	  : This function accepts string from user and returns true if the vowel is present
//						else returns false if the vowel is not present 
//		Author		  : Ronak Sunil Mutha
//		Date		  : 20/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckVowel(char *Str)
{
	auto signed int iCount = 0;
	
	while (*Str != '\0')
	{
		if ( (*Str == 'A') || (*Str == 'a') || (*Str == 'E') || (*Str == 'e') || (*Str == 'I') || (*Str == 'i') || (*Str == 'O') || (*Str == 'o') || (*Str == 'U') || (*Str == 'u') )
	 	{
	 		iCount++;
	 		break;
	 	}
	 	Str++;
	}
	if (iCount == 1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv)
{

	auto char cArr[25] = {'\0'};
	auto BOOL bRet = FALSE;
	
	printf("Enter string : ");
	scanf("%[^'\n']s",cArr);
	
	bRet = CheckVowel(cArr);
	
	if (bRet == TRUE)
	{
		printf("'%s' contains vowel\n",cArr);
	}
	else
	{
		printf("'%s' does not contain vowel\n",cArr);
	}

	return 0;

}
