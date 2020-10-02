#include<stdio.h>
void main()
{
int n;
printf("enter a number");
scanf("%d" , &n);
int count=0;
for(int j=1 ;j<=n ;j++);
{
count+=j;
}
printf("%d", count);
}

