//Example of multiarray
#include<stdio.h>
#include<stdio.h>
void main()
{
    int student[5][5],count,temp;
    for(temp=0;temp<5;temp++)
    {
   // printf("Enter the marks of student %d : \n",temp+1);
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
    printf("the value of student %d for marks of  subject %d =: %d: \n",temp+1,count+1,student[temp][count]);
    //scanf("%d",&student[temp][count]);
   
    }
    printf("\n");
    }
    
    
     
    
        
    
    

    //  printf("Enter the marks of student 2 : \n");
    // for(count=0;count<5;count++)
    // {
    // printf("Enter the marks of subject %d: ",count+1);
    // scanf("%d",&student[1][count]);
    // } 
    // printf("\n");
    //  printf("Enter the marks of student 3 : \n");
    // for(count=0;count<5;count++)
    // {
    // printf("Enter the marks of subject %d: ",count+1);
    // scanf("%d",&student[2][count]);
    // } 
    // printf("\n");
    //  printf("Enter the marks of student 4 : \n");
    // for(count=0;count<5;count++)
    // {
    // printf("Enter the marks of subject %d: ",count+1);
    // scanf("%d",&student[3][count]);
    // } 
    // printf("\n");
    //  printf("Enter the marks of student 5 : \n");
    // for(count=0;count<5;count++)
    // {
    // printf("Enter the marks of subject %d: ",count+1);
    // scanf("%d",&student[4][count]);
    // } 

 


    // printf("Enter the marks of subject 2: ");
    // scanf("%d",&student[0][1]);
    
    // printf("Enter the marks of subject 3: ");
    // scanf("%d",&student[0][3]);
    
    // printf("Enter the marks of subject 4: ");
    // scanf("%d",&student[0][4]);
    
    // printf("Enter the marks of subject 5: ");
    // scanf("%d",&student[0][5]);
}