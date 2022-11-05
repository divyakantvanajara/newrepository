// example of multi array
#include<stdio.h>
void main()
{
    int mathes[5][5],count,temp;
    for(temp=0;temp<5;temp++)
    {
    printf("Enter the value of match: %d :\n",temp+1);
    for(count=0;count<5;count++)
    {
        printf("Enter the value of players runs: %d:",count+1);
        scanf("%d",&mathes[temp][count]);
    }
    printf("\n");
    }
    for(temp=0;temp<5;temp++)
    {
        printf("the value of matches:%d\n",temp+1);
    
    for(count=0;count<5;count++)
    {
    printf("the value of players run :%dand %d\n",count+1,mathes[temp][count]);
    }
    printf("\n");
    }
}