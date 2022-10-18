// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3000
#include<stdio.h>
void main()
{
    int first=2,second=1,third=0 ;

    printf("%d ,",first);
    printf("%d ,",second);

    
        while(third<= 3000)
        {
            third = first + second ;
            first =third;
            printf("%d ,",third);

            third = third + second;
            second =third;
            printf("%d ,", third);
        }


    

    
    
    
}
  //  third = third + first ;
    //first = third ;
    //printf("%d ,", third);

    //third = third + second ;
    //second = third ;
    //printf("%d,",third);

    
    //third = third + first;
    //first =third;
    //printf("%d,",third);
    
    


