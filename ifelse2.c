// write  a program to findout wether the user given number is nagative or not

#include<stdio.h>
void main()
{
    int num;


    printf("Enter any value of number" );
    scanf("%d",&num);


    if(num<=0)
    {
        printf("\n it is a nagative nuber");
    }
     
    else
    {
        printf("\n it is positive number");
    }

    printf("\n GOODBYEEE..");
}