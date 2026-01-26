#include<stdio.h>
int main(int argc, char const *argv[])
{int n,i,a,b,next;
    a=0;
    b=1;
    next=0;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    for ( i = 0; i <n; i++)//loop will continue the process till iteration is less than number of terms
    { printf("%d", next);
    next=a+b;//next term is sum of previous two
    a=b;//after next 2nd term will be 1st
    b=next; // next term will be second
    if (i<n)
    {
        printf(", ");
    }
    
    }
     return 0;
}
/* output 
enter the number of terms
9    
0, 1, 2, 3, 5, 8, 13, 21, 34, 
*/