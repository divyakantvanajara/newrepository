//https://i1.faceprep.in/fp/articles/img/55984_1580817324.png
// inverted half pyramid number

#include<stdio.h>
void main()
{
    int i,j;
    for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}