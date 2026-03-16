#include <stdio.h>
void starpattern(int rows)// FOR STAR PATTERN
{
    int i, j;

    for (i = 0; i < rows; i++)//ROWS
    {
        for (j = 0; j <= i; j++)//COULUMS AND LESS  TO AND EQUAL THE NUMBER OF ROWS
        {
            printf("*");
        }
        printf("\n");//NEW LINE AFTER EACH ROW
    }
}
void reversestarpattern(int rows)// FOR REVERSE STAR PATTERN
{
    int i, j;
    for (i = 0; i < rows; i++)// ROWS
    {
        for (j =0; j <= rows-i-1; j++)//COULMS LESS THAN EQUAL TO TOTAL NUMBER OF ROWS
        {
            printf("*");
        }
        printf("\n");//NEW LINE AFTER EACH ROW
    }
}
int main()
{
    int rows, type;
    printf("enter 0 for star patern and 1 for reverse star pattern\n");
    scanf("%d", &type);
    printf("enter the number of rows you wamt\n");
    scanf("%d", &rows);

    
    switch (type)// MENU
    {
    case 0: // FOR STAR PATTERN
        starpattern(rows);
        break;
    case 1:// FOR REVERSE STAR PATTERN
        reversestarpattern(rows);
        break;
    default:
        printf("you have enter invalid number");
        break;
    }
     
    return 0;
}
/* OUTPUT

enter 0 for star patern and 1 for reverse star pattern
0
enter the number of rows you wamt
6
*
**
***
****
*****
******

enter 0 for star patern and 1 for reverse star pattern
1
enter the number of rows you wamt
8
********
*******
******
*****
****
***
**
*
*/