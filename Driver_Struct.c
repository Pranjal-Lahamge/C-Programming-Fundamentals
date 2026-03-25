#include <stdio.h>
struct drivers//structure declaration
{//structure members
  char name[30];
  int drivinglicense;
  int kms;
};

int main()
{
  struct drivers d1, d2, d3;//structure variables declaration
  printf("ENTER THE DETAILS OF 1ST DRIVER \n");//taking input from user driver 1

  printf("name of the driver is \n");
  scanf("%s", &d1.name);
  printf(" driving license number\n");
  scanf("%d", &d1.drivinglicense);
  printf("number of km travel\n");
  scanf("%d", &d1.kms);
  printf("\n");
  printf("ENTER THE DETAILS OF 2ND DRIVER \n");//taking input from user driver 2
  printf("name of the driver \n");
  scanf("%s", &d2.name);
  printf(" driving license number\n");
  scanf("%d", &d2.drivinglicense);
  printf("number of km travel\n");
  scanf("%d", &d2.kms);
  printf("\n");
  printf("ENTER THE DETAILS OF 3RD DRIVER \n");//taking input from user driver 3
  printf("name of the driver is \n");
  scanf("%s", &d3.name);
  printf(" driving license number\n");
  scanf("%d", &d3.drivinglicense);
  printf("number of km travel\n");
  scanf("%d", &d3.kms);
  printf("******* PRINTING THE DETAILS OF DRIVER ********\n");
  printf("\n");
  //printing the details of driver 1
  printf("Name of driver 1 is %s \n", d1.name);
  printf("DL number of diver 1 is %d \n", d1.drivinglicense);
  printf("kms tarvel by vehicle of driver 1 is %d \n", d1.kms);
  printf("\n");
  //printing the details of driver 2
  printf("Name of driver 2 is %d \n", d2.name);
  printf("DL number of diver 2 is %d \n", d2.drivinglicense);
  printf("kms tarvel by vehicle of driver 2 is %d&\n", d2.kms);
  printf("\n");
  //printing the details of driver 3
  printf("Name of driver 3 is %s\n", d3.name);
  printf("DL number of diver 3 is %d\n", d3.drivinglicense);
  printf("kms tarvel by vehicle of driver 3  is %d\n", d3.kms);

  return 0;
}
/*OUTPUT
ENTER THE DETAILS OF 1ST DRIVER 
name of the driver is 
ROHAN
 driving license number
5241763815
number of km travel
200

ENTER THE DETAILS OF 2ND DRIVER 
name of the driver 
arjun
 driving license number
6512772738
number of km travel
62  

ENTER THE DETAILS OF 3RD DRIVER
name of the driver is
samar
 driving license number
6264367251
number of km travel
55
******* PRINTING THE DETAILS OF DRIVER ********

Name of driver 1 is ROHAN
DL number of diver 1 is 946796519
kms tarvel by vehicle of driver 1 is 200

Name of driver 2 is 6422224
DL number of diver 2 is -2077161854
kms tarvel by vehicle of driver 2 is 62&

Name of driver 3 is samar
DL number of diver 3 is 1969399955
kms tarvel by vehicle of driver 3  is 55
*/