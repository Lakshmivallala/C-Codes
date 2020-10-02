#include<stdio.h>
int main()
{
int n,p,sum;
printf("Enter the value of n: ");
scanf("%d",&n);
sum=0;
for(n;n>=1;n--)
sum=sum+n;
printf("The sum value is %d ",sum);
return 0;
}
