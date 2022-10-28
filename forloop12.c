//https://i1.faceprep.in/fp/articles/img/55984_1580817324.png
// hollw full pyramid number
#include<stdio.h>
void main()
{
    int count=0,temp=0;

    for(count=0;count<5;count++)
    {
        printf("_");
    }
    printf("1");
    printf("\n");
    for(count=0;count<4;count++)
    {
        printf("_");
    }
    printf("1_2");
    printf("\n");
    for(count=0;count<3;count++)
    {
        printf("_");
    }
    
    printf("1");
    for(count=0;count<3;count++)
    {
        printf("_");
    }
    printf("3");
    printf("\n");
    for(count=0;count<2;count++)
    {
        printf("_");
    }
    printf("1");
    for(temp=0;temp<5;temp++)
    {
        printf("_");
    }
    printf("4");
    printf("\n");
    printf("_");
    printf("1");
    for(temp=0;temp<7;temp++)
    {
        printf("_");
    }
    printf("5");
    printf("\n");
    
    printf("1_2_3_4_5_6");
    
    
    


}