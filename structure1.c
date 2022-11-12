// write a programe to store 3 countries time  with hours , minutes , second and  name of country 
#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hours;
    float minutes;
    char name[25];
}t2,t3;
void main()
{
    struct time t1;
    printf("Enter value of first country hours ");
    scanf("%d",&t1.hours);
    printf("Enter value of first country minutes ");
    scanf("%f",&t1.minutes);
    printf("Enter value of name of first country ");
    fflush(stdin);
    scanf("%s",&t1.name);
   

    printf("Enter value of second country hours ");
    scanf("%d",&t2.hours);
    printf("Enter value of second country minutes ");
    scanf("%f",&t2.minutes);
    printf("Enter value of name of second country ");
    fflush(stdin);
    scanf("%s",&t2.name);

    printf("Enter value of third country hours ");
    scanf("%d",&t3.hours);
    printf("Enter value of third country minutes ");
    scanf("%f",&t3.minutes);
    printf("Enter value of name of third country ");
    fflush(stdin);
    scanf("%s",&t3.name);

     printf("\nthe value of first country hours is %d and minutes is %.2f and name is %s ",t1.hours,t1.minutes,t1.name);
     
     printf("\nthe value of first country hours is %d and minutes is %.2f and name is %s ",t2.hours,t2.minutes,t2.name);
     
     printf("\nthe value of first country hours is %d and minutes is %.2f and name is %s ",t3.hours,t3.minutes,t3.name);
   
    
}