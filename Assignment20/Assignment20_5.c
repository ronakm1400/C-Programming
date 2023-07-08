/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	
//		Problem Statement : Accept division of student from user and depends on the division display exam 
//					timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 
//					7 AM ,B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
//					(Application should be case insensitive)
//	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		Function Name 	 : DisplayExamTime
//		Input		 : character
//		Output		 : returns nothing
//		Description	 : This function displays the exam time of students of particular division
//		Author Name	 : Ronak Sunil Mutha
//		Date 		 : 20/05/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayExamTime(char cVal)
{

	if ( (cVal == 'A') || (cVal == 'a') )		
	{
		printf("\nYour exam is at 7 AM\n");
	}
	
	else if ( (cVal == 'B') || (cVal == 'b') )
	{
		printf("\nYour exam is at 8.30 AM\n");
	}
	
	else if( (cVal == 'C') || (cVal == 'c') )
	{
		printf("\nYour exam is at 9.20 AM\n");
	}
	
	else if ( (cVal == 'D') || (cVal == 'd') )
	{
		printf("\nYour exam is at 10.30 AM\n");
	}
	
	else
	{
		printf("\nInvalid Input!\n");
		printf("\nPlease enter division in between A-D\n");
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//		Entry point function main
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc,char *argv[])
{

	auto char ch = '\0';
	
	printf("Enter Division : ");
	scanf("%c",&ch);

	DisplayExamTime(ch);

	return 0;

}
