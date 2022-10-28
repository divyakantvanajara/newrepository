//Write a programe to print hollow half inverted pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include<stdio.h>
void main()
{
    int count=0,space=0,flash =4;

    for(count=0;count<7;count++)
    {
        printf("*");
        //  printf("*");
        //   printf("*");
        //    printf("*");
        //     printf("*");
        //      printf("*");
        //       printf("*");
    }
    for(count=0;flash>0;count++)
    {
    printf("\n");
       printf("*");
    
    for(space=0;space<flash;space++)
    {
        printf(" ");
    } 
    
    // printf("_");
    // printf("_");
    // printf("_");
    printf("*");
   // printf("\n");
   // printf("*");
   flash--;
    }
    // for(space=0;space<3;space++)
    // {
    //     printf(" ");
    // } 
    // printf("_");
    // printf("_");
//     printf("*");
   // printf("\n");
   // printf("*");

//     for(space=0;space<2;space++)
//     {
//         printf(" ");
//     } 
    // printf("_");
    // printf("_");
//     printf("*");
    //printf("\n");
    //printf("*");
    
//     for(space=0;space<1;space++)
//     {
//         printf(" ");
//     } 
     // printf("_");
     // printf("_");
//     printf("*");
    // printf("\n");
    // printf("*");
    //printf("*");
    printf("\n");
    printf("*");
    
          
}