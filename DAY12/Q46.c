// function armstrong

#include<stdio.h>
int armstrong(int n){
int sum=0,t=n,r;
while(t>0){
r=t%10;
sum=sum+r*r*r;
t/=10;
}
return sum==n;
}
int main(){
int n;
scanf("%d",&n);
if(armstrong(n))
printf("Armstrong");
else
printf("Not Armstrong");
return 0;
}