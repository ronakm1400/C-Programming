////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											      
//	     Problem Statement : Write a program that accepts number from user and print numbers till that number				       	
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											    
//	  		Function Name 	: Display				      	     		    
//       	Input 			: Accepts one integer				     	  	    
//       	Output 			: Returns nothing				     	            
//       	Description 	: Displays numbers on screen			  	    
//       	Author 			: Ronak Sunil Mutha				     	 	    
// 	 		Date 			: 04.05.2023					     		    
//											    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
		
	auto int iCnt = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t",iCnt);	
	}

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	auto int iValue = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	Display(iValue);

	return 0;

}