////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											      
//	Problem Statement : Write a program which accepts number from user and if number is	less than 50 then print small,
//						if it is greater than 50 and less than 100 then print medium,if it is greater than 100 print large							      	
//			 			   					      
//											      	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//											    
//	  		Function Name 	: Number					            	    	
//			Input 			: Accepts one integer				     	  	    
//       	Output 			: Returns nothing				     	            
//       	Description 	: Displays small if number is smaller than 50,medium if it is   
//			      			  greater than 50 and less than 100,large if it is greater than 100    						    
//			Author 			: Ronak Sunil Mutha				     	 	    
// 	 		Date 			: 04.05.2023					     		    	
//											    
//////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
	if( (iNo) <= 50)
	{
		printf("Number is smaller!\n");
	}
	
	else if( ( (iNo) > 51) && ( (iNo) <= 100) )
	{
		printf("Number is medium!\n");
	}
	else if( (iNo) > 100)
	{
		printf("Number is larger!\n");
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
	
	Number(iValue);

	return 0;
}
