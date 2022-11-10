//Example of multiarray
// write a programe to store  5 student of 5 subject's  acending order

#include<stdio.h>
void main()
{
    int student[5][5],count,temp,sum[5],total,flash,adder;
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
    for(adder=0;adder<5;adder++)
    {
        for(flash=0;flash<5;flash++)
        {
            for(count=flash+1;count<5;count++)
            {
                if(student[adder][flash]< student[adder][count])
                {
                     temp=student[adder][flash];
                     student[adder][flash]=student[adder][count];
                     student[adder][count]=temp;
                 }
             }
         }
    }
    for (temp = 0; temp < 5; temp++)
    {
        for (count = 0; count < 5; count++)
        {
            printf("\nthe marks of student %d for subject %d = %d ", temp + 1, count + 1, student[temp][count]);
        }
        printf("\n");
    }


    
    // for(flash=0;flash<5;flash++)
    // {
    // for(count=flash+1;count<5;count++)
    // {
    // if(student[0][flash]< student[0][count])
    // {
    //     temp=student[0][flash];
    //     student[0][flash]=student[0][count];
    //     student[0][count]=temp;
    // }
    // }
    // }
    // printf("the value of student1 is  highest :%d",student[0][0]);
   // for (flash = 0; flash < 5; flash++)
    // {
    //     for (count = flash + 1; count < 5; count++)
    //     {
    //         if (student[2][flash] < student[2][count])
    //         {
    //             temp = student[2][flash];
    //             student[2][flash] = student[2][count];
    //             student[2][count] = temp;
    //         }
    //     }
    // }
    
    
    // else if(student[0][1]>student[0][2])
    // {
    //     temp=student[0][1];
    //     student[0][1]=student[0][2];
    //     student[0][2]=student[0][1];
    // }
    // else if(student[0][2]>student[0][3])
    // {
    //     temp=student[0][2];
    //     student[0][2]=student[0][3];
    //     student[0][3]=student[0][2];
    // }
    // else if(student[0][3]>student[0][4])
    // {
    //     temp=student[0][3];
    //     student[0][3]=student[0][4];
    //     student[0][4]=student[0][3];
    // }
   
}
