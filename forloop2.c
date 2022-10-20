// write a program to findout power of given number using given exponent 
#include<math.h>
#include<stdio.h>

void main()
{
    int base,exponent;
    int result;

    printf("Enter the value of base: ");
    scanf("%d",&base);

    printf("enter the value of exponent : ");
    scanf("%d ",&exponent);

    result = pow(base , exponent);
    
    printf("%d^%d = %d  " ,base,exponent,result);
    
    
}
