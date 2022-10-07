// write  a program to  wether  the user given alphabet is vowel or not using and or
// && - and 
// || - or 
// a,e,i,o,u
#include<stdio.h>
void main()
{
    char letter;


    printf("Enter any one alphabet" );
    scanf("%c",&letter);


    if(letter =='a' || letter =='e' || letter =='i' || letter =='o' || letter =='u' || letter =='A' || letter =='E' || letter =='I' || letter =='O' || letter =='U')
    {
        printf("\n it is vowel");
    }
     
    else
    {
        printf("\n it is consonent");
    }

    printf("\n GOODBYEEE..");
}