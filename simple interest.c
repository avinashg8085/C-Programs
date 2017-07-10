// simple interest find
#include<stdio.h>
#include<conio.h>
// header file
// main file
 void main()
{
    float principal,rate,interest;
    int time;
    printf("inter the principal amount");
    scanf("%f",&principal);
    printf("inter the rate");
    scanf("%f",&rate);
    printf("inter the time:");
    scanf("%d",&time);
    interest = (principal*rate*time)/100;
    printf("interest is %f",interest);
    getch();
}
