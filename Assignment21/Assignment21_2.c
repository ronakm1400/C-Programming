/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement : Accept character from user. If character is small display its corresponding 
//					capital character , and if it is small then display its corresponding capital.
//					In other cases display as it is.
//					
//					Input : A	Output : a
//					Input : z	Output : Z
//					Input : @	Output : @
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define CONST 32

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 	: DisplayCharacters
//		Input 		: accepts character
//		Output		: returns nothing
//		Description	: This function accepts the character from user and displays its corresponding 
//					capital or small letter
//		Author Name	: Ronak Sunil Mutha
//		Date		: 20/05/2023	
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayCharacters(char cVal)
{
	if ( (cVal >= 'a') && (cVal <= 'z') )
	{
		cVal = cVal - CONST;
		printf("%c\n",cVal);
	}	
	
	else if ( (cVal >= 'A') && (cVal <= 'Z') )
	{
		cVal = cVal + CONST;
		printf("%c\n",cVal);
	}
	else
	{
		printf("%c\n",cVal);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{

	auto char ch = '\0';
	
	printf("Please enter character of your choice : ");
	scanf("%c",&ch);
	
	DisplayCharacters(ch);	

	return 0;

}
