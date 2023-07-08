//////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and display all such numbers which 
//			    contains 3 digits in it 
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name : Digits
//		Input	      : integer array , integer  
//		Output	      : returns nothing
//		Description   : This function display all such numbers from array which 
//				contains 3 digits number in it	 
//		Author Name   : Ronak Sunil Mutha
//		Date 	      : 11/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int iArr[] , int iLength)
{
	
	register int iCnt = 0;	
	
	printf("\n3 digit numbers are : ");
	for (iCnt = 0; iCnt < iLength; iCnt++)
	{
		if ( ((iArr[iCnt]) >= 100) && ((iArr[iCnt]) <= 999) )	
	 	{
	 		printf("%d\t",iArr[iCnt]);
	 	}
	 
	}
	printf("\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////
//	Entry point function main
/////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{

	printf("\n-------------- Application programming using dynamic memory allocation --------------\n");

	auto signed int iSize = 0;
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
	
		
	//////////////////////////////////////////////////////
	// Passing the array to the business logic function
	/////////////////////////////////////////////////////
	
	Digits(iPtr,iSize);
	
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////
	
	free(iPtr);
	
	printf("\nMemory freed successfully!\n");
	
	return 0;

}
