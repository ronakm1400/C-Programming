/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement : Accept Character from user and check whether it is capital or not
//					(A-Z)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 	: CheckCapital
//		Input 		: Accepts one character
//		Output		: returns Boolean value
//		Description	: This function accepts a single charachter from user and checks whether it is 
//					capital alphabet or not. Returns true if it is an capital else returns false
//		Author Name 	: Ronak Sunil Mutha
//		Date		: 20/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL CheckAlphabet(char cVal)
{

	if  ((cVal >= 'A') && (cVal <= 'Z')) 
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{

	auto char ch = '\0';
	BOOL bRet = FALSE;

	printf("\nEnter character of your choice : ");
	scanf("%c",&ch);
	
	bRet = CheckAlphabet(ch);
	
	if(bRet == TRUE)
	{
		printf("\n%c is capital\n",ch);
	}
	else
	{
		printf("\nIt is not capital\n");
	}
	

	return 0;

}
