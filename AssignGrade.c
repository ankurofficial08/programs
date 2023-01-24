//Performance = 
//Submission =
// Program 6A

#include<stdio.h>
int main()
{
    int number ;
    printf("Enter Your Number\n");
    scanf("%d",&number);

    if(number >= 90)
    printf("Your Grade Is A+.");
    else if( number >=75 )
    printf("Your Grade Is A.");
    else if( number >=60 )
    printf("Your Grade Is B.");
    else if( number >=45 )
    printf("Your Grade Is C.");
    else if( number >=30 )
    printf("Your Grade Is D.");
    else
    printf("Your Grade Is E.");



}