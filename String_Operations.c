
/*Problem Statement:
Draw a flowchart/write an algorithm / a pseudo-code and write a menudriven C program to perform
following string operations using library and user defined function:
1) Find length of a string
2) Copy a string
3) Concatenate the string
4) Compare two strings
5) Convert to Uppercase and Lowercase*/

#include<stdio.h>										//header file
#include<string.h>										//header file for string
int main()												//Main function
{
	int ch;												//Declare variable
	char s1[100];										//Declare s1,and s2
	char s2[100];
	int l;
	printf("*******Menu*******");
	printf("\n1.String length\n 2.String copy\n 3.String concatinate\n 4.String compare\n 5. make sting uppercase\n 6. make string lower case\n ");	//Print cases
	printf("\nEnter your choice: ");					//Take input for choice
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:	
		
		printf("Enter a string: ");						//Take input for string
		scanf("%s",&s1);
		l=strlen(s1);									//Calculate length of string
		printf("\nLength of given string is %d",l);		//Display length of string
		break;
		
		case 2:
		
		printf("Enter a string: ");						//Take input for string
		scanf("%s", &s2);
		strcpy(s1,s2);									//function to copy string
		printf("\nCopied string is %s",s1);				//Display copied string
	
		break;
		
		case 3:
		
		printf("Enter a string: ");						//Take input for string
		scanf("%s %s", &s1 , &s2);
		strcat(s1,s2);								//Function for concatination of strings
		printf("\nConcatinated string is %s",s1);		//Display concatinated string
		break;
		
		case 4:
		
		printf("Enter a string: ");						//Take input for string
		scanf("%s %s",&s1,&s2);
		if(strcmp(s1,s2)==0)						//Condition for comparision of strings
		{
			printf("\nStrings are equal");				//Display strings are equal
		}
		else
		{
			printf("\nStrings are not equal");			//Display strings are not equal
		}
		break;
		case 5:
		printf("Enter a string: ");						//Take input for string
		scanf("%s %s",&s1,&s2);
		strupr(s1);
		strupr(s2);
		printf("upper case string for s1 is %s and for s2 is %s",s1,s2);
		break;
		case 6:
		printf("Enter a string: ");						//Take input for string
		scanf("%s %s",&s1,&s2);
		strlwr(s1);
		strlwr(s2);
		printf("lower case string for s1 is %s and for s2 is %s",s1,s2);
		break;
	}
	return 0;
}
/*
***OUTPUT***
C:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc assignment4.c -o assignment4 && "c:\Users\pranj\OneDrive\Desktop\c coding\"assignment4
*******Menu*******
1.String length
 2.String copy
 3.String concatinate
 4.String compare
 
Enter your choice: 1
Enter a string: PRANJAL

Length of given string is 7
c:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc assignment4.c -o assignment4 && "c:\Users\pranj\OneDrive\Desktop\c coding\"assignment4
*******Menu*******
1.String length
 2.String copy
 3.String concatinate
 4.String compare

Enter your choice: 2
Enter a string: PRANJAL

Copied string is PRANJAL
c:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc assignment4.c -o assignment4 && "c:\Users\pranj\OneDrive\Desktop\c coding\"assignment4
*******Menu*******
1.String length
 2.String copy
 3.String concatinate
 4.String compare
 
Enter your choice: 3
Enter a string: PRANJAL
LAHAMGE

Concatinated string is PRANJALLAHAMGE
c:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc assignment4.c -o assignment4 && "c:\Users\pranj\OneDrive\Desktop\c coding\"assignment4
*******Menu*******
1.String length
 2.String copy
 3.String concatinate
 4.String compare
 
Enter your choice: 4
Enter a string: PRANJAL
LAHAMGE

Strings are not equal
c:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc assignment4.c -o assignment4 && "c:\Users\pranj\OneDrive\Desktop\c coding\"assignment4
*******Menu*******
1.String length
 2.String copy
 3.String concatinate
 4.String compare
 
Enter your choice: 4
Enter a string: PRANJAL
PRANJAL
Strings are equal

*******Menu*******
1.String length
 2.String copy
 3.String concatinate
 4.String compare
 5. make sting uppercase
 6. make string lower case

Enter your choice: 5
Enter a string: pranjal
lahamge
upper case string for s1 is PRANJAL and for s2 is LAHAMGE

*******Menu*******
1.String length
 2.String copy
 3.String concatinate
 4.String compare
 5. make sting uppercase
 6. make string lower case

Enter your choice: 6
Enter a string: PRANJAL
LAHAMGE
lower case string for s1 is pranjal and for s2 is lahamge
*/