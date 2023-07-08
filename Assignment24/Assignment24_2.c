/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement    :  Write a program which accept string from user and accept one character.
//						Return frequency of that character.
//
//		Input		     : "Marvellous Multi OS"		
//				     :	M
//
//		Output		     :	2
//	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 	: CountCharacter
//		Input		: Accepts character array and single character
//		Output		: Returns boolean value
//		Description	: This function accepts string and a character from user and returns the frequency of character
//		Author Name	: Ronak Sunil Mutha
//		Date		: 20/05/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountCharacter(char *Str,char cVal)
{
	auto int iCount = 0;		
	
	while (*Str != '\0')
	{
		if ( (*Str >= 'A') && (*Str <= 'Z') )
		{
			if (cVal == *Str)
			{
				iCount++;
			}
		}
		else if ( (*Str >= 'a') && (*Str <= 'z') )
		{
			if (cVal == *Str)
			{
				iCount++;
			}
		}
		Str++;
	}			
	return iCount;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{
	auto char cArr[25] = {'\0'};
	auto char ch = '\0';
	auto signed int iRet = 0;
	
	printf("Enter String : ");
	scanf("%[^'\n']s",cArr);

	printf("Enter character : ");
	scanf(" %c",&ch);
	
	iRet = CountCharacter(cArr,ch);		
	
	printf("Frequency of %c character is : %d\n",ch,iRet);	
		
	return 0;
	
}
