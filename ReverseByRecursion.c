//Performance = 
//Submission =
// Program 7A

#include<stdio.h>
int sum = 0 , rem;

int reverse(int num)
{

if(num)

{
    rem = num%10;
    sum = sum*10 + rem;
    reverse(num/10);  // Recursion 

}


else
{
    return sum;
}
}
int main()
{
    int num , reverse_num;

    printf("Enter a No.\n");
    scanf("%d",&num);

    reverse_num = reverse(num);

    printf("Tje reverse of a entered number= %d", reverse_num);
}