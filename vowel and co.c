// To check whether Consonant or Vowel
#include<stdio.h>
main()
{
    // Variable Declaration
    char ch;
    // Input
    printf("Enter a Character : ");
    scanf("%c",&ch);

    // Conditions
    // 1. To check the range a-z or A-Z
    // 2. To find it is vowel or consonant

    // && - AND
    // || - OR
    if ( (ch >='a' && ch<='z') || (ch>='A' && ch<='Z') ){

       if((ch =='a' || ch== 'e' || ch=='i' || ch=='o' || ch=='u' )  ||  (ch =='A' || ch== 'E' || ch=='I' || ch=='O' || ch=='U')){
            printf("it is a vowel");



       }else{

        printf("it is a consonant");
       }



    }else{
        printf("Not a Character;");
    }
}
