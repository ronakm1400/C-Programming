////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept number of rows and columns from user and display below pattern
//	Input 		  : iRow = 4 iCol = 5
//	Output		  :  1  2  3  4  5
//			    	-1  -2  -3  -4  -5
//					 1    2   3   4   5
//					-1  -2  -3  -4  -5
//				 	 1    2   3   4   5
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
		for(j = 1; j <= iCol; j++)
		{
			if ( (i%2) == 1 )
			{
				printf("%d\t",j);
			}
			else 
			{
				printf("%d\t",-j);
			}
						
		}			
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
