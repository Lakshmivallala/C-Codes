#include<stdio.h>
int main()
{
int n=1;
while(n<=6)
{
if(n==3 || n==6)
{
n++;
continue;
}
else
{printf("%d\n",n);
n++;
}
}
return 0;
}
