//write a program to find highest runs out of given 5 runs take runs as an input from user 
#include<stdio.h>
void main ()
{
    int runs[5],count=0,temp;
    do
    {
        printf("Enter value of runs %d : ",count+1);
         scanf("%d",&runs[count]);
            count++;
    }while(count<5);
    
    // printf("Enter value of runs 2 : ");
    // scanf("%d",&runs[1]);
    
    // printf("Enter value of runs 3 : ");
    // scanf("%d",&runs[2]);
    
    // printf("Enter value of runs 4 : ");
    // scanf("%d",&runs[3]);
    
    // printf("Enter value of runs 5 : ");
    // scanf("%d",&runs[4]);
    for(count=0;count<5;count++)
    {
         printf("\n the value of runs %d are %d  ",count+1,runs[count]);
    }
   
    
    // printf("\n the value of runs 2 is %d ",runs[1]);
    
    // printf("\n the value of runs 3 is %d",runs[2]);
    
    // printf("\n the value of runs 4 is %d",runs[3]);
    
    // printf("\n the value of runs 5 is %d",runs[4]);
   
    
    if(runs[1]>runs[0])
    {
        temp=runs[0];
        runs[0]=runs[1];
        runs[1]=temp;        
    }

    if(runs[2]>runs[0])
    {
        temp=runs[0];
        runs[0]=runs[2];
        runs[2]=temp;        
    }

    if(runs[3]>runs[0])
    {
        temp=runs[0];
        runs[0]=runs[3];
        runs[3]=temp;        
    }

    if(runs[4]>runs[0])
    {
        temp=runs[0];
        runs[0]=runs[4];
        runs[4]=temp;        
    }
    
    printf("\n highest runs is : %d",runs[0]);
}