//Example of multiarray
// write a programe to store  5 student of 5 subject's  all subject total ,average

#include<stdio.h>
void main()
{
    int student[5][5],count,temp,sum[5],total;
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
        sum[temp]=0;
    for(count=0;count<5;count++)
    {
    sum[temp]= sum[temp] + student[temp][count];

    
    }
    printf("\nthe value of total of all student is %d ",sum[temp]);
   // printf("\nall student %d and total subject:%d =%d",temp+1,count+1,sum[temp]);
    
    }
   // total=sum[0];
    for(count=0;count<5;count++)
    {
        total= total+sum[count];
    }
    //  total= total + sum[count];
    //   total=total +sum[3];
    //    total=total +sum[4];  
    printf("\nall student total : %d ",total);
    
    average = total/5;
    printf("\nthe average is %f ",average);
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