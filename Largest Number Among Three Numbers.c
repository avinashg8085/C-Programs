#include<stdio.h>
int main()
{


 double a,b,c;
printf("enter the three number:");
scanf("%lf%lf%lf",&a,&b,&c);
if (a>=b && a>=c)
    printf("%1f" ,a);
if (b>=a && b>=c)
    printf("%1f" ,b);
if (c>=a && c>=b)
    printf("%1f",c);

}

