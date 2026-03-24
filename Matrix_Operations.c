/*write a C program that uses functions to perform the following operations:
i) Addition of Two Matrices
ii)Substraction of Two Matrices
iii) Multiplication of Two Matrices 
iv)division of Two Matrices

 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r1, r2, c1, c2, i, j;
    //taking input for rows and columns of matrix 1 and 2
    printf("enetr the value of rows for matrix 1");
    scanf("%d", &r1);
    printf("enetr the value of colums for matrix 1");
    scanf("%d", &c1);
    printf("enetr the value of rows for matrix 2");
    scanf("%d", &r2);
    printf("enetr the value of columns for matrix 2");
    scanf("%d", &c2);
    int mat1[50][50], mat2[50][50], mat3[50][50], mat4[50][50], mat5[50][50], sum = 0, k;//declaring 5 matrices for storing values of matrix 1,2, addition, substraction and multiplication
    if (c1 == c2 && r1 == r2 && r1==c2)
    {
        printf("enter elements for math1\n");//taking input for matrix 1 
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
            printf("\n");
        }
        {
            printf("enter elements for math2\n");//taking input for matrix 2
            for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                    scanf("%d", &mat2[i][j]);
            }
            printf("\n");
        }
        {
            printf("math1\n");//printing matrix 1
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    printf(" %d ", mat1[i][j]);
                }
                printf("\n");
            }
        }
        {
            printf("math2\n");//printing matrix 2
            for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    printf(" %d ", mat2[i][j]);
                }
                printf("\n");
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];//storing addition of matrix 1 and 2 in matrix 3
            }
        }
        printf("adittion of mat 1 and ,mat2 is\n ");
        {
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    printf(" %d ", mat3[i][j]);//printing addition of matrix 1 and 2
                }
                printf("\n");
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                mat4[i][j] = mat1[i][j] - mat2[i][j];//storing substraction of matrix 1 and 2 in matrix 4
            }
        }
        printf("substraction of mat 1 and ,mat2 is\n ");
        {
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    printf(" %d ", mat4[i][j]);//printing substraction of matrix 1 and 2
                }
                printf("\n");
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                 mat5[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                mat5[i][j] = mat5[i][j] + mat1[i][k] * mat2[k][j];//storing multiplication of matrix 1 and 2 in matrix 5
            }
            }
        }
        printf("multiplication of mat 1 and ,mat2 is\n ");
        {
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    printf(" %d ", mat5[i][j]);//printing multiplication of matrix 1 and 2
                }
                printf("\n");
            }
        }
    
    {
        printf("math1 transpose\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf(" %d ", mat1[j][i]);//printing transpose of matrix 1
            }
            printf("\n");
        }

        {
            printf("math2 transpose\n");
            for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    printf(" %d ", mat2[j][i]);//printing transpose of matrix 2
                }
                printf("\n");
            }
        }
    }
}
    else
    {
        printf("operation not possible\n");
    }

    return 0;
}
/*
:\Users\pranj\OneDrive\Desktop\c coding>cd "c:\Users\pranj\OneDrive\Desktop\c coding\" && gcc matrix.c -o matrix && "c:\Users\pranj\OneDrive\Desktop\c coding\"matrix
enetr the value of rows for matrix 12
enetr the value of colums for matrix 12
enetr the value of rows for matrix 22
enetr the value of columns for matrix 22
enter elements for math1
3
4

6
7

enter elements for math2
4
2
5
3

math1
 3  4 
 6  7 
math2
 4  2 
 5  3 
adittion of mat 1 and ,mat2 is
  7  6 
 11  10 
substraction of mat 1 and ,mat2 is
  -1  2 
 1  4 
multiplication of mat 1 and ,mat2 is
  32  18 
 59  33 
math1 transpose
 3  6 
 4  7 
math2 transpose
 4  5 
 2  3
*/