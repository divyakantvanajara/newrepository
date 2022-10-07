// write  a program to findout which number is  grater out of  given two number take input from user

#include<stdio.h>
void main()
{
    int num1,num2;


    printf("Enter any value of num1" );
    scanf("%d",&num1);
    printf("Enter any value of num2" );
    scanf("%d",&num2);

    printf("the value of number 1 is %d ",num1);
    printf("the value of number 2 is %d ",num2);


    if(num1 > num2)
    {
        printf("\n the value of number 1 is grater ");
    }
     
    else
    {
        printf("\n the value of number2 is grater");
    }

    printf("\n GOODBYEEE..");
}