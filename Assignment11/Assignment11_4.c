////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and accept Range , Display all elements from that range
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name : Range
//		Input	      : integer array , integer , integer , integer , integer  
//		Output	      : returns nothing
//		Description   : This function displays all the elements in between the range
//			        	that user entered the number	 
//		Author Name   : Ronak Sunil Mutha
//		Date 	      : 11/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void Range(int iArr[] , int iLength , int iStart , int iEnd)
{
	auto int iCounter = 0;
	register int iCnt = 0;
	
	printf("\nElements in between range %d and %d are : ",iStart,iEnd);
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if ( ((iArr[iCnt]) >= iStart) && ((iArr[iCnt]) <= iEnd) )
		{
			iCounter = iCounter + 1;
			printf("%d\t",iArr[iCnt]);
		}
	}
	printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////
//	Entry point function main
/////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char *argv[])
{

	printf("\n-------------- Application programming using dynamic memory allocation --------------\n");

	auto signed int iSize = 0,iValue1 = 0,iValue2 = 0;
	auto signed int *iPtr = NULL;
	register int iCnt = 0;
	
	///////////////////////////////////////////////////
	// Accept the number of elements from user
	///////////////////////////////////////////////////
	
	printf("\nEnter number of elements you want to store : ");
	scanf("%d",&iSize);
	
	if (iSize < 0)
	{
		iSize = -iSize;
	}
	
	////////////////////////////////////////////////////
	// Allocating memory dynamically
	////////////////////////////////////////////////////
		
	iPtr = (int *) malloc(iSize * (sizeof(int)));
	
	if (iPtr == NULL)
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
		if (iPtr[iCnt] < 0)
		{
			iPtr[iCnt] = -iPtr[iCnt];
		}
		scanf("%d",&iPtr[iCnt]);
	}
	
	printf("\nEnter the starting range of number : ");
	scanf("%d",&iValue1);
	
	printf("\nEnter the ending range of number : ");
	scanf("%d",&iValue2);
		
	//////////////////////////////////////////////////////
	// Passing the array to the business logic function
	/////////////////////////////////////////////////////
	
	Range(iPtr,iSize,iValue1,iValue2);
		
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////
	
	free(iPtr);
	
	printf("\nMemory freed successfully!\n");
	
	return 0;

}
