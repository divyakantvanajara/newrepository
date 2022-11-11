// Example of function 
// without argument with return 
//programe to find area of cricle 
// area = pi*r*r ;
#include<stdio.h>
float GetPi()
{
    float pi=3.1415926535;
    return pi;
}
void main()
{
    int redius;
    float pi,area;
    printf("Enter the value of radius ");
    scanf("%d",&redius);
    pi=GetPi();
    area=pi*(redius*redius);
    printf("The value of area is %f ",area);
}