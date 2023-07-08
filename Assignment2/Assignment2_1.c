/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											     
// 				Problem Statement : Accept one number from user and print that number of '*' on console   
//											     								
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//							     
// 				Function Name : Display				     
// 				Input : Accepts one integer				     
// 				Output : Returns nothing 				     
// 				Description : Print '*' on screen			     
// 				Author : Ronak Sunil Mutha				     
//				Date : 23.04.2023					     
//							     					
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	register int iCnt = 0;
	
	for (iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("*\n");
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											
//				 Entry point function main					
//														
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char *argv[])
{
	auto signed int iValue = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
	
}
