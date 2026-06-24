//maximum frequency element

#include<stdio.h>
int main()
{
int n,a[100],i,j,count,max=0,element;
printf("Enter size: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
count=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
count++;
}
if(count>max)
{
max=count;
element=a[i];
}
}
printf("Element = %d\nFrequency = %d",element,max);
return 0;
}