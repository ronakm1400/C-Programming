/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement  : Write a program which accepts string from user and display only digits from string.
//						
//						Input	  : "Marvellous123456Infosystems"
//						Output	  : "123456"						
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define CONST 32

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name  	  : DisplayDigits
//		Input		  : character array		
//		Output		  : returns nothing
//		Description	  : This function accepts string from user and display only digits in string	
//		Author Name	  : Ronak Sunil Mutha	
//		Date		  : 20/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(char *Str)
{
	
	while (*Str != '\0')
	{
		if ( (*Str >= '0') && (*Str <= '9') )
		{
			printf("%c",*Str);
		}
		Str++;
	}
	printf("\n");
}	

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{

	auto char cArr[25] = {'\0'};
	
	printf("Enter String : ");
	scanf("%[^'\n']s",cArr);
	
	DisplayDigits(cArr);	
	
	return 0;

}
