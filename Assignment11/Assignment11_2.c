//////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and accept one another number as No,
//			    		return the index of first occurence of that No.
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

#define ERR_NOTFOUND -1

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name : FirstOcc
//		Input 	      : integer array , integer , integer 
//		Output 	      : returns integer
//		Description   : This function returns the index of first occurence of number  
//		Author Name   : Ronak Sunil Mutha
//		Date 	      : 11/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int FirstOcc(int iArr[] , int iLength , int iNo)
{
	register signed int iCnt = 0;	
			
	for (iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iArr[iCnt] == iNo)
		{
			break;
		}
		
	}
	if(iLength == iCnt)
	{
		return ERR_NOTFOUND;
	}
	else
	{
		return iCnt;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////
//	Entry point function main
/////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char *argv[])
{
	printf("\n-------------- Application programming using dynamic memory allocation --------------\n");

	auto signed int iSize = 0,iValue = 0,iRet = 0;
	auto signed int *iPtr = NULL;
	register signed int iCnt = 0;
	
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
	
	iPtr = (int *)malloc(iSize * (sizeof(int)));
	
	if (iPtr == NULL)
	{
		printf("\nUnable to allocate the memory");
		return -1;
	}
		
	else
	{
		printf("\nMemory allocated successfully!\n");
	}
	
	/////////////////////////////////////////////////////
	// Accept the values from user
	/////////////////////////////////////////////////////
	
	printf("\nEnter the %d elements : \n",iSize);
	
	for (iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(iPtr[iCnt] < 0)
		{
			iPtr[iCnt] = -iPtr[iCnt];
		}
		scanf("%d",&iPtr[iCnt]);
	}
	
	printf("\nEnter number that you want to know index : ");
	scanf("%d",&iValue);
	
	//////////////////////////////////////////////////////
	// Passing the array to the business logic function
	/////////////////////////////////////////////////////
	
	iRet = FirstOcc(iPtr,iSize,iValue);
	
	if (iRet == ERR_NOTFOUND)
	{
		printf("\nThere is no such number \n");
	}	
	else
	{
		printf("\nIndex of first occurence of %d is : %d \n",iValue,iRet);
	}	
	
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////
		
	free(iPtr);
	
	printf("\nMemory Freed Successfully!\n");
	
	return 0;

}
