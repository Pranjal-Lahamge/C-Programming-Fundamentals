#include<stdio.h>
int main ()
{
int num,i;//to store the number and to use in the loop
printf ("enter the number u want the multiplication table ");//to get the multiplication table of a number
scanf ("%d",&num);//to read the number entered by the user
 printf("the multiplication table for %d is\n",num);
for (i=0;i<10;i++)//to loop through the numbers from 1 to 10
{
   
    printf("%d*%d=%d\n",num,(i+1),num*(i+1));//to print the multiplication table of the number entered by the user


}
return 0;
}
/*OUTPUT
enter the number u want the multiplication table 5
the multiplication table for 5 is
5*1=5
5*2=10
5*3=15
5*4=20
5*5=25
5*6=30
5*7=35
5*8=40
5*9=45
5*10=50*/