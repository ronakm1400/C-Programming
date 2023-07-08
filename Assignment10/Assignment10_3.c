///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and check whether that number contains 11 in it or not. 
//				
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 		: Check
//		Input 				: integer array , integer 
//		Output 				: returns boolean value
//		Description 		: This function checks whether 11 number is present in array list or not and returns true if number is 
//					   		  present or returns false if number is not present 
//		Author Name 		: Ronak Sunil Mutha
//		Date 				: 11/05/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int iArr[],int iLength)
{
	auto BOOL bFlag = FALSE;
	register int iCnt = 0;
	
	for (iCnt = 0; iCnt < iLength; iCnt++)
	{
		if ( iArr[iCnt] == 11 )
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
	
	auto signed int iSize = 0;
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
	
	//////////////////////////////////////////////////////
	// Passing the array to the business logic function
	/////////////////////////////////////////////////////
	
	bRet = Check(iPtr,iSize);
	
	if (bRet == TRUE)
	{
		printf("\n11 is present\n");
	}
	else
	{
		printf("\n11 is not present\n");
	}
	
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////
		
	free(iPtr);
	
	printf("\nMemory Freed Successfully!\n");
	
	return 0;
	
}
