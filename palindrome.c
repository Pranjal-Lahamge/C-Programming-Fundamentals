#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,sum=0,digit,original;
    printf("enter the number\n");
    scanf("%d",&num);
    original= num;
    //steps to reverse the number
    while (num>0)
    {
digit=num%10;// identifying last digit with remainder method
sum=sum*10+digit;//add that last digit to sum, sum is multiply by 10 to make last digit as the 1st
num=num/10;// now divide number by 10 so the last digit is gone and proceed for new



    }
    if (original==sum)// when the reverse number will be equal to original number it will be palindrome
    {
        printf("the numbere is palindrome");
    }
    else // if original number not equal to reverse number i.e sum then the number is not palindrome
    {
printf("the number is not palindrome");
    }
}
/*OUTPUT
enter the number
22
the numbere is palindrome
PS C:\Users\pranj\OneDrive\Desktop\c coding> cd "c:\Users\pranj\OneDrive\Desktop\c coding\" ; if ($?) { gcc palindrome.c -o palindrome } ; if ($?) { .\plaindrome }
enter the number
34
the number is not palindrome*/