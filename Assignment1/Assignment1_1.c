///////////////////////////////////////////////////////////////////////////////////////////
//							       								
// 			Problem Statement : Program to divide two numbers	        
//							       						        
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//																
// 			Function Name : Division										
// 			Input : Integer,Integer										
// 			Output : Integer												
// 			Description : Performs Division of two numbers				
// 			Author : Ronak Sunil Mutha									
// 			Date : 23.04.2023											
//																
///////////////////////////////////////////////////////////////////////////////////////////


int Divide(int iNo1,int iNo2)
{
	auto signed int iAns = 0;
	
	if (iNo2 == 0)
	{
		return 0;
	}
	
	iAns = iNo1/iNo2;
	
	return iAns;

}

////////////////////////////////////////////////////////////////////////////////////////////
//																						
//			 Entry point function Main											
//																						
/////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char *argv[])
{
	
	auto signed int iValue1=15,iValue2=5;
	auto signed int iRet = 0;
	
	iRet = Divide(iValue1,iValue2);
	printf("Division is : %d\n",iRet);
	 	
	return 0;

}
