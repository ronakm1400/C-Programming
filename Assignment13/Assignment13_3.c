////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Design application for school management system.As school is primary there are 4
//						standards from 1 to 4. School fees for each standard is different. For 1st
//						standard fees are 8900, for 2nd standard 12790, for 3rd standard 21000 and for	
//						4th standard fees are 23450.
//						We have to accept standard from user and display the corresponding fees.
//				
//						Input    : 2			Input  : 4			Input  : 6			
//						Output   : 12790		Output : 23450		Output : Invalid input
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define STD1 8900
#define STD2 12790
#define STD3 21000
#define STD4 23450

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 	: SchoolFees
//		Input			: Integer	
//		Output			: return integer
//		Description 	: This function accepts standard from user and returns the fees of that standard
//		Author			: Ronak Sunil Mutha
//		Date 			: 19/05/2023 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int SchoolFees(int iClass)
{
	if (iClass < 0)
	{
		iClass = -iClass;
	}
	
	if (iClass == 1)
	{
		return STD1;
	}
	else if (iClass == 2)
	{
		return STD2;
	}
	else if (iClass == 3)
	{
		return STD3;
	}
	else if (iClass == 4)
	{
		return STD4;
	}

}

////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc , char *argv[])
{

	printf("\n\t\t-*-*-*-*-*-*-*-*-*-* Welcome To Marvellous Primary School *-*-*-*-*-*-*-*-*-*-\n");

	auto signed int iStandard = 0,iRet = 0;
	
	printf("\nPlease enter the standard : ");
	scanf("%d",&iStandard);

	iRet = SchoolFees(iStandard);
	if (iStandard >= 5)
	{
		printf("\nOur school is primary school so please enter standard between 1 to 4\n");
	}	
	else
	{
		printf("\nFees for %d standard are : %d/-\n",iStandard,iRet);
	}
	
	printf("\n\t\t-*-*-*-*-*-*-*-*-*-*-*-*- We Love What We Do! -*-*-*-*-*-*-*-*-*-*-*-*-\n");

	return 0;

}
