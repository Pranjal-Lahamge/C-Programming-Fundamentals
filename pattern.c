#include<stdio.h>
void p(int n)//function to print the pattern
{  
        int i,j;//declaring variables
    for ( i =1 ; i<=n; i++)//loop to print the pattern in n rows
    { if (i%2==1)//condition to check if the row number is odd or even
    {
       for ( j=1; j<=i; j++)//loop to print the numbers in the pattern  in odd rows
        {  printf("%d ",i);//printing the row number in odd rows
       
        } 
    }
    else
        {
            for ( j=1; j<=i; j++)//loop to print the numbers in the pattern  in even rows
        {  printf("%d ",j);//printing the column number in even rows
       
        }
        }  
     printf("\n");//printing a new line after each row
    }  
}
int main ()
{ int n;
    
    printf("enter the number of rows\n");//taking input of number of rows in the pattern
    scanf("%d",&n);
    p(n);//calling the function to print the pattern
     return 0;
}
/*OUTPUT
enter the number of rows
5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/