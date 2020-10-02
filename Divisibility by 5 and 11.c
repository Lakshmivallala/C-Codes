/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
   int a;
   printf("Enter an integer");
   scanf("%d",&a);
   if((a%5==0)&&(a%11==0))
   printf("The number you entered is divisible by 5 and 11");
   else
   printf("The number you entered is not divisible by 5 and 11");
   return 0;
    
}
