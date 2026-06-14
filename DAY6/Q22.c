//Convert Binary to Decimal

#include<stdio.h>
int main()
{
long long n;
int r,p=1,d=0;
scanf("%lld",&n);
while(n>0)
{
r=n%10;
d=d+r*p;
p=p*2;
n=n/10;
}
printf("%d",d);
return 0;
}