//Performance = 
//Submission =
// Program 3A

#include<stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10], rows , col, i, j, k;

    printf("Enter the value of rows: \n");
    scanf("%d", & rows);
    printf("Enter the value of columns: \n");
    scanf("%d", & col);

    if(rows == col)
    {
    printf("Enter the elements of Matrix-A: \n"); 

    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < col; j++) 
        {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < rows; i++)
     {
        for (j = 0; j < col; j++) 
        {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < col; j++)
         {
            c[i][j] = 0;
            for (k = 0; k < rows; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < col; j++) 
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    }

    else
    {
        printf("Matrix Multiplication can not be perform because rows and cols are not equal.=");
    }
    return 0;
}
