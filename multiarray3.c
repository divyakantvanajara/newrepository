//Example of multiarray
// write a programe to store  5 student of 5 subject's  all subject total ,average

#include<stdio.h>
void main()
{
    int student[5][5],count,temp,total[5];
    float average;
    for(temp=0;temp<5;temp++)
    {
   // printf("\nEnter the marks of student %d :",temp+1);
    for(count=0;count<5;count++)
    {
    printf("Enter the student %d and enter marks of subject %d: ",temp+1,count+1);
    scanf("%d",&student[temp][count]);
   
    }
    printf("\n");
    }
    for(temp=0;temp<5;temp++)
    {
    //printf(" the marks of student %d : \n",temp+1);
    for(count=0;count<5;count++)
    {
    printf("the value of student %d for marks of  subject %d =: %d  \n",temp+1,count+1,student[temp][count]);
    //scanf("%d",&student[temp][count]);
   
    }
    printf("\n");
    }
    for(temp=0;temp<5;temp++)
    {

    
    total[temp]=0;
    for(count=0;count<5;count++)
    {
    total[temp]= total[temp] + student[temp][count];
    }
    
    printf("\nall student total : %d ",total[temp]);
    
    
    }
    
    average = total[temp]/5;
    printf("the average is %d ",average);
    // total[0]= total[0] + student[0][1];
    // total[0]= total[0] + student[0][2];
    // total[0]= total[0] + student[0][3];
    // total[0]= total[0] + student[0][4];
    // total[1]=0;
    // for(count=0;count<5;count++)
    // {
    // total[1]= total[1] + student[1][count];
    // }
    // printf("all student total : %d ",total[1]);
    // total[2]=0;
    // for(count=0;count<5;count++)
    // {
    // total[2]= total[2] + student[2][count];
    // }
    // printf("all student total : %d ",total[2]);
    // total[3]=0;
    // for(count=0;count<5;count++)
    // {
    // total[3]= total[3] + student[3][count];
    // }
    // printf("all student total : %d ",total[3]);
    // total[4]=0;
    // for(count=0;count<5;count++)
    // {
    // total[4]= total[4] + student[4][count];
    // }
    // printf("\nall student total : %d ",total[4]);
    
    
}