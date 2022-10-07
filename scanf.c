// write a program to perform scanf define
#include<stdio.h>
void main()
{
    int num1;
    float num2;
    char letter;
    printf("enter any letter");
    scanf("%c",&letter);
    printf("enter value of num1");
    scanf("%d",&num1);
    printf("enter value of num2");
    scanf("%f",&num2);
    printf("\n the value of num1 ia %d",num1);
    printf("\n the value of num2 ia %f",num2);
    printf("\n the letter  ia %c",letter);
}