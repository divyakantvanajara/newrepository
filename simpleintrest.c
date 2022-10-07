// write a programe to find simple intrest take input from user(amount,rate,year)
#include<stdio.h>
void main()
{
    float SI,amount,rate,year;
    
    printf(" enter value of amount: ");
    scanf("%f",&amount);

    printf(" enter value of rate: ");
    scanf("%f",&rate);
    
    printf(" enter value of year: ");
    scanf("%f",&year);
    
    SI = (amount*rate*year)/100;

    printf(" si  of ans is %f", SI);

    
}
    
 