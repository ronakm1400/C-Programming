///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement  :  Write a program which accept string from user and accept one character. 
//						Return index of first occurence of that character. 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_NOTFOUND -1

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name  	  : FirstOccurence
//		Input		  : array of character,single character	
//		Output		  : returns integer
//		Description	  : This function returns the index of first occurence of a character	
//		Author Name	  : Ronak Sunil Mutha	
//		Date		  : 20/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstOccurence(char *Str,char cVal)
{
	register int iCnt = 1;
	auto int iPos = ERR_NOTFOUND;
	
	while (*Str != '\0')
	{
		if (*Str == cVal)
		{
			iPos = iCnt;
			break;
		}
		Str++;
		iCnt++;
		
	}
	return iPos;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{
	auto char cArr[25] = {'\0'};
	auto char ch = '\0';
	auto int iRet = 0;
	
	printf("Enter String : ");
	scanf("%[^'\n']s",cArr);
	
	printf("Enter a character : ");
	scanf(" %c",&ch);
	
	iRet = FirstOccurence(cArr,ch);
	
	if( iRet == ERR_NOTFOUND )
	{
		printf("No such character\n");
	}
	else
	{
		printf("First Occurence of %c is at : %d position\n",ch,iRet);
	}
	
	return 0;

}
