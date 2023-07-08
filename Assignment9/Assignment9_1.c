////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and return difference between summation of even elements and 
//						summation of odd elements.	
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 	: Difference
//		Input 			: integer array , integer 
//		Output 			: returns integer
//		Description 	: This function performs difference between summation of even and odd elements in array 
//		Author Name 	: Ronak Sunil Mutha
//		Date 			: 11/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int iArr[], int iLength)
{
	auto int iSumEven = 0, iSumOdd = 0,iDiff = 0;
	register int iCnt = 0;
	
	for (iCnt = 0; iCnt < iLength; iCnt++)
	{
		
		if ( (iArr[iCnt] % 2 ) == 0)	
		{
			iSumEven = iSumEven + iArr[iCnt];
		}
		
		if( (iArr[iCnt] % 2 ) != 0)
		{
			iSumOdd = iSumOdd + iArr[iCnt];
		}
		
		iDiff = iSumEven - iSumOdd;
		
		if(iDiff < 0)
		{
			iDiff = -iDiff;
		}
		
	}
	
	return iDiff;	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char *argv[])
{
	printf("\n-------------- Application programming using dynamic memory allocation --------------\n");	

	auto signed int iSize = 0,iRet = 0;
	auto int *iPtr = NULL;
	auto int iCnt = 0;
		
	///////////////////////////////////////////////
	// Accept the number of elements from user
	///////////////////////////////////////////////
	
	printf("Enter number of elements you want to store : \n");
	scanf("%d",&iSize);
	
	if(iSize < 0)
	{
		iSize = -iSize;
	}
	
	///////////////////////////////////////////////	
	//  Allocating memory dynamically
	//////////////////////////////////////////////
	
	iPtr = (int *)malloc(iSize * (sizeof(int)));

	printf("\nMemory allocated successfully!\n");
	
	if(iPtr == NULL)
	{
		printf("Unable to allocate memory...\n");
		return -1;
	}
	
	///////////////////////////////////////////////
	// Accept the values from user
	///////////////////////////////////////////////
	
	printf("\nEnter %d elements : \n",iSize);
	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(iPtr[iCnt] < 0)
		{
			iPtr[iCnt] = -iPtr[iCnt];
		}
		scanf("%d",&iPtr[iCnt]);
	}
	
	////////////////////////////////////////////////////////	
	// Passing the array to the business logic function
	///////////////////////////////////////////////////////
	
	iRet = Difference(iPtr,iSize);
	
	printf("\nDifference between summation of even numbers and odd numbers is : %d \n",iRet);
	
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////
		
	free(iPtr);
	printf("\nMemory deallocated successfully!\n");	
	
	return 0;
}
