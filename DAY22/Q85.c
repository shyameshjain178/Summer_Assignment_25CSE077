//check palindrome string

#include<stdio.h>
#include<string.h>
int main(){
char s[100];
int i,l,f=1;
printf("Enter string: ");
gets(s);
l=strlen(s);
for(i=0;i<l/2;i++){
if(s[i]!=s[l-1-i]){
f=0;
break;
}
}
if(f)
printf("Palindrome");
else
printf("Not Palindrome");
return 0;
}