//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	
//		Problem Statement     : Accept number of rows and columns from user and display below pattern.
//		
//		Input		      : iRow = 4	iCol = 4		
//	
//		Output		      : 	1     	2  	3	4	
//						1       2               4
//						1               3       4	
//						1       2       3       4
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name    : Display
//		Input 		 : integer,integer	
//		Output		 : returns nothing
//		Description	 : This function displays the pattern 
//		Author Name	 : Ronak Sunil Mutha
//		Date		 : 20/05/2023
//	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iRow ,int iCol)
{
	auto int i,j = 0;
	
	for (i = 1; i <= iRow; i++ )
	{
		for (j = 1; j <= iCol; j++)
		{
			if ( ( i == 1) || (j == 1) || (i == j) || (i == iRow) || (j == iCol) ) 
			{
				printf("%d\t",j);
			}
			else
			{
				printf(" \t");
			}
			
		}
		printf("\n");
		printf("\n");
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{
	printf("\t\t*-*-*-*-*-*-*-*-*-*-*-* Problems on pattern printing *-*-*-*-*-*-*-*-*-*-*-*\n");
	
	auto signed int iValue1 = 0,iValue2 = 0;
	
	printf("Enter number of rows : ");	
	scanf("%d",&iValue1);
	
	printf("Enter number of columns : ");	
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;

}
