/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement : Accept a character from user and display its ASCII value in decimal,octal and
//					hexadecimal format
//					
//					Input	: A	
//					Output	: Decimal 	65
//						  Octal	  	0101
//						  Hexadecimal	0X41
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 	: Display
//		Input		: Accepts single character 
//		Output 		: returns nothing
//		Description	: This function accepts a character from user and display its ASCII value 
//					   in decimal,octal and hexadecimal format
//		Author Name	: Ronak Sunil Mutha
//		Date 		: 20/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char cVal)
{
	if ( (cVal >= 'A') && (cVal <= 'Z') || (cVal >= 'a') && (cVal <= 'z'))
	{
		printf("Decimal value of %c : %d\n",cVal,cVal);
		printf("Octal value of %c : %o\n",cVal,cVal);
		printf("Hexadecimal value %c : %x\n",cVal,cVal);
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
	
	Display(ch);	

	return 0;

}
