// write a programe to diplay zodic symbol & given zodic sign from given birthday and month as following criteria

#include<stdio.h>

void main()
{
    int month,days;

    printf("Enter your birth month : ");
    scanf("%d",&month);
    printf("Enter your birth day : ");
    scanf("%d",&days);

    if( (month==3 && days>=20 && days<=31 ) || ( month==4 && days>=1 && days<=19))
    {
        printf("your zodic sign is arise and symbol is the ram");
    }
    else if( (month==4 && days>=20 && days<=31 ) || ( month==5 && days>=1 && days<=20))
    {
        printf("your zodic sign is taurus and symbol is the ram");
    }
    else if( (month==5 && days>=21 && days<=31 ) || ( month==6 && days>=1 && days<=20))
    {
        printf("your zodic sign is gemini and symbol is the ram");
    }
    else if( (month==6 && days>=21 && days<=31 ) || ( month==7 && days>=1 && days<=22))
    {
        printf("your zodic sign is cancer and symbol is the ram");
    }
    else if( (month==7 && days>=23 && days<=31 ) || ( month==8 && days>=1 && days<=22))
    {
        printf("your zodic sign is leo and symbol is the ram");
    }
    else if( (month==8 && days>=23 && days<=31 ) || ( month==9 && days>=1 && days<=22))
    {
        printf("your zodic sign is virgo and symbol is the ram");
    }
     else if( (month==9 && days>=23 && days<=31 ) || ( month==10 && days>=1 && days<=22))
    {
        printf("your zodic sign is libra and symbol is the ram");
    }
     else if( (month==10 && days>=23 && days<=31 ) || ( month==11 && days>=1 && days<=22))
    {
        printf("your zodic sign is scorpio and symbol is the ram");
    }
     else if( (month==11 && days>=23 && days<=31 ) || ( month==12 && days>=1 && days<=22))
    {
        printf("your zodic sign is sagittarius and symbol is the ram");
    }
     else if( (month==12 && days>=23 && days<=31 ) || ( month==1 && days>=1 && days<=19))
    {
        printf("your zodic sign is capricorn and symbol is the ram");
    }
     else if( (month==1 && days>=20&& days<=31 ) || ( month==2 && days>=1 && days<=17))
    {
        printf("your zodic sign is aquarius and symbol is the ram");
    }
     else if( (month==2 && days>=18 && days<=29 ) || ( month==3 && days>=1 && days<=19))
    {
        printf("your zodic sign is pisces and symbol is the ram");
    }
    else
    {
        printf("invalid Birth date\n");
    }
    printf("\ngoodbye...");
}