//Write a programe to print full pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include <stdio.h>
void main()
{
    int count = 0, temp = 0;
    for(count=0 ;count< 6 ;count++)
    {
        printf("_");
    }
    printf("*_");
    printf("\n");
    for(count=0;count<5;count++)
    {
        printf("_");
    }
   printf("*_");
   printf("*_");
   printf("\n");

   for(count=0;count<4;count++)
   {
    printf("_");
   }
   for(temp=0;temp<3;temp++)
   {
        printf("*_");
   }
    //printf("*_");
    //printf("*_"); 
   // printf("*_");
    printf("\n");
    for(count=0;count<3;count++)
    {
        printf("_");
    }
    for(temp=0;temp<4;temp++)
    {
        printf("*_");
    }
    printf("\n");

    for(count=0;count<2;count++)
    {
        printf("_");
    }
    for(temp=0;temp<5;temp++)
    {
        printf("*_");
    }
    printf("\n");
    for(count=0;count<1;count++)
    {
        printf("_");
    }
    for(temp=0;temp<6;temp++)
    {
        printf("*_");
    }
    printf("\n");



   
}