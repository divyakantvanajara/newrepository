// write a programe to print all odd number
// 1,3,5,7,9,11...5000
#include<stdio.h>
void main()
{
    int counter;
    counter = 1 ;

    while(counter <= 5000)
    {
        printf("%d ",counter);
        counter = counter + 2;
    }
}