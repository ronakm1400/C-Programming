//////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and accept one another number as No,
//			    		return the index of last occurence of that No.
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<malloc.h>

#define ERR_NOTFOUND -1

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name  :  LastOcc
//		Input 	       : integer array , integer , integer 
//		Output 	       : returns integer
//		Description    : This function returns the index of last occurence of number  
//		Author Name    : Ronak Sunil Mutha
//		Date 	       : 11/05/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int LastOcc(int iArr[] , int iLength , int iNo)
{
	register signed int iCnt = 0;	
	
	for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
	{
		if (iArr[iCnt] == iNo)
		{
			break;
		}
		
	}
	return iCnt;
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
	
	iRet = LastOcc(iPtr,iSize,iValue);
	
	if (iRet == ERR_NOTFOUND)
	{
		printf("\nThere is no such number \n");
	}	
	else
	{
		printf("\nIndex of last occurence of %d is : %d \n",iValue,iRet);
	}	
	
	////////////////////////////////////////////////////////
	// Dellocating the dynamically allocated memory
	///////////////////////////////////////////////////////
		
	free(iPtr);
	
	printf("\nMemory Freed Successfully!\n");
	
	return 0;

}
