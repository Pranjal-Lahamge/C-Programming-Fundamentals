#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])//program to find x^y
{float expo,x,y;
    printf("enter base x\n");//taking input of base x
    scanf("%f",&x);
    printf("enter exponential y\n");// taking input of exponential y
    scanf("%f",&y);
    expo=pow(x,y);//calculating x^y using pow function
    printf("%f^%f=%f",x,y,expo);//printing the result
    return 0;
}
/*OUTPUT
enter base x
5
enter exponential y
2
5.000000^2.000000=25.000000*/