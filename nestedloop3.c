// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
// half pyramid number

#include<stdio.h>

void main()
{
    int count=1,flash=1;

    while(flash <= 6)
    {
        while(count < flash)
        {
            printf("%d ",count);
            count =count + 1;
        }
        printf("\n");
        count=1;
        flash++;
    }

}