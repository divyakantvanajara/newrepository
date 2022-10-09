// write a program to findout cube of given positive number
#include<stdio.h>
void main()
{
    int num,ans;

    printf("enter the value of num ");
    scanf("%d",&num );

    if(num>0)
    {
        ans=num*num*num;
        printf("\n the value of cube is %d",ans);
    }
}