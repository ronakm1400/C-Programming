/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement    :  Write a program which accept string from user and accept one character.
//						Check whether that character is present in string or not.
//
//		Input		     : "Marvellous Multi OS"		
//				     :	e
//
//		Output		     :	True
//	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 	: CheckCharacter
//		Input		: Accepts character array and single character
//		Output		: Returns boolean value
//		Description	: This function accepts string and a character from user and checks that character 
//					is present int string or not
//		Author Name	: Ronak Sunil Mutha
//		Date		: 20/05/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckCharacter(char *Str,char cVal)
{
		
	while (*Str != '\0')
	{
		if ( (*Str >= 'A') && (*Str <= 'Z') )
		{
			if (cVal == *Str)
			{
				break;
			}
		}
		else if ( (*Str >= 'a') && (*Str <= 'z') )
		{
			if (cVal == *Str)
			{
				break;
			}
		}
		Str++;
	}			
	return (cVal == *Str);

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{
	auto char cArr[25] = {'\0'};
	auto char ch = '\0';
	auto BOOL bRet = FALSE;
	
	printf("Enter String : ");
	scanf("%[^'\n']s",cArr);

	printf("Enter character : ");
	scanf(" %c",&ch);
	
	bRet = CheckCharacter(cArr,ch);		
	if (bRet == TRUE)
	{
		printf("%c is present in the string\n",ch);
	}	
	else
	{
		printf("%c is not present in the string\n",ch);
	}	
	
	return 0;
	
}
