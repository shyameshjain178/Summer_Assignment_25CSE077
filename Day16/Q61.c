//missing number in array

#include<stdio.h>
int main()
{
int n,i,sum=0,total,missing,a[100];
printf("Enter size: ");
scanf("%d",&n);
printf("Enter %d elements: ",n-1);
for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
total=n*(n+1)/2;
missing=total-sum;
printf("Missing number = %d",missing);
return 0;
}