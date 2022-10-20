//https://i1.faceprep.in/fp/articles/img/55984_1580817324.png 
// half pyramid number

#include<stdio.h>

int main()
{
    int rows = 1, columns = 1, n = 6;
    int number = 1;
 
    
    while (rows <= n) {
 
        while (columns <= rows - 1) 
        {
 
            
            printf("%d ", columns);
 
            
            columns++;
        }
        columns = 1;
 
        
        rows++;
        printf("\n");
    }
    
}

    // printf("\n");
    // count = 0;
    // printf("1 ");
    // printf("2 ");
    // printf("3 ");
    // printf("4 ");
    // printf("5 ");
    // printf("\n");

    // printf("1 ");
    // printf("2 ");
    // printf("3 ");
    // printf("4 ");
    // printf("5 ");
    // printf("\n");

    //  printf("1 ");
    // printf("2 ");
    // printf("3 ");
    // printf("4 ");
    // printf("5 ");
    // printf("\n");

    //  printf("1 ");
    // printf("2 ");
    // printf("3 ");
    // printf("4 ");
    // printf("5 ");
    // printf("\n");

    //  printf("1 ");
    // printf("2 ");
    // printf("3 ");
    // printf("4 ");
    // printf("5 ");
    // printf("\n");
