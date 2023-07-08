///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											     
//			 Problem Statement : Accept number from user and check whether number is even or odd                                   
//									
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//							     
// 			 						Function Name : ChkEven				     	
// 			 						Input : Accepts one integer				     
// 			 						Output : Returns boolean value 				     
// 			 						Description : Checks whether number is even or odd and returns true if number
//												  is even and returns false if number is odd
// 	     	 		       			Author : Ronak Sunil Mutha				     
//									Date : 23.04.2023					     
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkEven(int iNo)
{
	if ((iNo%2) == 0)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;	
	}	

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//								
// 										 Entry point function main									
//												
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main(int argc , char *argv[])
{
	auto int iValue = 0;	
	BOOL bRet = FALSE;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);	
	
	if (bRet == TRUE)
	{
		printf("Even Number\n");
	}
	else
	{
		printf("Odd Number\n");
	}
	
	return 0;

}