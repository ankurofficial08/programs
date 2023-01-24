//Performance = 
//Submission =
// Program 4A

#include<stdio.h>
int main()
{
    int i,j,k;

    printf("PATTERN 1\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("PATTERN 2\n");
    for(i=0; i<5; i++)
    {
        for(j=5; j>i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    printf("PATTERN 3 (Pyramid Pattern)\n");
    // int r;
    // printf("Enter Number Of Rows\n");
    // scanf("%d",&r);
    for(i=1; i<=4; i++) // for trasversing rows
    {
        for(j=1; j<=4-i; j++)  // for spaces
        {
            printf(" ");
        }

        for(k=1; k<=2*i-1; k++)  // for stars
        {
            printf("*");
        }

        printf("\n");
    }   

    return 0;
}