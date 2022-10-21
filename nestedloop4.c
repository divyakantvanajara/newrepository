// https://i1.faceprep.in/fp/articles/img/55984_1580817324.png
//  inverted half pyramid number

#include <stdio.h>

void main()
{
    int count=1,flash=6;
    
   while(flash >= 1)
   {
        while(count < flash)
        {
            printf("%d ",count);
            count = count+ 1;
        }
        printf("\n");
        count = 1;
        flash -- ;
        
       
   }
}