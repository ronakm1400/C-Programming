/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and accept one another number as NO,return frequency of NO from it
//				
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 		: Frequency
//		Input 				: integer array , integer , integer 
//		Output 				: returns integer
//		Description 		: This function returns the frequency of number entered by user 
//		Author Name 		: Ronak Sunil Mutha
//		Date 				: 11/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int iArr[],int iLength,int iNo)
{
	auto signed int iCounter = 0;
	register int iCnt = 0;
	
	for (iCnt = 0; iCnt < iLength; iCnt++)
	{
		if ( iArr[iCnt] == iNo )
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
	
	auto signed int iSize = 0,iRet = 0,iValue = 0;
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
	
	printf("\nEnter number which you want to know that is occured frequently : \n");
	scanf("%d",&iValue);
	
	//////////////////////////////////////////////////////
	// Passing the array to the business logic function
	/////////////////////////////////////////////////////
	
	iRet = Frequency(iPtr,iSize,iValue);
	printf("\nFrequency of %d is : %d\n",iValue,iRet);
	
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////
		
	free(iPtr);
	
	printf("\nMemory Freed Successfully!\n");
	
	return 0;
	
}
