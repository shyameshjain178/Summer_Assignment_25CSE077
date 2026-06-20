//funtion palindrome

#include<stdio.h>
int palindrome(int n){
int rev=0,t=n;
while(t>0){
rev=rev*10+t%10;
t/=10;
}
return rev==n;
}
int main(){
int n;
scanf("%d",&n);
if(palindrome(n))
printf("Palindrome");
else
printf("Not Palindrome");
return 0;
}