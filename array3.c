//write a program to find lowest goals out of given 5 matches take goal as an input from user 

#include<stdio.h>
void main()
{
    int goals[5],count,temp;

    
    for (count = 0; count < 5; count++)
    {
        printf("Enter value of goals %d ", count + 1);
        scanf("%d", &goals[count]);
    }
    for(count =0; count < 5; count++)
    {
        printf("\nthe value of goals  %d are %d ",count+1,goals[count]);
    }

    if(goals[1]<goals[0])
    {
        temp=goals[0];
        goals[0]=goals[1];
        goals[1]=temp;
    }
     if(goals[2]<goals[0])
    {
        temp=goals[0];
        goals[0]=goals[2];
        goals[2]=temp;
    }
     if(goals[3]<goals[0])
    {
        temp=goals[0];
        goals[0]=goals[3];
        goals[3]=temp;
    }
     if(goals[4]<goals[0])
    {
        temp=goals[0];
        goals[0]=goals[4];
        goals[4]=temp;
    }
     printf("\n lowest goals is : %d",goals[0]);



//    printf("Enter the value of goals 1 : ");
//    scanf("%d ",&goals[0]);

//    printf("Enter the value of goals 2 : ");
//    scanf("%d ",&goals[1]);

//    printf("Enter the value of goals 3 : ");
//    scanf("%d ",&goals[2]);

//    printf("Enter the value of goals 4 : ");
//    scanf("%d ",&goals[3]);

//    printf("Enter the value of goals 5 : ");
//    scanf("%d ",&goals[4]);


}