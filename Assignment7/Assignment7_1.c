///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											  
//	Problem Statement : Write a program which accept number from user and display its digits in reverse order			  		  
//											  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											  
//		Function Name 		: DisplayDigit						  
//		Input 				: Accepts one integer						  	
//		Output 				: No return type							  
//		Description 		: Displays number in digits in reverse order		  
//		Author Name 		: Ronak Sunil Mutha						  
//		Date 				: 10/05/2023							  	
//											  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayDigit(int iNo)
{
	auto signed int iDigit = 0;
	
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);			
		iNo = iNo / 10;		
	}

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	auto signed int iValue = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);	
	
	DisplayDigit(iValue);
	
	return 0;

}
