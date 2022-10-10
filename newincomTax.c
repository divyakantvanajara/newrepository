// write a programto calcuate tax on salary
#include<stdio.h>
void main()
{
    int sal;
    double tax;

    printf("enter value of salary ");
    scanf("%d",&sal);

    if(sal<=10000)
    {
        printf("no tax\n");
    }
    else if(sal>10000 && sal<=100000)
    {
        tax=sal*0.10;
        printf("%lf",tax);
    }
    else if(sal>100000 && sal<=1000000)
    {
        tax=sal*0.25;
        printf("%lf",tax);
    }
    else
    {
        tax=sal*0.40;
        printf("%lf",tax);
    }
        printf("\n goodbye..");
}