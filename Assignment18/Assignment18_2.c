////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept number of rows and columns from user and display below pattern
//	Input 		  : iRow = 4 iCol = 4
//	Output		  : *  *  *  *  
//				    *  *  *  #	
//				    *  *  #  #	
//				    *  #  #  #	
//				
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name : DisplayPattern
//	Input 	      : integer , integer
//	Output 	      : returns nothing
//	Description   : This function accepts number of rows and columns from user and prints
//					patterns on screen
//	Author Name   : Ronak Sunil Mutha
//	Date 	      : 15/05/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPattern(int iRow,int iCol)
{
	
	register int i = 0,j = 0;
	
	if (iRow < 0)
	{
		iRow = -iRow;
	}	
	
	if (iCol < 0)
	{
		iCol = -iCol;
	}
	
	for (i = 1; i <= iRow; i++)
	{
		for(j = iCol; j >= 1; j--)
		{
			if( (j == i) || (i < j) )
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}						
		}
		printf("\n");			
		printf("\n");
	}
	printf("\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char *argv[])
{

	printf("\t-*-*-*-*-*-*-*-*-*-*-*-*-*- Pattern printing program -*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	auto signed int iValue1 = 0,iValue2 = 0;
	
	printf("\nEnter number of rows : ");
	scanf("%d",&iValue1);
	
	printf("\nEnter number of columns : ");
	scanf("%d",&iValue2);

	DisplayPattern(iValue1,iValue2);
	
	return 0;

}



	/*
		row i	   1	  2	 3	 4		
		col j
		
		  1	   1,1   1,2    1,3     1,4
			
		  2	   2,1   2,2    2,3     2,4
			
		  3	   3,1   3,2    3,3     3,4
	
		  4	   4,1   4,2    4,3     4,4
	*/

	/*
		*  *  *  *
		*  *  *  #	
		*  *  #  #
		*  #  #  #
	*/		
