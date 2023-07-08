//////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept number from user and display below pattern
//	Input			  : 5
//	Output 			  : A B C D E				   	
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name : DisplayPattern
//	Input	      :	integer
//	Output	      : returns nothing	
//	Description   : This function accepts number from user and prints A B C D(characters)
//		 			till the number user had entered
//	Author 	      : Ronak Sunil Mutha
//	Date	      : 15/05/2023	
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPattern(int iNo)
{

	register int iCnt = 0;
	auto char ch = '\0';
	
	for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++)
	{
		printf("%c\t",ch);
		ch = ch + 1;
	}
	printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////
//			Entry point function main
///////////////////////////////////////////////////////////////////////////////////////////////


int main(int argc , char * argv[])
{
	printf("\t-*-*-*-*-*-*-*-*-*-*-*-*-*- Pattern printing program -*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	
	auto signed int iValue = 0;
	
	printf("\nEnter number : ");
	scanf("%d",&iValue);

	DisplayPattern(iValue);
	
	return 0;

}
