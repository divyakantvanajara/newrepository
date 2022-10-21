//https://i1.faceprep.in/fp/articles/img/55984_1580817324.png
// half pyramid number

#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}