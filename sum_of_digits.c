#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,sum=0,digit;
    printf("enter the number\n");
    scanf("%d",&num);// Taking the input
    while
(num >0){
    digit=num%10;// for last digit that is unit place we need to take modulus by 10 so remainder will be the unit place digit
    sum=sum+digit;// add that digit to the sum
    num=num/10;//as we have add that digit to the number remove that digit from the number 

}
// used while loop to continue this process until number becomes zero
printf("the sum of the digits is=%d\n",sum);
 return 0;
}
/*output
enter the number
53
the sum of the digits is=8
*/