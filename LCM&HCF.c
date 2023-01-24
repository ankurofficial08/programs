//Performance = 
//Submission =
// Program 9A

#include<stdio.h>

int main() {

    int n1, n2, max , i , hcf;

    printf("Enter two positive integers: \n");
    scanf("%d %d", &n1, &n2);
   

   // For HCF

   for(i = 1; i <= n1 || i <= n2; i++) 
   {
   if( n1%i == 0 && n2%i == 0 )
      hcf = i;
   }

   printf("HCF = %d\n", hcf);

   //======================

   // For LCM
   // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) 
    {
        if ((max % n1 == 0) && (max % n2 == 0))
         {
            printf("The LCM of %d and %d is %d.\n", n1, n2, max);
            break;
        }
        max++;
    }
   
   return 0;
}

