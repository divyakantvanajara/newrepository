// write a program to findout largest office from given two office's length and width
#include<stdio.h>
void main()
{
    int length1,length2,width1,width2,office1,office2;

    printf("enter the value of length1");
    scanf("%d",&length1);

     printf("enter the value of width1");
    scanf("%d",&width1);

    office1=length1*width1;
     printf("the value of office1 ia %d",office1);
    

     printf("enter the value of length2");
    scanf("%d",&length2);

     printf("enter the value width2");
    scanf("%d",&width2);

    office2=length2*width2;
     printf("the value of office2 ia %d",office2);

     if(office1>office2)
        {
            printf("\noffice1 ia largest");      
        } 
        else
        {
            printf("\noffice2 is largest");
        }
}