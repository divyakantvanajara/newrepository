// Example of function 
// with argument with return
//write a programe to peform addition
#include<stdio.h>
int GetAdd(int a,int b)
{
    int answer=a+b;
    return answer;
}
void main()
{
    int num1,num2,answer;
    printf("Enter the value of number 1 ");
    scanf("%d",&num1);
    printf("Enter the value of number 2 ");
    scanf("%d",&num2);

    answer=GetAdd(num1,num2);
      printf("the value of answer is %d ",answer);
} 
