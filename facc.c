#include<stdio.h>
int main()
{
int n=1,i,j;
for(i=1;i<=4;++i)
{
for(j=1;j<=i;++j)
{
if (j>=3)
printf("  1");
else
printf("1");
}
printf("\n");
}
return 0;
}

