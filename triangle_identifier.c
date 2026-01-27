/*
Problem Statement:  
A type of a triangle (equilateral, isosceles, right angle triangle etc) is decided using the length of its 
three sides. */
#include<stdio.h>
#include<math.h>
int main ()
{
    float side1,side2,side3,area,perimeter,s;
    printf("enter the value for the of side1 side2 side3 \n");
    scanf("%f\n%f\n%f",&side1,&side2,&side3);
    if (side1==side2&&side2==side3)//condition for equilateral triangle
    {
        printf("the triangle is equilateral triangle\n");
        perimeter=side1+side2+side3;
        printf("perimeter of triangle is %f\n",perimeter);
        area=0.433*side1*side1;
        printf("area is %f\n",area);
    }
    else if (side1==side2||side2==side3||side1==side3)//condition for isoceles triangle
    {
        printf("the triangle is isoceles triangle\n");
        perimeter=side1+side2+side3;
        printf("perimeter of triangle is %f\n",perimeter);
        s=(side1+side2+side3)/2;
        area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
        printf("area is %f\n",area);
    }// condition for right angle triangle
    else if ((side1*side1)==(side2*side2)+(side3*side3)||(side2*side2)==(side1*side1)+(side3*side3)||(side3*side3)==(side2*side2)+(side1*side1))
    {
        printf("the triangle is right angled triangle\n");
        perimeter=side1+side2+side3;
        printf("perimeter of triangle is %f\n",perimeter);
        s=(side1+side2+side3)/2;
        area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
        printf("area is %f\n",area);
    }
    else// if sides not form a triangle
    {
        printf("not a valid triangle");
    }
     return 0;
}
/* output:
C:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc identifyingtypeoftriangle.c -o identifyingtypeoftriangle && "c:\Users\pranj\OneDrive\Desktop\c coding\"identifyingtypeoftriangle
enter the value for the of side1 side2 side3 
2
2
2
the triangle is equilateral triangle
perimeter of triangle is 6.000000
area is 1.732000

c:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc identifyingtypeoftriangle.c -o identifyingtypeoftriangle && "c:\Users\pranj\OneDrive\Desktop\c coding\"identifyingtypeoftriangle
enter the value for the of side1 side2 side3 
3
4
5
the triangle is right angled triangle
perimeter of triangle is 12.000000
area is 6.000000

c:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc identifyingtypeoftriangle.c -o identifyingtypeoftriangle && "c:\Users\pranj\OneDrive\Desktop\c coding\"identifyingtypeoftriangle
enter the value for the of side1 side2 side3 
2
2
4
the triangle is isoceles triangle
perimeter of triangle is 8.000000
area is 0.000000

c:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc identifyingtypeoftriangle.c -o identifyingtypeoftriangle && "c:\Users\pranj\OneDrive\Desktop\c coding\"identifyingtypeoftriangle
enter the value for the of side1 side2 side3 
1
2
3
not a valid triangle
*/
