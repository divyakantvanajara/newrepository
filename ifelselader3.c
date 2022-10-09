// write a programe to find out how many days a month has accpect month from user 
#include<stdio.h>
void main()
{

    int days,month;

    printf("enter value of month ");
    scanf("%d",&month);

    printf("the value of month %d \n ",month);
    

    if(month==1 )
    {
        printf("31 days");

    }
    else if(month==2)
    {
        printf("28/29 days");

    }
    else if(month==3)
    {
        printf("31 days");
    }
    else if(month==4)
    {
        printf("30 days");
    }
    else if(month==5)
    {
        printf("31 days");
    }
    else if(month==6)
    {
        printf("30 days");
    }
    else if(month==7)
    {
        printf("31 days");
    }
    else if(month==8)
    {
        printf("31 days");
    }
    else if(month==9)
    {
        printf("30 days");
    }
    else if(month==10)
    {
        printf("31 days");
    }
    else if(month==11)
    {
        printf("30 days");
    }
    else if(month==12)
    {
        printf("31 days");
    }
    else 
    {
        printf("invalid month");
    }
}