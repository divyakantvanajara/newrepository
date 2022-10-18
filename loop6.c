//0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
#include<stdio.h>

void main()
{
    int first=0, second=1 ,third=0,loop1=1,loop2=2,loop3=0 ;

    printf("%d ,",first);
   printf("%d ,",second);

   third = loop2 + second;
   printf("%d,",third);
   
   loop3 = loop2 + loop1;
   first = third;
   third = first + loop3 ;
   printf("%d ,",third);

    while(third < 1000)

    {
        loop3 =loop3 + loop1 ;
        second = third;
        third = second +loop3;
        printf("%d ,",third); 

       loop3 = loop3 + loop1;
       first = third;
       third =   first + loop3;
       printf("%d ,",third);

    }
   
 //  loop3 =loop3 + loop1 ;
   //second = third;
   //third = second +loop3;
   //printf("%d ,",third); 
   
  
   
   
   //loop3 = loop3 + loop1;
    //first = third;
   //third = loop3 + first;
   //printf("%d ,",third);

   
   
   //loop3 =loop3 + loop1 ;
   //second = third;
   //third = second +loop3;
   //printf("%d ,",third);

   
   
   //loop3 = loop3 + loop1;
   //first = third;
   //third = loop3 + first;
   //printf("%d ,",third);

}