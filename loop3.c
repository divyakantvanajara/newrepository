// write a programe to print all even number
// 2,4,6,8,10,12...5000
#include<stdio.h>
void main()
{
    int counter;
    counter = 2 ;

    while(counter <= 5000)
    {
        printf("%d ",counter);
        counter = counter + 2;
    }
}