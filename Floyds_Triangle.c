#include<stdio.h>

void p(int n)//function to print the Floyd's triangle
{  
  int num;//variable to store the number to be printed
        num=1;//initializing the variable to 1
        int i,j;//variables to be used in the loops
    for ( i =1 ; i<=n; i++)//outer loop to print the rows
    { 
    
        for ( j=1; j<=i; j++)//inner loop to print the numbers in each row
        {  printf("%d ",num);//printing the number
       num++;//incrementing the number to be printed
        }
        
     printf("\n");//printing a new line after each row
    }  
}
int main ()
{ int n;//variable to store the number of rows
    
    printf("enter the number of rows\n");//prompting the user to enter the number of rows
    scanf("%d",&n);
    p(n);//calling the function to print the Floyd's triangle
     return 0;
}
/*OUTPUT
enter the number of rows
5
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/