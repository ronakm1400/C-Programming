///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											      	
//	Problem Statement : Accept single digit number from user and print it into word	             	 				      
//											      	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											    
//	  		Function Name 	: Display					                    
//			Input 			: Accepts one integer				     	  	    
//       	Output 			: Returns nothing				     	            
//       	Description 	: Displays digit number into word                         	    	
//       	Author 			: Ronak Sunil Mutha				     	 	    
// 	 		Date 			: 04.05.2023							    
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	if (iNo<0)
	{
		iNo = -iNo;
	}
	
	else if(iNo == 0)
	{
		printf("Zero");
	}
	
	else if(iNo == 1)
	{
		printf("One\n");
	}
	
	else if(iNo == 2)
	{
		printf("Two\n");
	}
	
	else if(iNo == 3)
	{
		printf("Three\n");
	}
	
	else if(iNo == 4)
	{
		printf("Four\n");
	}
	
	else if(iNo == 5)
	{
		printf("Five\n");
	}
	
	else if(iNo == 6)
	{
		printf("Six\n");
	}
	
	else if(iNo == 7)
	{
		printf("Seven\n");
	}
	
	else if(iNo == 8)
	{
		printf("Eight\n");
	}
	
	else if(iNo == 9)
	{
		printf("Nine\n");
	}
	
	else if(iNo>=10)
	{
		printf("Invalid Number!\n");
		printf("Please enter single digit number!\n");
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
// This problem statement can be done using switch case also
