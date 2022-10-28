//Write a programe to print hollowfull pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include<stdio.h>
void main()
{
    int count=0,temp=0;

    for(count=0;count<5;count++)
    {
        printf("_");
    }
    printf("*");
    printf("\n");
    for(count=0;count<4;count++)
    {
        printf("_");
    }
    printf("*_*");
    printf("\n");
    for(count=0;count<3;count++)
    {
        printf("_");
    }
    
    printf("*");
    for(count=0;count<3;count++)
    {
        printf("_");
    }
    printf("*");
    printf("\n");
    for(count=0;count<2;count++)
    {
        printf("_");
    }
    printf("*");
    for(temp=0;temp<5;temp++)
    {
        printf("_");
    }
    printf("*");
    printf("\n");
    printf("_");
    printf("*");
    for(temp=0;temp<7;temp++)
    {
        printf("_");
    }
    printf("*");
    printf("\n");
    for(temp=0;temp<6;temp++)
    {
        printf("*_");
    }
    
    


}