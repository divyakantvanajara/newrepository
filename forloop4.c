//https://i1.faceprep.in/fp/articles/img/55984_1580817324.png 
// inverted  pyramid number

#include<stdio.h>

int main()
{
    int rows = 6, columns = 1, n = 1;
    int number = 1;
 
    
    while (rows > n) {
 
        while (columns <= rows - 1) {
 
            
            printf("%d ", columns);
 
            
            columns++;
        }
        printf("\n");
        columns = 1;
 
       
        rows--;
        
    }
    
}