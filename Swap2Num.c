// #include<stdio.h>
// int main()
// {
// 	int a =20 , b= 10;
	

// 		printf("After Swapping \n");
//     printf("a =%d , b =%d\n", a , b);
// 	 a= a+b;
// 	 b= a-b;
// 	 a= a-b;
	 
// 	 	printf("Before Swapping \n");
//     printf("a =%d , b =%d\n", a , b);
	 
	 
// }


//  Swap Two Number Using Call By Value

// #include <stdio.h>
// void swap(int x, int y);
// int main()
// {
//     int a = 10, b = 20;

//     printf("Before Swaping The Values\n");
//     printf("a=%d b=%d\n", a, b);

//     // Pass by Values
//     swap(a, b);

// 	return 0;

// }

// // Swap functions that swaps
// // two values
// void swap(int x, int y)
// {
//     int t;

//     t = x;
//     x = y;
//     y = t;

//     printf("After Swaping The Values\n");
//     printf("x=%d y=%d\n", x, y);
// }


//Swap Two Number Using Call By Reference

#include <stdio.h>
void swapx(int*, int*);
int main()
{
    int a = 5, b = 7;

    printf("Before Swaping The Values\n");
    printf("a=%d b=%d\n", a, b);
    // Pass reference
    swapx(&a, &b);

   
    return 0;
}

// Function to swap two variables
// by references
void swapx(int* x, int* y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("After Swaping The Values\n");
    printf("x=%d y=%d\n", *x, *y);
}