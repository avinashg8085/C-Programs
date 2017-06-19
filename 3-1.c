// to find Quotient and Remainder taking input from user
// Header File
#include<stdio.h>
//main calling function
main()
{
    int a, b;
    // INPUT
    scanf("%d %d",&a,&b);
    // OUTPUT
    // Quotient
    printf("%d / %d = %d\n", a, b, a/b);
    // Remainder
    printf("%d %% %d = %d\n", a, b, a%b);
}
