#include<stdio.h>
void main()
{
int i;
scanf("%d", &i);
int fact=1;
for (int j=i; j>= 1; j--)
{
fact = fact* j;
}
printf("%d", fact);
printf("\n");
}
