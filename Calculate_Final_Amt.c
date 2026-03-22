/* Title In a departmental store a customer is offered x% discount on
the printed price of each commodity.The customer needs to pay y% of
sales tax on discounted amount write the c programe to calculate the
discount,tax amount, Final amount.
*/
#include <stdio.h>
int main()
{
    int p, x, y;// p= printed price, x= discount percentage, y= tax percentage
    float da, d, t, fa;// da= discounted amount, d= discount, t= tax, fa= final amount
    printf("enter the printed price\n");
    scanf("%d", &p);// taking input of printed price
    printf("enter the discount percentage \n");
    scanf("%d", &x);// taking input of discount percentage
    printf("enter the sales tax percentage\n");
    scanf("%d", &y);// taking input of tax percentage
    d = ((p*x)/100);// calculating discount
    printf("discounted amount is %f \n", d);
    da=(p-d);// calculating discounted amount
    printf("the discounted amount is %f\n",da);
    t = ((da * y) / 100);// calculating tax
    printf("tax is %f\n", t);
    fa = da + t;// calculating final amount
    printf("final amt=%f\n", fa);
    return 0;
/* C:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc assignment.c -o assignment && "c:\Users\pranj\OneDrive\Desktop\c coding\"assignment
enter the printed price
200000
enter the discount percentage 
10
enter the tax percentage
5
discounted amount is 20000.000000 
the discounted amount is 180000.000000
tax is 9000.000000
final amt=189000.000000*/

}