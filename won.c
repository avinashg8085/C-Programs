//vote of (bjp and congress)
//header file
#include<stdio.h>
//main calling function
main()
{
    char ch;
    printf("fever of candidate(y/n): ");
    scanf("%c",&ch);
    if (ch == 'y')
        printf("BJP Won.");
    else if (ch == 'n')
        printf("Congress Won.");
    else
        printf("Invalid Input.");

}

