////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Problem Statement : We have to design application for tourist company. Tourist company provides
//							cars on rent. Depends on the running of car they apply rent. If running
//							is less than 100kms then they charge 25rs per km. And if the running is 
//							more than 100kms then they apply 15rs per km after 100kms. 
//							We have to accept number of kilometers from user and return the estimated rent	
//
//							Input : 73		Output : 1825		
//							Input : 132		Output : 1890
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define CHARGE1 25
#define CHARGE2 15

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//		Function Name 	 : TouristBill	
//		Input		     : Accepts integer
//		Output		     : returns integer	
//		Description	     : This function accepts number of kilometers from user and returns the rent 	
//							required for that kilometers
//		Author Name	     : Ronak Sunil Mutha	
//		Date 	   	     : 19/05/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int TouristBill(int iKilometer)
{
	auto signed int iRent = 0;
	
	if(iKilometer < 0)
	{
		iKilometer = -iKilometer;
	}
	
	if (iKilometer <= 100)
	{
		iRent = iKilometer * CHARGE1;
		return iRent;
	}
	else
	{
		iRent = iKilometer * CHARGE2;
		return iRent;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{
	printf("\n\t\t-*-*-*-*-*-*-*-*-*-* Welcome to Marvellous Tours & Travels *-*-*-*-*-*-*-*-*-*-\n");

	auto signed int iKm = 0,iRet = 0;
	
	printf("\nPlease enter kilometers : ");
	scanf("%d",&iKm);
	
	iRet = TouristBill(iKm);
	printf("\nYour rent for %dkms will be : %drs\n",iKm,iRet);
	
	printf("\nHave a safe journey!\n");
	
	return 0;
	
}
