/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    float BS,GS,HRA,DA;
    printf("Enter the amount of basic salary");
    scanf("%f",&BS);
    if(BS<=10000)
    {
        HRA=BS*0.2;
        DA=BS*0.8;
    }
    else if(BS<=20000)
    {
        HRA=BS*0.25;
        DA=BS*0.9;
    }
    else if(BS>20000)
    {
        HRA=BS*0.3;
        DA=BS*0.95;
    }
    else
    printf("Enter valid basic salary");
    GS=DA+HRA+BS;
    printf("The gross salary is %.2f",GS);
}
