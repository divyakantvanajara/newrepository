// write a program to findout power of given number using given exponent 

#include<stdio.h>

void main()
{
    int base,exponent,power,count;
    

    printf("Enter the value of base: ");
    scanf("%d", &base);

    printf("enter the value of exponent : ");
    scanf("%d ", &exponent);

    power = base * base ;

    for(count=3;count<=exponent;count++)
    {
        power = power * base ;
    }
        printf(" the value of power is : %d",power);
    
}
   // power = power * base ;
    //power = power * base ;
    //power = power * base ;
    // base=5;
    // exponent=7;
    // 5*5*5*5*5*5*5


