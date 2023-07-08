//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//										           					   		
//	Problem Statement : Write a program which accept total marks and obtained from user and calculate percentage				   
//											   
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											     					    	
//	      Function Name : Percentage 						     
//	      Input 		: Accepts one float and one integer					     
//	      Output 		: returns floating value						     
//        Description 	: Calculates the percentage and returns the floating value	     	
//	      Author 		: Ronak Sunil Mutha						     	
//	      Date 			: 04/05/2023	                					       
//											     
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


float Percentage(float iObt,int iTotal)
{
	
	float fResult = 0.0f;
	
	if (iObt == 0.0f || iObt == 0)
	{
		printf("You entered marks 0\n");
	}
	else
	{
		fResult = ((iObt/iTotal)*100.0);
	}
	return fResult;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//				Entry Point Function Main 				    		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	auto float iValue1 = 0.0f;
	auto int iValue2 = 0;
	auto float fRet = 0.0f;
	
	printf("Please enter marks obtained: ");
	scanf("%f",&iValue1);
	
	printf("Please enter total marks  : ");
	scanf("%d",&iValue2);
	
	fRet = Percentage(iValue1,iValue2);
	printf("Percentage are : %.2f%%\n",fRet); 
	 
	return 0;

}

/*	
	(500/1000)*100;
	
	1000 = iTotal
	500 = iObt

	percentage = ((iObt/iTotal) * 100.0)

*/

