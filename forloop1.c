// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 1000
// 5  9  13 17  21  25  29

#include<stdio.h>
void main()
{
    int number=1,temp=5,adder=4,count=0;

    printf("%d ",number);
    number=number + temp ;
    printf("%d ",number);

    for(count=0;number<946;count++)
    {
        number=number + temp + adder ;
        printf("%d ",number);
        adder = adder + 4 ;
    }
    

    // number=number + temp + adder  ;
    // printf("%d ",number);
    //  adder = adder + 4 ;

    // number=number + temp + adder  ;
    // printf("%d ",number);
    //  adder = adder + 4 ;

    // number=number + temp + adder ;
    // printf("%d ",number);
    //  adder = adder + 4 ;
    // number=number + temp + adder ;
    // printf("%d ",number);
}