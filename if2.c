// write  a program to findout wether the user is eligible for voting or not accept age as an input from user
#include<stdio.h>
void main()
{
    int age;

    printf("Enter your age " );
    scanf("%d",&age);
    printf("\nthe age your %d" ,age);

    if(age >= 10)
    {
        printf("\n you are eligible for voting ");
    }
    printf("\n GOODBYEEE..");
}