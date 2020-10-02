/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
void main()
{
 int q,d,c,tc;
 printf("Enter the quantity purchased");
 scanf("%d",&q);
 if(q>1000)
 {
 d=(q*100)*0.1 ;
 tc=((q*100)-d);
 printf("The total cost is %d",tc);
 }
 else
 {
 tc=q*100;
 printf("The total cost is %d",tc);
 }
  }
  
  
    

