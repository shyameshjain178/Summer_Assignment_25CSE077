//pair with given sum

#include<stdio.h>
int main()
{
int n,a[100],i,j,sum;
printf("Enter size: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter sum: ");
scanf("%d",&sum);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]+a[j]==sum)
printf("%d %d\n",a[i],a[j]);
}
}
return 0;
}