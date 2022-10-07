// write  a program to findout wether the user given number is odd or not
#include<stdio.h>
void main()
{
    int number;
    float temp;

    printf("Enter the value " );
    scanf("%d",&number);

    temp=number%2;


    printf("\nthe value of temp is %f" ,temp);

    if(temp != 0)
    {
        printf("\n the number given is odd number");
    }
    printf("\n GOODBYEEE..");
}