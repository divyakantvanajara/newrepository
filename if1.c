// write  a program to decide wether the user given number is less than 10 or no
#include<stdio.h>
void main()
{
    int number1;

    printf("Enter value of number1 " );
    scanf("%d",&number1);
    printf("\nthe value of number1 %d" ,number1);

    if(number1<10)
    {
        printf("\n the number is less than 10");
    }
    printf("\n GOODBYEEE..");
}