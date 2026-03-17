/*PROBLEM STATEMENT 
To identify whether number is perfect or not
The perfect number is the number whos esum of the divisor is equal to the number 
eg, 6=2*3*1  6=2+3+1*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
int num,i,sum=0;
printf("enter the number\n");
scanf("%d",&num);
for (i = 1 ; i < num; i++)// usinf for loop till number to get all divisor
{if (num%i==0) //checking the divisors
{
    sum=sum+i; // adding divisor to get sum of divisor 
}  
}
if (sum==num){
printf("number is the perfect number");}
else
{
 printf("number is not a perfect number");
}  return 0;
}
/*OUTPUT
enter the number
22
number is not a perfect number
enter the number
28
number is the perfect number
*/
