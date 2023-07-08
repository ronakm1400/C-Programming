///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//										           	
//	Problem Statement : Write a program which accept three number from user and print its multiplication				   
//											   
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											    
//	  		Function Name 	: Multiply			      	     		    
//       	Input 			: Accepts three integer				     	  	    
//       	Output 			: Returns integer				     	            
//       	Description 	: returns multiplication of 3 numbers if any number is zero     
//			      			  returns multiplication of other two number	  	    
//       	Author 			: Ronak Sunil Mutha				     	 	    
// 	 		Date 			: 04.05.2023					     		    
//											    
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iValue1,int iValue2,int iValue3)
{
 	auto int iResult = 0;
		
	iResult = iValue1 * iValue2 * iValue3; 
	
	if( (iValue1) == 0 )
	{
		iResult = iValue2 * iValue3;
	}
	
	else if( (iValue2) == 0 )
	{
		iResult = iValue1 * iValue3;
	}
	
	else if( (iValue3) == 0)
	{
		iResult = iValue1 * iValue2;
	}
	
	return iResult;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	auto int iNum1 = 0,iNum2 = 0,iNum3 = 0;
	auto int iRet = 0;
	
	
	printf("Enter First Number : ");
	scanf("%d",&iNum1);
	
	printf("Enter Second Number : ");
	scanf("%d",&iNum2);
	
	printf("Enter Third Number : ");
	scanf("%d",&iNum3);
	
	iRet = Multiply(iNum1,iNum2,iNum3);
	printf("Multiplication of numbers is : %d \n",iRet);
	
	return 0;

}
