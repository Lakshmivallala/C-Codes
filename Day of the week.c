/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
  char operator;
  printf("Enter the week day number");
  scanf("%c",&operator);
  switch(operator)
  {
      case '1':
      printf("The day is Monday");
      break;
      case '2':
      printf("The day is Tuesday");
      break;
      case '3':
      printf("The day is Wednesday");
      break;
      case '4':
      printf("The day is Thursday");
      break;
      case '5':
      printf("The day is Friday");
      break;
      case '6':
      printf("The day is Saturday");
      break;
      case '7':
      printf("The day is Sunday");
      break;
      default:
      printf("The number is invalid");
      break;
  }
  }
  
  
    

