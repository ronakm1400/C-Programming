/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and accept one number as No,Check whether No is present or not
//				
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name : Check
//		Input	      : integer array , integer 
//		Output	      : returns boolean value
//		Description   : This function accepts number from user and checks whether number is present or not	
//		Author Name   : Ronak Sunil Mutha
//		Date	      : 11/05/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int iArr[],int iLength,int iNo)
{
	auto BOOL bFlag = FALSE;
	register int iCnt = 0;

	for (iCnt = 0; iCnt < iLength; iCnt++)
	{
		if ( iArr[iCnt] == iNo )
		{
			bFlag = TRUE;
		}
	}
	return bFlag;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[])
{
	printf("\n-------------- Application programming using dynamic memory allocation --------------\n");
	
	auto signed int iSize = 0,iValue = 0;
	auto BOOL bRet = FALSE;
	auto signed int *iPtr = NULL;
	register int iCnt = 0;
	
	///////////////////////////////////////////////////
	// Accept the number of elements from user
	///////////////////////////////////////////////////
	
	printf("\nEnter number of elements you want to store : \n");
	scanf("%d",&iSize);
	
	if (iSize < 0)
	{
		iSize = -iSize;
	}
	
	////////////////////////////////////////////////////
	// Allocating memory dynamically
	////////////////////////////////////////////////////
	
	iPtr = (int *)malloc(iSize * (sizeof(int)));
	
	if(iPtr == NULL)
	{
		printf("\nUnable to allocate memory!\n");
		return -1;
	}
	else
	{
		printf("\nMemory allocated successfully!\n");
	}
	
	/////////////////////////////////////////////////////
	// Accept the values from user
	/////////////////////////////////////////////////////
	
	printf("\nEnter %d elements : \n",iSize);
	
	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if( iPtr[iCnt] < 0 )
		{
			iPtr[iCnt] = -iPtr[iCnt];
		}
		scanf("%d",&iPtr[iCnt]);
	}
	
	printf("\nEnter number which you want to know that it is present or not : \n");
	scanf("%d",&iValue);

	
	//////////////////////////////////////////////////////
	// Passing the array to the business logic function
	/////////////////////////////////////////////////////
	
	bRet = Check(iPtr,iSize,iValue);
	
	if (bRet == TRUE)
	{
		printf("\n%d is present\n",iValue);
	}
	else
	{
		printf("\n%d is not present\n",iValue);
	}
	
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////
		
	free(iPtr);
	
	printf("\nMemory Freed Successfully!\n");
	
	return 0;
	
}
