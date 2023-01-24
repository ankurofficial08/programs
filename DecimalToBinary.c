//Performance = 
//Submission =
// Program 8A

#include<stdio.h>
int main()
{

int i =  0, num , rev[10];
printf("Enter a No.\n");
    scanf("%d",&num);

while (num)
{
     rev[i++] = num%2;
   num = num/2;
}

printf("Binary Of Given No. = ");

for ( i = i-1; i >= 0; i--)
{
    printf("%d",rev[i]);
}

}

// #include<stdio.h>
// int main()
// {
//   int i=0,num,rev[10];
//   printf("Enter a octal number : ");
//   scanf("%o",&num);
  
//  while (num)
// {
//      rev[i++] = num%2;
//    num /= 2;
// }

// printf("Binary Of Given No. = ");

// for ( i = i-1; i >= 0; i--)
// {
//     printf("%d",rev[i]);
// }
// }