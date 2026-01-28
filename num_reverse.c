#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,sum=0,digit;
    printf("enter the number\n");
    scanf("%d",&num);
    while
(num >0){
    digit=num%10;
    sum=sum *10 +digit;
    num=num/10;
    //logic: '%' this will give last digit,add to sum , using'/'reduce the number by removing last digit
}
printf("the reverse of the digits is=%d\n",sum);

 return 0;
}
/*output
enter the number
45627
the reverse of the digits is=72654*/