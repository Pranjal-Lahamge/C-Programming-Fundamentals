#include<stdio.h>
int main(int argc, char const *argv[])
{
    //accepting 3 integers from user
    int a,b,c;
    printf("enter the number a\n");
    scanf("%d",&a);
    printf("enter the number b\n");
    scanf("%d",&b);
    printf("enter the number c\n");
    scanf("%d",&c);
    //checking if a is greatest
    if (a>=b && a>=c) 
    {if (a==b)
    {
        printf("a,b is the greatest number");

    }
    else if (a==c){
        printf ("a,c are the greatest number");
    }
    
       else printf("a is the greatest number");
    }
    // checking if b is greatest
    else if (b>=a && b>=c)
     {if (a==b)
    {
        printf("a,b is the greatest number");

    }
    else if (b==c){
        printf ("b,c are the greatest number");
    }
    
       else printf("b is the greatest number");
    }
    //checking if c is greatest
  else  if (c>=b && c>=a)
   {if (c==b)
    {
        printf("c,b is the greatest number");

    }
    else if (a==c){
        printf ("a,c are the greatest number");
    }
    
       else printf("c is the greatest number");
    }
    
    
    
    else
    {
        printf("all numbers are equal");
    }
    
    return 0;
}
/*
output
enter the number a
20
enter the number b
3
enter the number c
123*/
