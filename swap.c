#include<stdio.h>
main()
{
    int a,b;
    //by user
    scanf("%d %d",&a,&b);

    a = a * b;  // a = 10 * 5 = 50
    b = a / b;  // b = 50 / 5 = 10
    a = a / b;  // a = 50 / 10 = 5

    printf("%d\n%d",a,b);

}

#include<stdio.h>
main()
{
    int a,b;
    //by user
    scanf("%d %d",&a,&b);

    a = a + b;  // a = 10 + 5 = 15
    b = a - b;  // b = 15 - 5 = 10
    a = a - b;  // a = 15 - 10 = 5

    printf("%d\n%d",a,b);

}
