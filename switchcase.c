//write a programe to findout whether the given letter is vowel or not 
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter value of letter ");
    scanf("%c",&letter);

    switch(letter)
    {
        case 'a':
        printf("It is vowel");
        break;
        case 'e':
        printf("It is vowel");
        break;
        case 'i':
        printf("It is vowel");
        break;
        case 'o':
        printf("It is vowel");
        break;
        case 'u':
        printf("It is vowel");
        break;
        case 'A':
        printf("It is vowel");
        break;
        case 'E':
        printf("It is vowel");
        break;
        case 'I':
        printf("It is vowel");
        break;
        case 'O':
        printf("It is vowel");
        break;
        case 'U':
        printf("It is vowel");
        break;
        default :
        printf("It is consonent");
        break;
    }
}