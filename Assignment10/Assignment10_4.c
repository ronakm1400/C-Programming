///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and returns the frequency of number 11
//				
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 	: Frequency
//		Input 			: integer array , integer 
//		Output 			: returns integer
//		Description 	: This function returns the frequency of number 11 
//		Author Name 	: Ronak Sunil Mutha
//		Date 			: 11/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int iArr[],int iLength)
{
	auto signed int iCounter = 0;
	register int iCnt = 0;
	
	for (iCnt = 0; iCnt < iLength; iCnt++)
	{
		if ( iArr[iCnt] == 11 )
		{
			iCounter = iCounter + 1;
		}
	}
	return iCounter;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[])
{
	printf("\n-------------- Application programming using dynamic memory allocation --------------\n");
	
	auto signed int iSize = 0,iRet = 0;
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
	
	iRet = Frequency(iPtr,iSize);
	printf("\nFrequency of number 11 is : %d\n",iRet);
	
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////
		
	free(iPtr);
	
	printf("\nMemory Freed Successfully!\n");
	
	return 0;
	
}