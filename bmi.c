// write a programe to findout bmi of user(kg/height)
#include<stdio.h>
void main()
{
    float weight,hight,bmi;
    
    printf(" enter value of weight(kg): ");
    scanf("%f",&weight);

    printf(" enter value of  height(feet): ");
    scanf("%f",&hight);
    
   bmi=(weight)/(hight*hight);

    printf(" bmi  of ans is %f", bmi);

    
}
    