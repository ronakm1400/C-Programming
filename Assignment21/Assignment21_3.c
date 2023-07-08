///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement : Accept character from user. If it is capital then display all the characters from
//					input till Z. If input character is small then print all the characters in 	
//					reverse order till a. In other cases return directly.
//
//					Input  : Q					
//					Output : Q R S T U V W X Y Z
//
//					Input  : m
//					Output : m l k j i h g f e d c b a	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name : DisplayCharacters
//		Input	      : Accepts one character		 	 	
//		Output	      : returns nothing
//		Description   : This function accept character from user. If it is capital then display all the 
//					characters from input till Z. If input character is small then print all the 
//					characters in reverse order till a. In other cases return directly.
//		Author Name   : Ronak Sunil Mutha
//		Date 	      : 20/05/2023	
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayCharacters(char cVal)
{
	register int iCnt = 0;
	
	for (iCnt = 1; iCnt <= cVal; iCnt++)
	{
		if ( (cVal >= 'A') && (cVal <= 'Z') )
		{
			cVal = cVal + 1;
			printf("%c\t",cVal-1);	
		}
		
		else if ( (cVal >= 'a') && (cVal <= 'z') )
		{
			cVal = cVal - 1;	
			iCnt = iCnt - 1;
			printf("%c\t",cVal+1);
		}
		else
		{
			printf(" ");
		}	
	}
	printf("\n");
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
