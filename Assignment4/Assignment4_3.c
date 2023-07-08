/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//										           								   	
//	Problem Statement : Write a program which accept two number from user and check whether numbers are equal or not		   
//											   
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											    			
//	  		Function Name 	: CheckEqual			      	     		    	
//       	Input 			: Accepts two integer				     	  	    
//       	Output 			: Returns true or false				     	            
//       	Description 	: returns True if number1 is equal t number 2 else  	    		 
//			      			  returns false		 		                      	 
//       	Author 			: Ronak Sunil Mutha				     	 	    
// 	 		Date 			: 04.05.2023					     		    	
//											    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckEqual(int iNum1,int iNum2)
{
	
	if(iNum1 == iNum2)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}


}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	auto int iValue1 = 0;
	auto int iValue2 = 0;	
	auto BOOL bRet = FALSE;
	
	printf("Enter First Number : ");
	scanf("%d",&iValue1);
	
	printf("Enter Second Number : ");
	scanf("%d",&iValue2);
	
	bRet = CheckEqual(iValue1,iValue2);
	
	if(bRet == TRUE)
	{
		printf("Equal\n");
	}
	
	else
	{
		printf("Not Equal\n");
	}
	
	return 0;	

}	
