 #include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,i;
    printf ("enter the number\n");
    scanf("%d",&num);
    if (num<=1) // number less than equal to one is not a prime
    {
        printf ("number is not prime number");
    }
    else
    {
        for ( i = 2; i <num; i++)// now checking whther num get divisible by any
        {
            if (num%i==0)//if divisible not a prime
            {
                printf("number is not prime ");
               break;
            } 
        }
        if(i==num)// if not divisible i.e i==num then it is prime
        {printf("number is prime");    
    }
    return 0;
}
/*
output
enter the number
81
number is not prime */
