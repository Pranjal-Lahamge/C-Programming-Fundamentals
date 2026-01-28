#include <stdio.h>
int main() {
   int a,b,temp;
   printf("enter the value of a and b respectively\n");
   scanf("%d %d",&a,&b);
   // take temp varial to exchange the numbers
   temp=a;
   a=b;
   b=temp;
   printf("the value of a is %d and b is %d ",a,b);

    return 0;
}
/*output
enter the value of a and b respectively
34
56
the value of a is 56 and b is 34 */