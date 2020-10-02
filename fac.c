#include<stdio.h>
int main()
{
int n,sum,p;
sum=1;
printf("Enter the value of n: ");
scanf("%d",&n);
p=n;
for(n;n>=1;n--)
sum=sum*n;
printf("The factorial of %d is %d",p,sum);
return 0;
}

