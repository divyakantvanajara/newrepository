// write a program to make calculator
// given option as below
// 1-> addition
// 2-> subtraction
// 3-> multiplication
// 4=> division
// 5-> modulas
// 6-> minimum
// 7-> maximum
// 8-> equality
#include<stdio.h>

void main()
{
int num1, num2, cal,ope; //decleration of integer variables
//char ope; //decleration of character variables

printf("Enter First Number : ");
scanf("%d", &num1); //Getting the first value from user

printf("Enter Second Number : ");
scanf("%d", &num2); //Getting the second value from user

printf("Enter 1 for plus \n Enter 2 for minus \n enter 3 for multiply \n enter 4 for divide \n enter 5 modulas \n enter 6 minimum \n enter 7 maximum \n enter equality");
    printf("\nselect one option");
    scanf("%d",&ope);

//printf("Choose Any Operator: +  | - | / | * \n");
//scanf(" %d", &ope); // getting the operator for operation from user

 // Applying if-else condition to check conditions 
 if(ope == 1)
 {
  cal= num1 + num2;
  printf("Addition of two numbers is: %i",cal);
 }

 else if(ope == 2)
 {
  cal= num1 - num2;
  printf("Subtraction of two numbers is: %i",cal);
 }
  
 else if(ope == 3)
 {
  cal= num1 * num2;
  printf(" Multiplication of two numbers is: %i",cal);
 }
  
 else if(ope == 4 )
 {
  cal= num1 / num2;
  printf(" Divisionof two numbers is: %i",cal);
 }
  
 else if(ope == 5 )
 {
  cal= num1 % num2;
  printf("Modulas of two numbers is: %i",cal);
 }
 //else if(ope == 6)
 //{
 // cal= num1 % num2;
 // printf("Modulas of two numbers is: %i",cal);
 //}

  
 else
 {
 printf("Invalid Input"); 
 }

}