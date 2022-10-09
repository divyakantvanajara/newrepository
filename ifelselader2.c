// write  a program to findout which  number is greater out of given 3 number
#include<stdio.h>
void main()
{
    int num1,num2,num3;

    printf("Enter value of num1" );
    scanf("%d",&num1);
    printf("Enter value of num2" );
    scanf("%d",&num2);
    printf("Enter value of num3" );
    scanf("%d",&num3);
    printf("\n the value of num1is %d",num1);
    printf("\n the value of num2 is %d",num2);
    printf("\n the value of num3 is %d",num3);


    if(num1>num2 && num1>num3)
    {
        printf("\n the value of num1 is greatest ");
    }
     else if(num2>num3 && num2>num1)
    {
        printf("\n the value of num2 is greatest");
    }
     else if(num3>num1 && num3>num2)
    {
        printf("\n the value of num3 is greatest");
    }
    else
    {
        printf("\nall are same");
    }

    printf("\n GOODBYEEE..");
}