////////////////////////////////////////////////////////////////////////////////////////////////
//											      
//		Problem Statement : Write a program which accept number from user and print that      	
//				    		number of $ & * on screen	  				      
//											      	
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//											    
//	  		Function Name : Pattern				      	     		    
//       	Input 		  : Accepts one integer				     	  	    
//       	Output 		  : Returns nothing				     	            
//       	Description   : Display $ * times on screen			  	    
//       	Author 		  : Ronak Sunil Mutha				     	 	    
// 	 		Date 		  : 04.05.2023					     		    	
//											    
//////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
	
	auto int iCnt = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf(" $ * ");
	}	
	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//				Entry Point Function Main 				    	
//										       	    	
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

	auto int iValue = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	Pattern(iValue);

	return 0;

}
