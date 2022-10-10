// write a programe to calculate final electricity bill based upon below given criteria.
// take monthly electricity unit from user as input

//     units                  price per unit

//     <100                         1
//     >100 & <200                  2
//     >200 & <300                  3
//     >300 & <400                  4
//     >400                         5

// also calculate 5% percentage energy charg on total bill amount & display total amount

#include<stdio.h>
void main()
{

    int unit;
    float price,energycharg,totalamount;

    printf("enter the value of electricity unit :");
    scanf("%d",&unit);

    printf(" the value of electricity unit :%d\n",unit);

    if(unit < 100)
    {
        price = unit * 1 ;
        energycharg = price*0.5;
        totalamount = price + energycharg;
        printf("the value of price :%f\n",price);
        printf("the value of energycharg:%f\n",energycharg);
        printf("the value of totalamount: %f\n",totalamount);
    }
    else if (unit >100 && unit < 200)
    {
        price = unit * 2;
        energycharg = price*0.5;
        totalamount = price + energycharg;
        printf("the value of price :%f\n",price);
        printf("the value of energycharg:%f\n",energycharg);
        printf("the value of totalamount: %f\n",totalamount);
    }
     else if (unit >200 && unit < 300)
    {
        price = unit * 3;
        energycharg = price*0.5;
        totalamount = price + energycharg;
        printf("the value of price :%f\n",price);
        printf("the value of energycharg:%f\n",energycharg);
        printf("the value of totalamount: %f\n",totalamount);
    }
    else if (unit >300 && unit < 400)
    {
        price = unit * 4;
        energycharg = price*0.5;
        totalamount = price + energycharg;
        printf("the value of price :%f\n",price);
        printf("the value of energycharg:%f\n",energycharg);
        printf("the value of totalamount: %f\n",totalamount);
    }
    else if (unit > 400 )
    {
        price = unit * 5;
        energycharg = price*0.5;
        totalamount = price + energycharg;
        printf("the value of price :%f\n",price);
        printf("the value of energycharg:%f\n",energycharg);
        printf("the value of totalamount: %f\n",totalamount);
    }
    else
    {
        printf("invalid unit");
    }
    
    

        printf("goodbye..");
}