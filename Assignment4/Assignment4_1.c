////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											    
// 			Problem Statement : Write a program which accept name from user and print that name         						    
//									     		    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											    
//	      										    
//	      Function Name : Display							    
//	      Input 		: Accepts character array  					    	     	
//	      Output 		: returns nothing						      	    
//	      Description 	: Displays full name entered by user   	                    
//	      Author 		: Ronak Sunil Mutha						    	
//	      Date 			: 04/05/2023	                					       
//											     
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char Str[])
{
	printf("Name entered is : %s\n",Str);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//			Entry Point Function 						    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	auto char Name[30] = {'\0'};
	
	printf("Please enter your full name : ");
	scanf("%[^\n]",Name);
	
	Display(Name);
		
	return 0;

}

/*

[^\n] is a kind of regular expression.

    [...]: it matches a nonempty sequence of characters from the scanset (a set of characters given by ...).
    ^ means that the scanset is "negated": it is given by its complement.
    ^\n: the scanset is all characters except \n.

Furthermore fscanf (and scanf) will read the longest sequence of input characters matching the 	format.

So scanf("%[^\n]", s); will read all characters until you reach \n (or EOF) and put them in s. It is a common idiom to read a whole line in C.

*/
