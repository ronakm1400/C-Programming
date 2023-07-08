//////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept number from user and display below pattern
//	Input		  	  : 8
//	Output 		  	  :  2 4 6 8 10 12 14 16 	
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name : DisplayPattern
//	Input	      :	integer
//	Output	      : returns nothing	
//	Description   : This function accepts number from user and prints 2 4 6 8 10 12 14.... 
//	Author 	      : Ronak Sunil Mutha
//	Date	      : 15/05/2023	
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPattern(int iNo)
{

	register int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t",iCnt*2);
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
