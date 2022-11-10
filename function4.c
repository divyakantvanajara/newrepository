// Write a programe to make a calc (using function)
// ->addition 
// ->subtraction
// ->multiplication
// ->division
// ->reminder
// ->min
// ->max
// ->equality
#include<stdio.h>
void GetAdd(int a,int b)
{
    float answer;
    answer=a+b;
     printf("The value of answer is %f ", answer);  
}
void GetSub(int a,int b)
{
    float answer;
    answer= a-b;
    printf(" The value of answer is %f ",answer);
}
void GetMulti(int a,int b)
{
    float answer;
    answer= a*b;
    printf(" The value of answer is %f ",answer);
}
void GetDiv(int a,int b)
{
    float answer;
    answer= a/b;
    printf(" The value of answer is %f ",answer);
}
void GetMod(int a,int b)
{
    float answer;
    answer= a % b;
    printf(" The value of answer is %f ",answer);
}
void GetMin(int a ,int b)
{
    float answer;
    if(a<b)
    {
        printf("Number 1 is lowest");
    }
    else if(b<a)
    {
        printf("number 2 is lowest");
    }
}
void GetMax(int a ,int b)
{
    float answer;
    if(a>b)
    {
        printf("Number 1 is grater");
    }
    else if(b>a)
    {
        printf("number 2 is grater");
    }
}
void GetEqu(int a ,int b)
{
    float answer;
    if(a==b)
    {
        printf("Both are same");
    }
    else 
    {
        printf("Both are not same");
    }
}
void main()
{
    int num1,num2,option;
    printf("Enter the value of number 1 ");
    scanf("%d",&num1);
    printf("Enter the value of number 2 ");
    scanf("%d",&num2);
    printf("select any one option");
    printf("\nEnter 1 for addition ");
    printf("\nEnter 2 for subtraction ");
    printf("\nEnter 3 for multiplication ");
    printf("\nEnter 4 for division ");
    printf("\nEnter 5 for reminder ");
    printf("\nEnter 6 for minimum ");
    printf("\nEnter 7 for maximum ");
    printf("\nEnter 8 for equality ");
    scanf("%d",&option);

    if(option==1)
    {
        GetAdd(num1,num2);
    }
    else if(option==2)
    {
        GetSub(num1,num2);
    }
    else if(option==3)
    {
        GetMulti(num1,num2);
    }
     else if(option==4)
    {
        GetDiv(num1,num2);
    }
     else if(option==5)
    {
        GetMod(num1,num2);
    }
     else if(option==6)
    {
        GetMin(num1,num2);
    }
    else if(option==7)
    {
        GetMax(num1,num2);
    }
    else if(option==8)
    {
        GetEqu(num1,num2);
    }
    else
    {
        printf("Invalid choice of option ");
    }




}