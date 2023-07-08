///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									
// 		Problem Statement : Write a program which accepts number from use and returns difference between summmation 
//					   		of its factors and non-factor numbers            
//									
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		      						         
//       	Function Name 	: SumNonFact			     		 
//       	Input 			: Accepts one integer				     	 
//       	Output 			: Return type integer				     	 
//       	Description		: returns difference between summation of 		 	
//		 	      			  all its factors and non-factor numbers   	 
//       	Author 			: Ronak Sunil Mutha				     	 
// 	 	 	Date 			: 04.05.2023					     	 	
//							     		 		
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
	auto int iDiff = 0;
	auto int iSumFact = 0;
	auto int iSumNonFact = 0;
	auto int iCnt = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{	
		if((iNo%iCnt) == 0 )   
		{
			iSumFact = iSumFact + iCnt;
		}
		if((iNo%iCnt) != 0 )
		{
			iSumNonFact = iSumNonFact + iCnt;	
			iDiff = iSumNonFact - iSumFact;					
		}
		if(iDiff<0)
		{
			iDiff = -iDiff;
		}
		
	}
	printf("iSumFact : %d\n",iSumFact);
	printf("iSumNonFact : %d\n",iSumNonFact);
	return iDiff;
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									
//			Entry Point Function 				
//									
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	auto int iValue = 0;
	auto int iRet = 0;	
		
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);	
	printf("Difference between summation of all factors and non-factors number is : %d \n",iRet);
	
	return 0;

}

// Time Complexity : O(N)
