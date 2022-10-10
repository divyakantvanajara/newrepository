    // write a programe to findout income tax based on given condition take monthly income as input

// yearly                   income

// <3,00,000                 5%

// >=3,00,000
// <5,00,000                 10%

// >=5,00,000
// <8,00,000                 20%

//  >=3,00,000               30%

#include<stdio.h>
void main()
{
    int month,year;
    double tax;

    printf("enter the value of monthly salary");
    scanf("%d",&month);

    printf("the value of income monthly is %d\n ", month);

     year = month * 12;

     printf("the value of yearly is %d\n ", year);

    if(year < 300000)
    {
        
       tax=year*0.5;
        printf("the tax is % lf",tax);
    }
    else if(year >= 300000 && year < 500000)
    {
        tax=year*0.10;
        printf("the tax is %lf",tax);

    }
    else if(year >= 5,00,000 && year < 8,00,000)
    {
        tax=year*0.20;
        printf("the tax is %lf",tax);

    }
    else if(year >= 8,00,000)
    {
        tax=year*0.30;
        printf("the tax is %lf",tax);

    }
    else
    {
        tax=year*0.40;

        printf("the  tax is %lf ",tax);
    }
    printf("goodbyee..");
}
            
