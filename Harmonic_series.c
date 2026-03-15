/*WHAT THIS PROGRAM DOES??
if number is n it will calculate its harmonic series i.e (1+1/2+1/3+-----+1/n)
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
float num,i,sum=0.0;

printf("enter the number\n");
scanf("%f",&num);// input taken

for (i = num; i >=1; i--)// for loop such that it start at i=n and end when i=1
{
sum=sum+(1.0/i); //calculating the sum

}
printf("sum is %f",sum);
return 0;
}
/*output
enter the number
5
sum is 2.283333
*/