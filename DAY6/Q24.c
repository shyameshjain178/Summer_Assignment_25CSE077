//Find x^n without pow()

#include<stdio.h>
int main()
{
int x,n,i;
long long p=1;
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)
p=p*x;
printf("%lld",p);
return 0;
}