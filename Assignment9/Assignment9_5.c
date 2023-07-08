///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and display all such elements which are multiples of 11
//				
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 		: Display
//		Input 				: integer array , integer 
//		Output 				: returns nothing
//		Description 		: This function displays all such elements which are  multiples of 11
//		Author Name 		: Ronak Sunil Mutha
//		Date 				: 11/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iArr[], int iLength)
{
	register int iCnt = 0;
	
	printf("\n Multiples of 11 are : \n");
		
	for (iCnt = 0; iCnt < iLength; iCnt++)
	{	
		if ((iArr[iCnt] % 11) == 0)
		{
			printf("%d\n",iArr[iCnt]);
		}		
		
	}
	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char *argv[])
{
	printf("\n-------------- Application programming using dynamic memory allocation --------------\n");
	auto signed int iSize = 0;
	auto int *iPtr = NULL;
	auto int iCnt = 0;
		
	///////////////////////////////////////////////////
	// Accept the number of elements from user
	///////////////////////////////////////////////////
		
	printf("Enter number of elements you want to store : \n");
	scanf("%d",&iSize);
	
	if(iSize < 0)
	{
		iSize = -iSize;
	}
	
	////////////////////////////////////////////////////
	// Allocating memory dynamically
	////////////////////////////////////////////////////

	iPtr = (int *)malloc(iSize * (sizeof(int)));
	
	printf("\nMemory allocated successfully!\n");
	
	if(iPtr == NULL)
	{
		printf("Unable to allocate memory...\n");
		return -1;
	}
			
	/////////////////////////////////////////////////////
	// Accept the values from user
	/////////////////////////////////////////////////////
	
	printf("\nEnter %d elements : \n",iSize);
	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(iPtr[iCnt] < 0)
		{
			iPtr[iCnt] = -iPtr[iCnt];
		}
		scanf("%d",&iPtr[iCnt]);
	}
		
	//////////////////////////////////////////////////////
	// Passing the array to the business logic function
	/////////////////////////////////////////////////////

	Display(iPtr,iSize);
	
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////

	free(iPtr);
	printf("\nMemory deallocated successfully!\n");	
	
	return 0;
}
