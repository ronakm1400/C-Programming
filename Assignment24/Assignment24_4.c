///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement  :  Write a program which accept string from user and accept one character. 
//						Return index of last occurence of that character. 
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_NOTFOUND -1

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name  	  : LastOccurence
//		Input		  : array of character,single character	
//		Output		  : returns integer
//		Description	  : This function returns the index of last occurence of a character	
//		Author Name	  : Ronak Sunil Mutha	
//		Date		  : 20/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int LastOccurence(char *Str,char cVal)
{
	register int iCnt = 1;
	auto int iPos = ERR_NOTFOUND;
	
	while (*Str != '\0')
	{
		if (*Str == cVal)
		{
			iPos = iCnt;
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
	
	iRet = LastOccurence(cArr,ch);
	
	if( iRet == ERR_NOTFOUND )
	{
		printf("No such character\n");
	}
	else
	{
		printf("Last Occurence of %c is at : %d position\n",ch,iRet);
	}
	
	return 0;

}
