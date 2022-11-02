//https://i1.faceprep.in/fp/articles/img/55984_1580817324.png
// full pyramid number
#include<stdio.h>
void main()
{
    int count=0;

    for(count=0;count<9;count++)
    {
        printf("_");

    }
    printf("1");
    printf("\n");
    for(count=0;count<7;count++)
    {
        printf("_");

    }
    printf("2_3_2");
    printf("\n");
    for(count=0;count<5;count++)
    {
        printf("_");

    }
    printf("3_4_5_4_3");
    printf("\n");
    
     for(count=0;count<3;count++)
    {
        printf("_");

    }
    printf("4_5_6_7_6_5_4");
    printf("\n");
    printf("_");
    printf("5_6_7_8_9_8_7_6_5");
}  

