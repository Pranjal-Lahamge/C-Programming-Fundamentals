#include <stdio.h>
int main(int argc, char const *argv[])
{int num;//variable declaration
    printf("enter the number\n 1 for monday \n 2 for tuesday\n 3 for wednesday\n 4 for thusday\n 5 for friday\n 6 for saturday\n 7 for sunday\n");//asking user to enter the number from the menu to print the day      
    scanf("%d",&num);
    switch (num)//switch case to print the day according to the number entered by user
     {
    case 1:printf("day is monday\n");//if user enter 1 then it will print monday
            break;
    case 2:printf("day is tuesday\n");//if user enter 2 then it will print tuesday
    break;
    case 3:printf("day is wednesday\n");//if user enter 3 then it will print wednesday
            break;
    case 4: printf("day is thursday\n");//if user enter 4 then it will print thursday
            break;
    case 5: printf("day is friday\n");//if user enter 5 then it will print friday
            break;
    case 6:printf("day is saturday\n");//if user enter 6 then it will print saturday
            break;
    case 7:printf("day is sunday\n");//if user enter 7 then it will print sunday
            break; 
    default:printf("enter the wrong number\n");//if user enter the number other than 1 to 7 then it will print wrong number
        break;
    }

    return 0;
}

/* Output */
/* 
enter the number
 1 for monday 
 2 for tuesday
 3 for wednesday
 4 for thusday
 5 for friday
 6 for saturday
 7 for sunday
 5
 day is friday
*/